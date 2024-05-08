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
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *depcity;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *destcity;
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
        MainWindow->resize(947, 610);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 10, 1011, 601));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 138, 143);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 60, 541, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        depcity = new QComboBox(layoutWidget);
        depcity->setObjectName("depcity");

        horizontalLayout->addWidget(depcity);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        destcity = new QComboBox(layoutWidget);
        destcity->setObjectName("destcity");

        horizontalLayout_2->addWidget(destcity);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        pricein = new QLineEdit(layoutWidget);
        pricein->setObjectName("pricein");
        pricein->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(pricein);


        verticalLayout->addLayout(horizontalLayout_3);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(320, 10, 241, 41));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(-10, 300, 961, 301));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(161, 242, 255);\n"
"background-color: rgb(203, 203, 203);"));
        BEFES = new QPushButton(groupBox_2);
        BEFES->setObjectName("BEFES");
        BEFES->setGeometry(QRect(440, 180, 121, 51));
        DEFES = new QPushButton(groupBox_2);
        DEFES->setObjectName("DEFES");
        DEFES->setGeometry(QRect(440, 60, 121, 51));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(810, 230, 121, 41));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(280, 180, 101, 51));
        QFont font;
        font.setPointSize(12);
        label_6->setFont(font);
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(280, 60, 101, 51));
        label_7->setFont(font);
        DFS_pic = new QLabel(groupBox_2);
        DFS_pic->setObjectName("DFS_pic");
        DFS_pic->setGeometry(QRect(610, 20, 151, 121));
        BFS_pic = new QLabel(groupBox_2);
        BFS_pic->setObjectName("BFS_pic");
        BFS_pic->setGeometry(QRect(600, 150, 151, 141));

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
        label_5->setText(QCoreApplication::translate("MainWindow", "WLECOME TO WAYFINDER", nullptr));
        groupBox_2->setTitle(QString());
        BEFES->setText(QCoreApplication::translate("MainWindow", "BFS", nullptr));
        DEFES->setText(QCoreApplication::translate("MainWindow", "DFS", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "EDITING PAGE", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Search By :", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Search By :", nullptr));
        DFS_pic->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        BFS_pic->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
