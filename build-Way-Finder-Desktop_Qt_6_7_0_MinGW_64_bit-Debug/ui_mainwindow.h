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
    QGroupBox *groupBox;
    QPushButton *BEFES;
    QPushButton *DEFES;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *depcity;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *destcity;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *pricein;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(220, 220, 361, 241));
        BEFES = new QPushButton(groupBox);
        BEFES->setObjectName("BEFES");
        BEFES->setGeometry(QRect(60, 210, 83, 29));
        DEFES = new QPushButton(groupBox);
        DEFES->setObjectName("DEFES");
        DEFES->setGeometry(QRect(210, 210, 83, 29));
        widget = new QWidget(groupBox);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 50, 311, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        depcity = new QComboBox(widget);
        depcity->setObjectName("depcity");

        horizontalLayout->addWidget(depcity);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        destcity = new QComboBox(widget);
        destcity->setObjectName("destcity");

        horizontalLayout_2->addWidget(destcity);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        pricein = new QLineEdit(widget);
        pricein->setObjectName("pricein");

        horizontalLayout_3->addWidget(pricein);


        verticalLayout->addLayout(horizontalLayout_3);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(290, 100, 251, 111));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 20, 91, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(660, 550, 121, 29));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "selecteth from the options below", nullptr));
        BEFES->setText(QCoreApplication::translate("MainWindow", "BFS", nullptr));
        DEFES->setText(QCoreApplication::translate("MainWindow", "DFS", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "wh're art thee anon", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "wh're doth thee wanteth to wend", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "state thy price", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "WLECOME TO WAYFINDER", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "WAYFINDER", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "EDITING PAGE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
