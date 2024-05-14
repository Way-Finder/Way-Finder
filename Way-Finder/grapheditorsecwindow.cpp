#include "grapheditorsecwindow.h"
#include "ui_grapheditorsecwindow.h"
#include <QMessageBox>
#include <QGroupBox>
#include <QAction>
#include <QPushButton>
#include <addedge.h>
#include <editedge.h>
#include <newedgeinput.h>
#include <QLineEdit>
#include <mainwindow.h>
#include <depthfirstsearch.h>

GraphEditorSecWindow::GraphEditorSecWindow(adjmap *adj, QWidget *parent)
    : QWidget(parent),
    ui(new Ui::GraphEditorSecWindow)

{
    ui->setupUi(this);

    this->adj = adj;

    for (auto it = this->adj->begin(); it != this->adj->end(); ++it) {
        ui->city1Combo->addItem(it.key());
        ui->city2Combo->addItem(it.key());
    }

    city1=ui->city1Combo->currentText();
    city2=ui->city2Combo->currentText();

    connect(ui->pushButton,&QPushButton::clicked,this,&GraphEditorSecWindow::addEdgeButton);
    connect(ui->sortAscending,&QPushButton::clicked,this,&GraphEditorSecWindow::sortCostAscending);
    connect(ui->sortDescending,&QPushButton::clicked,this,&GraphEditorSecWindow::sortCostDescending);
    connect(ui->city1Combo,&QComboBox::activated,this,&GraphEditorSecWindow::selectCity1);
    connect(ui->city2Combo,&QComboBox::activated,this,&GraphEditorSecWindow::selectCity2);
    connect(ui->mainPageButton,&QPushButton::clicked,this,&GraphEditorSecWindow::backToMainPage);

    loadEdges();
}

GraphEditorSecWindow::~GraphEditorSecWindow()
{
    delete ui;
}

void GraphEditorSecWindow::addEdges(QString vehicle,int cost,int edgeInd,bool addToMap=true)
{
    if(addToMap){
        AddEdges add(adj,city1,city2);
        add.AddEdge(city1,city2,vehicle,cost);
        loadEdges();
    }else addGroupBox(vehicle,cost,edgeInd);

}

void GraphEditorSecWindow::removeGroupBoxes()
{
    QVBoxLayout *vbox = dynamic_cast<QVBoxLayout *>(*(ui->scrollAreaWidgetContents_3->children().begin()));
    for(auto i:ui->scrollAreaWidgetContents_3->children()){
        if(QGroupBox *gb=dynamic_cast<QGroupBox*>(i)){
            vbox->removeWidget(gb);
            gb->hide();
        }
    }
}

void GraphEditorSecWindow::loadEdges()
{
    if(city1==city2)return;
    removeGroupBoxes();

    int cnt=1;
    for(auto i:(*adj)[city1][city2]){
        addEdges(i.vehicle,i.cost,cnt++,false);
    }


    ui->numEdges->setText(QString::number((*adj)[city1][city2].size()));

    AddEdges isCompleteGraph(adj,city1,city2);
    if(isCompleteGraph.IsCompleteGraph()){
        ui->isComplete->setText("The graph is a complete graph!");
        ui->isComplete->setStyleSheet("QLabel { color: DarkGreen; }");
    }else {
        ui->isComplete->setText("The graph is not a complete graph!");
        ui->isComplete->setStyleSheet("QLabel { color: DarkRed; }");
    }
}

void GraphEditorSecWindow::deleteEdge()
{

    QPushButton* buttonSender = qobject_cast<QPushButton*>(sender()); // retrieve the button you have clicked;

    QString oldVehicle,oldCost;
    bool flag=true;

    for(auto i:buttonSender->parentWidget()->children()){
        if(QLineEdit *line = dynamic_cast<QLineEdit*>(i)){
            if(flag){
                oldVehicle=line->text();
                flag=false;
            }else oldCost=line->text();
        }
    }

    removeEdge(oldVehicle,oldCost.toInt(),adj);
    loadEdges();

}

