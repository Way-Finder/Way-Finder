/********************************************************************************
** Form generated from reading UI file 'grapheditorsecwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHEDITORSECWINDOW_H
#define UI_GRAPHEDITORSECWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphEditorSecWindow
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *sortAscending;
    QPushButton *sortDescending;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *isComplete;
    QFrame *frame;
    QComboBox *city2Combo;
    QComboBox *city1Combo;
    QLabel *city1Label;
    QLabel *city2Label;
    QLabel *label_4;
    QPushButton *mainPageButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *numEdges;
    QLabel *label;

    void setupUi(QWidget *GraphEditorSecWindow)
    {
        if (GraphEditorSecWindow->objectName().isEmpty())
            GraphEditorSecWindow->setObjectName("GraphEditorSecWindow");
        GraphEditorSecWindow->resize(1422, 760);
        GraphEditorSecWindow->setMaximumSize(QSize(16777215, 16777215));
        GraphEditorSecWindow->setAutoFillBackground(false);
        GraphEditorSecWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        gridLayout = new QGridLayout(GraphEditorSecWindow);
        gridLayout->setObjectName("gridLayout");
        scrollArea = new QScrollArea(GraphEditorSecWindow);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(124);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        scrollArea->setFrameShape(QFrame::Box);
        scrollArea->setLineWidth(7);
        scrollArea->setMidLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 1372, 435));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents_3->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_3->setSizePolicy(sizePolicy1);
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        scrollArea->setWidget(scrollAreaWidgetContents_3);

        gridLayout->addWidget(scrollArea, 9, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        sortAscending = new QPushButton(GraphEditorSecWindow);
        sortAscending->setObjectName("sortAscending");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(40);
        sizePolicy2.setVerticalStretch(121);
        sizePolicy2.setHeightForWidth(sortAscending->sizePolicy().hasHeightForWidth());
        sortAscending->setSizePolicy(sizePolicy2);
        sortAscending->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #606060; /* Slightly darker gray */\n"
"    border: 3px solid black;\n"
"    border-radius: 20px;\n"
"    padding: 5px 10px; \n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"	font: bold 20px;\n"
"    margin: 4px 2px;\n"
"    cursor: pointer;\n"
"    border-radius: 12px; /* Set the border radius to make it rounded */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #404040 /* Darker gray when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #999999; /* Even darker gray when pressed */\n"
"}\n"
""));

        horizontalLayout_5->addWidget(sortAscending);

        sortDescending = new QPushButton(GraphEditorSecWindow);
        sortDescending->setObjectName("sortDescending");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(42);
        sizePolicy3.setVerticalStretch(121);
        sizePolicy3.setHeightForWidth(sortDescending->sizePolicy().hasHeightForWidth());
        sortDescending->setSizePolicy(sizePolicy3);
        sortDescending->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #606060; /* Slightly darker gray */\n"
"    border: 3px solid black;\n"
"    border-radius: 20px;\n"
"    padding: 5px 10px; \n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"	font: bold 20px;\n"
"    margin: 4px 2px;\n"
"    cursor: pointer;\n"
"    border-radius: 12px; /* Set the border radius to make it rounded */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #404040 /* Darker gray when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #999999; /* Even darker gray when pressed */\n"
"}\n"
""));

        horizontalLayout_5->addWidget(sortDescending);

        horizontalSpacer = new QSpacerItem(803, 64, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton = new QPushButton(GraphEditorSecWindow);
        pushButton->setObjectName("pushButton");
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(0, 18));
        pushButton->setMaximumSize(QSize(16777215, 16777215));
        pushButton->setSizeIncrement(QSize(0, 18));
        pushButton->setBaseSize(QSize(0, 8));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #606060; /* Slightly darker gray */\n"
"    border: 3px solid black;\n"
"    border-radius: 20px;\n"
"    padding: 5px 10px; \n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"	font: bold 20px;\n"
"    margin: 4px 2px;\n"
"    cursor: pointer;\n"
"    border-radius: 12px; /* Set the border radius to make it rounded */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #404040 /* Darker gray when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #999999; /* Even darker gray when pressed */\n"
"}\n"
""));

        horizontalLayout_5->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_5, 10, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_2 = new QSpacerItem(459, 14, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        isComplete = new QLabel(GraphEditorSecWindow);
        isComplete->setObjectName("isComplete");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(true);
        isComplete->setFont(font);

        horizontalLayout_2->addWidget(isComplete);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 2, 1);

        frame = new QFrame(GraphEditorSecWindow);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(100);
        sizePolicy4.setVerticalStretch(38);
        sizePolicy4.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy4);
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"QComboBox {\n"
"    background-color: white;\n"
"    border: 2px solid qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(64, 64, 64, 255));\n"
"    border-radius: 10px;\n"
"    padding: 1px 18px 1px 3px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: rgba(0, 0, 0, 255);\n"
"    border-left-style: solid;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/icons/icons/down_arrow.svg); \n"
"	width : 20px;\n"
"}\n"
"\n"
"QComboBox::down-arrow:on {\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
"\n"
""));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(9);
        city2Combo = new QComboBox(frame);
        city2Combo->setObjectName("city2Combo");
        city2Combo->setGeometry(QRect(620, 90, 361, 31));
        city2Combo->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: white;\n"
