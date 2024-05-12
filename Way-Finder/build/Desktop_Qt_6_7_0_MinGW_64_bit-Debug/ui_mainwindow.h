/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QWidget *destination;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *depcity;
    QWidget *arrival;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *destcity;
    QWidget *price;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *pricein;
    QLabel *label_5;
    QGroupBox *groupBox_2;
    QPushButton *BEFES;
    QPushButton *DEFES;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *DFS_pic;
    QLabel *BFS_pic;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(947, 610);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 10, 1011, 601));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 138, 143);"));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(160, 60, 541, 221));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        destination = new QWidget(layoutWidget1);
        destination->setObjectName("destination");
        horizontalLayout = new QHBoxLayout(destination);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(destination);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label);

        depcity = new QComboBox(destination);
        depcity->setObjectName("depcity");
        depcity->setStyleSheet(QString::fromUtf8("\n"
"  color: black;\n"
"  background-color: white;\n"
"  border: 3px solid black;\n"
"  padding: 2px;\n"
""));

        horizontalLayout->addWidget(depcity);


        verticalLayout->addWidget(destination);

        arrival = new QWidget(layoutWidget1);
        arrival->setObjectName("arrival");
        horizontalLayout_2 = new QHBoxLayout(arrival);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(arrival);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(label_2);

        destcity = new QComboBox(arrival);
        destcity->setObjectName("destcity");
        destcity->setStyleSheet(QString::fromUtf8("\n"
"  color: black;\n"
"  background-color: white;\n"
"  border: 3px solid black;\n"
"  padding: 2px;\n"
""));

        horizontalLayout_2->addWidget(destcity);


        verticalLayout->addWidget(arrival);

        price = new QWidget(layoutWidget1);
        price->setObjectName("price");
        horizontalLayout_3 = new QHBoxLayout(price);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(price);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(price);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(152, 0));

        horizontalLayout_3->addWidget(label_4);

        pricein = new QLineEdit(price);
        pricein->setObjectName("pricein");
        pricein->setStyleSheet(QString::fromUtf8("\n"
"  color: black;\n"
"  background-color: white;\n"
"  border: 3px solid black;\n"
"  padding: 2px;\n"
""));

        horizontalLayout_3->addWidget(pricein);


        verticalLayout->addWidget(price);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(390, 10, 151, 41));
        QFont font;
        font.setPointSize(16);
        font.setUnderline(true);
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(-10, 300, 961, 301));
        groupBox_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(203, 203, 203);"));
        BEFES = new QPushButton(groupBox_2);
        BEFES->setObjectName("BEFES");
        BEFES->setGeometry(QRect(440, 180, 121, 51));
        BEFES->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 138, 143);;\n"
"color: black;\n"
"border: 3px solid black;\n"
"border-radius: 20px;\n"
"padding: 5px 10px; \n"
""));
        DEFES = new QPushButton(groupBox_2);
        DEFES->setObjectName("DEFES");
        DEFES->setGeometry(QRect(440, 60, 121, 51));
        DEFES->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 138, 143);;\n"
"color: black;\n"
"border: 3px solid black;\n"
"border-radius: 20px;\n"
"padding: 5px 10px; \n"
""));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(810, 230, 121, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 138, 143);;\n"
"color: black;\n"
"border: 3px solid black;\n"
"border-radius: 20px;\n"
"padding: 5px 10px; \n"
""));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(280, 180, 101, 51));
        QFont font1;
        font1.setPointSize(12);
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(280, 60, 101, 51));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        DFS_pic = new QLabel(groupBox_2);
        DFS_pic->setObjectName("DFS_pic");
        DFS_pic->setGeometry(QRect(600, 10, 151, 131));
        DFS_pic->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/DFS.png")));
        DFS_pic->setScaledContents(true);
        BFS_pic = new QLabel(groupBox_2);
        BFS_pic->setObjectName("BFS_pic");
        BFS_pic->setGeometry(QRect(610, 140, 141, 131));
        BFS_pic->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/BFS.png")));
        BFS_pic->setScaledContents(true);

        verticalLayout_2->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Departure City", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Arrival City", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Enter your Budget", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "WAYFINDER", nullptr));
        groupBox_2->setTitle(QString());
        BEFES->setText(QCoreApplication::translate("MainWindow", "BFS", nullptr));
        DEFES->setText(QCoreApplication::translate("MainWindow", "DFS", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Edit Graph", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Search By :", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Search By :", nullptr));
        DFS_pic->setText(QString());
        BFS_pic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