void GraphEditorSecWindow::addEdgeButton()
{
    if(city1==city2)return;
    NewEdgeInput newEdge;
    newEdge.exec();

    if(!newEdge.getVehicle().isEmpty() && newEdge.getPrice())
        addEdges(newEdge.getVehicle(),newEdge.getPrice(),(*adj)[city1][city2].size());

}

void GraphEditorSecWindow::editButton()
{
    QPushButton* buttonSender = qobject_cast<QPushButton*>(sender());

    bool flag=true;

    for(auto i:buttonSender->parentWidget()->children()){
        if(QLineEdit *line = dynamic_cast<QLineEdit*>(i)){
            if(flag)oldVehicle=line->text(),flag=false;
            else oldPrice=line->text();

            line->setReadOnly(false);
        }else if(QPushButton *button = dynamic_cast<QPushButton*>(i)){
            if(button->text()=="Delete" || button->text()=="Edit")
                button->setVisible(false);
            else button->setVisible(true);
        }
    }
}

void GraphEditorSecWindow::editEdge()
{
    QPushButton* buttonSender = qobject_cast<QPushButton*>(sender());

    QString newVehicle,newCost;
    bool flag=true;

    for(auto i:buttonSender->parentWidget()->children()){
        if(QLineEdit *line = dynamic_cast<QLineEdit*>(i)){
            if(flag)newVehicle=line->text(),flag=false;
            else newCost=line->text();

            line->setReadOnly(true);
        }else if(QPushButton *button = dynamic_cast<QPushButton*>(i)){
            if(button->text()=="Delete" || button->text()=="Edit")
                button->setVisible(true);
            else button->setVisible(false);
        }
    }

    if(buttonSender->text()=="Apply"){
        if(!newVehicle.isEmpty() && !newCost.isEmpty()){
            editedge edit(city1,city2,oldVehicle,oldPrice.toFloat(),adj);
            edit.setNewPrice(newCost.toFloat());
            edit.setNewTransportation(newVehicle);
            edit.editEdge();
        }
    }
    loadEdges();
}

void GraphEditorSecWindow::sortCostAscending()
{
    if(city1==city2)return;
    std::sort((*adj)[city1][city2].begin(),(*adj)[city1][city2].end());
    loadEdges();
}

void GraphEditorSecWindow::sortCostDescending()
{
    if(city1==city2)return;
    std::sort((*adj)[city1][city2].begin(),(*adj)[city1][city2].end(),std::greater<Connection>());
    loadEdges();
}

void GraphEditorSecWindow::selectCity1()
{
    city1 = ui->city1Combo->currentText();
    loadEdges();
}

void GraphEditorSecWindow::selectCity2()
{
    city2 = ui->city2Combo->currentText();
    loadEdges();
}

void GraphEditorSecWindow::backToMainPage()
{
    MainWindow *mainPage = new MainWindow(adj);
    mainPage->setAttribute(Qt::WA_DeleteOnClose);
    mainPage->show();
    this->close();
}