"    border: 2px solid qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(64, 64, 64, 255));\n"
"    border-radius: 10px;\n"
"    padding: 1px 18px 1px 3px; \n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: white; \n"
"    border: 2px solid qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(64, 64, 64, 255));\n"
"    border-radius: 10px;\n"
"    selection-background-color: lightblue;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: rgba(0, 0, 0, 255);\n"
"    border-left-style: solid;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/icons/icons/down_arrow.svg); \n"
"	width : 20px;\n"
"}\n"
"\n"
"QComboBox::down-arrow:on {\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
"\n"
""));
        city1Combo = new QComboBox(frame);
        city1Combo->setObjectName("city1Combo");
        city1Combo->setGeometry(QRect(620, 20, 361, 31));
        city1Combo->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: white;\n"
"    border: 2px solid qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(64, 64, 64, 255));\n"
"    border-radius: 10px;\n"
"    padding: 1px 18px 1px 3px; \n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: white; \n"
"    border: 2px solid qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(64, 64, 64, 255));\n"
"    border-radius: 10px;\n"
"    selection-background-color: lightblue;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: rgba(0, 0, 0, 255);\n"
"    border-left-style: solid;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/icons/icons/down_arrow.svg); \n"
"	width : 20px;\n"
"}\n"
"\n"
"QComboBox::down-arrow:on {\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
"\n"
""));
        city1Label = new QLabel(frame);
        city1Label->setObjectName("city1Label");
        city1Label->setGeometry(QRect(480, 20, 91, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MV Boli")});
        font1.setPointSize(20);
        city1Label->setFont(font1);
        city2Label = new QLabel(frame);
        city2Label->setObjectName("city2Label");
        city2Label->setGeometry(QRect(480, 80, 101, 41));
        city2Label->setFont(font1);
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(360, 10, 111, 121));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font2.setBold(true);
        font2.setItalic(true);
        label_4->setFont(font2);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/direction_arrow.svg")));
        label_4->setScaledContents(true);
        mainPageButton = new QPushButton(frame);
        mainPageButton->setObjectName("mainPageButton");
        mainPageButton->setGeometry(QRect(10, 10, 191, 51));
        mainPageButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #606060; /* Slightly darker gray */\n"
"    border: 3px solid black;\n"
"    border-radius: 20px;\n"
"    padding: 5px 10px; \n"
"    text-align: center;\n"
"    text-decoration: none;\n"
"    display: inline-block;\n"
"    font-size: 16px;\n"
"	font: bold 20px;\n"
"    margin: 4px 2px;\n"
"    cursor: pointer;\n"
"    border-radius: 12px; /* Set the border radius to make it rounded */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #404040 /* Darker gray when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #999999; /* Even darker gray when pressed */\n"
"}\n"
""));
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(1150, 70, 153, 52));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        numEdges = new QLabel(layoutWidget);
        numEdges->setObjectName("numEdges");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font3.setPointSize(20);
        font3.setBold(true);
        numEdges->setFont(font3);

        horizontalLayout_3->addWidget(numEdges);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Trebuchet MS")});
        font4.setPointSize(22);
        font4.setBold(true);
        label->setFont(font4);

        horizontalLayout_3->addWidget(label);

        layoutWidget->raise();
        city1Combo->raise();
        city2Combo->raise();
        city1Label->raise();
        city2Label->raise();
        label_4->raise();
        mainPageButton->raise();

        gridLayout->addWidget(frame, 1, 0, 1, 1);


        retranslateUi(GraphEditorSecWindow);

        QMetaObject::connectSlotsByName(GraphEditorSecWindow);
    } // setupUi

    void retranslateUi(QWidget *GraphEditorSecWindow)
    {
        GraphEditorSecWindow->setWindowTitle(QCoreApplication::translate("GraphEditorSecWindow", "Form", nullptr));
        sortAscending->setText(QCoreApplication::translate("GraphEditorSecWindow", "Sort Cost Ascending", nullptr));
        sortDescending->setText(QCoreApplication::translate("GraphEditorSecWindow", "Sort Cost Descending", nullptr));
        pushButton->setText(QCoreApplication::translate("GraphEditorSecWindow", "Add Edge", nullptr));
        isComplete->setText(QCoreApplication::translate("GraphEditorSecWindow", "**This is not a complete graph**", nullptr));
        city1Label->setText(QCoreApplication::translate("GraphEditorSecWindow", "City1:", nullptr));
        city2Label->setText(QCoreApplication::translate("GraphEditorSecWindow", "City2:", nullptr));
        label_4->setText(QString());
        mainPageButton->setText(QCoreApplication::translate("GraphEditorSecWindow", "Main Page", nullptr));
        numEdges->setText(QCoreApplication::translate("GraphEditorSecWindow", "XX", nullptr));
        label->setText(QCoreApplication::translate("GraphEditorSecWindow", "Edges", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphEditorSecWindow: public Ui_GraphEditorSecWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHEDITORSECWINDOW_H