void GraphEditorSecWindow::addGroupBox(QString vehicle,int cost,int edgeInd)
{
    QGroupBox *groupBox = new QGroupBox(ui->scrollAreaWidgetContents_3);
    QFont font;
    font.setItalic(true);
    font.setBold(true);
    font.setPointSize(15);
    groupBox->setFont(font);
    groupBox->setStyleSheet("QGroupBox { border: 5px solid gray; border-radius: 30px; }");


    groupBox->setTitle("Edge "+QString::number(edgeInd));

    QVBoxLayout *verticalLayout = new QVBoxLayout(groupBox);
    QHBoxLayout *horizontalLayout_3 = new QHBoxLayout();
    QLabel *label_7 = new QLabel(groupBox);
    QFont font3;
    font3.setPointSize(24);
    font3.setBold(true);
    label_7->setFont(font3);
    label_7->setText("Vehicle");

    horizontalLayout_3->addWidget(label_7);

    QLineEdit *lineEdit = new QLineEdit(groupBox);
    QFont font4;
    font4.setPointSize(24);
    lineEdit->setFont(font4);
    lineEdit->setText(vehicle);
    QSizePolicy t;
    t.setHorizontalPolicy(QSizePolicy::Policy(5));
    lineEdit->setSizePolicy(t);
    lineEdit->setReadOnly(true);
    lineEdit->setStyleSheet("QLineEdit {"
                            "border: 2px solid #333;"  // 2px solid border with color #333
                            "border-radius: 5px;"      // Optional: Rounded corners
                            "}");

    horizontalLayout_3->addWidget(lineEdit);


    verticalLayout->addLayout(horizontalLayout_3);

    QHBoxLayout *horizontalLayout = new QHBoxLayout();
    QLabel *label_9 = new QLabel(groupBox);
    label_9->setFont(font3);
    label_9->setText("Price");

    horizontalLayout->addWidget(label_9);

    QLineEdit *lineEdit2 = new QLineEdit(groupBox);
    lineEdit2->setObjectName("price");
    lineEdit2->setFont(font4);
    lineEdit2->setText(QString::number(cost));
    lineEdit2->setSizePolicy(t);
    lineEdit2->setReadOnly(true);
    lineEdit2->setStyleSheet("QLineEdit {"
                             "border: 2px solid #333;"  // 2px solid border with color #333
                             "border-radius: 5px;"      // Optional: Rounded corners
                             "}");

    horizontalLayout->addWidget(lineEdit2);

    verticalLayout->addLayout(horizontalLayout);

    QHBoxLayout *horizontalLayout2 = new QHBoxLayout();
    QSpacerItem *horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

    horizontalLayout2->addItem(horizontalSpacer);

    QPushButton *deleteButton = new QPushButton(groupBox);
    deleteButton->setText("Delete");
    deleteButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
                                                  "    background-color: #808080; /* Slightly darker gray */\n"
                                                  "    border: none;\n"
                                                  "    color: white;\n"
                                                  "    padding: 10px 24px;\n"
                                                  "    text-align: center;\n"
                                                  "    text-decoration: none;\n"
                                                  "    display: inline-block;\n"
                                                  "    font-size: 16px;\n"
                                                  "    margin: 4px 2px;\n"
                                                  "    cursor: pointer;\n"
                                                  "    border-radius: 12px; /* Set the border radius to make it rounded */\n"
                                                  "}\n"
                                                  "\n"
                                                  "QPushButton:hover {\n"
                                                  "    background-color: #606060; /* Darker gray when hovered */\n"
                                                  "}\n"
                                                  "\n"
                                                  "QPushButton:pressed {\n"
                                                  "    background-color: #999999; /* Even darker gray when pressed */\n"
                                                  "}\n"
                                                  ""));

    QPushButton *OkButton = new QPushButton(groupBox);
    OkButton->setText("Apply");
    OkButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
                                              "    background-color: #808080; /* Slightly darker gray */\n"
                                              "    border: none;\n"
                                              "    color: white;\n"
                                              "    padding: 10px 24px;\n"
                                              "    text-align: center;\n"
                                              "    text-decoration: none;\n"
                                              "    display: inline-block;\n"
                                              "    font-size: 16px;\n"
                                              "    margin: 4px 2px;\n"
                                              "    cursor: pointer;\n"
                                              "    border-radius: 12px; /* Set the border radius to make it rounded */\n"
                                              "}\n"
                                              "\n"
                                              "QPushButton:hover {\n"
                                              "    background-color: #606060; /* Darker gray when hovered */\n"
                                              "}\n"
                                              "\n"
                                              "QPushButton:pressed {\n"
                                              "    background-color: #999999; /* Even darker gray when pressed */\n"
                                              "}\n"
                                              ""));

    QPushButton *cancelButton = new QPushButton(groupBox);
    cancelButton->setText("Cancel");
    cancelButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
                                                  "    background-color: #808080; /* Slightly darker gray */\n"
                                                  "    border: none;\n"
                                                  "    color: white;\n"
                                                  "    padding: 10px 24px;\n"
                                                  "    text-align: center;\n"
                                                  "    text-decoration: none;\n"
                                                  "    display: inline-block;\n"
                                                  "    font-size: 16px;\n"
                                                  "    margin: 4px 2px;\n"
                                                  "    cursor: pointer;\n"
                                                  "    border-radius: 12px; /* Set the border radius to make it rounded */\n"
                                                  "}\n"
                                                  "\n"
                                                  "QPushButton:hover {\n"
                                                  "    background-color: #606060; /* Darker gray when hovered */\n"
                                                  "}\n"
                                                  "\n"
                                                  "QPushButton:pressed {\n"
                                                  "    background-color: #999999; /* Even darker gray when pressed */\n"
                                                  "}\n"
                                                  ""));

    QPushButton *editButton = new QPushButton(groupBox);
    editButton->setText("Edit");
    editButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
                                                "    background-color: #808080; /* Slightly darker gray */\n"
                                                "    border: none;\n"
                                                "    color: white;\n"
                                                "    padding: 10px 24px;\n"
                                                "    text-align: center;\n"
                                                "    text-decoration: none;\n"
                                                "    display: inline-block;\n"
                                                "    font-size: 16px;\n"
                                                "    margin: 4px 2px;\n"
                                                "    cursor: pointer;\n"
                                                "    border-radius: 12px; /* Set the border radius to make it rounded */\n"
                                                "}\n"
                                                "\n"
                                                "QPushButton:hover {\n"
                                                "    background-color: #606060; /* Darker gray when hovered */\n"
                                                "}\n"
                                                "\n"
                                                "QPushButton:pressed {\n"
                                                "    background-color: #999999; /* Even darker gray when pressed */\n"
                                                "}\n"
                                                ""));




    OkButton->setVisible(false);
    cancelButton->setVisible(false);

    horizontalLayout2->addWidget(OkButton);
    horizontalLayout2->addWidget(cancelButton);
    horizontalLayout2->addWidget(editButton);
    horizontalLayout2->addWidget(deleteButton);

    verticalLayout->addLayout(horizontalLayout2);

    connect(deleteButton,&QPushButton::clicked,this,&GraphEditorSecWindow::deleteEdge);
    connect(editButton,&QPushButton::clicked,this,&GraphEditorSecWindow::editButton);
    connect(cancelButton,&QPushButton::clicked,this,&GraphEditorSecWindow::editEdge);
    connect(OkButton,&QPushButton::clicked,this,&GraphEditorSecWindow::editEdge);


    QVBoxLayout *vbox = dynamic_cast<QVBoxLayout *>(*(ui->scrollAreaWidgetContents_3->children().begin()));


    vbox->addWidget(groupBox);
}

void GraphEditorSecWindow::removeEdge(const QString &vehicle, int cost, adjmap *adj)
{

    if(city1==city2)return;
    qDebug() << "Removing edge: Vehicle =" << vehicle << ", Cost =" << cost;

    for(QList<Connection>::Iterator it=(*adj)[city1][city2].begin();it!=(*adj)[city1][city2].end();it++){
        if(it->vehicle == vehicle && it->cost == cost){
            (*adj)[city1][city2].erase(it);
            break;
        }
    }

    for(QList<Connection>::Iterator it=(*adj)[city2][city1].begin();it!=(*adj)[city2][city1].end();it++){
        if(it->vehicle == vehicle && it->cost == cost){
            (*adj)[city2][city1].erase(it);
            break;
        }
    }

    DepthFirstSearch isConnected(adj->begin().key(),"",0);
    if(!isConnected.isConnected(adj->begin().key(),adj)) {
        Connection oldConnection;
        oldConnection.vehicle=vehicle;
        oldConnection.cost=cost;
        (*adj)[city1][city2].append(oldConnection);
        (*adj)[city2][city1].append(oldConnection);
        QMessageBox::warning(this,"Warning!","Cannot be deleted as it will lead to Disconnected Graph!");
    }

}
