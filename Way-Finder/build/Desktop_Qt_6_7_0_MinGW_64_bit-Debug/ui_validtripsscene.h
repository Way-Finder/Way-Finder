/********************************************************************************
** Form generated from reading UI file 'validtripsscene.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIDTRIPSSCENE_H
#define UI_VALIDTRIPSSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_ValidTripsScene
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *sortAscending;
    QPushButton *sortDescending;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QLabel *city1Label;
    QLabel *city2Label;
    QLabel *numEdges;
    QLabel *label;
    QLabel *label_2;
    QLabel *isComplete;

    void setupUi(QWidget *ValidTripsScene)
    {
        if (ValidTripsScene->objectName().isEmpty())
            ValidTripsScene->setObjectName("ValidTripsScene");
        ValidTripsScene->resize(1359, 760);
        ValidTripsScene->setMaximumSize(QSize(16777215, 16777215));
        ValidTripsScene->setAutoFillBackground(false);
        ValidTripsScene->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        gridLayout = new QGridLayout(ValidTripsScene);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        sortAscending = new QPushButton(ValidTripsScene);
        sortAscending->setObjectName("sortAscending");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(40);
        sizePolicy.setVerticalStretch(121);
        sizePolicy.setHeightForWidth(sortAscending->sizePolicy().hasHeightForWidth());
        sortAscending->setSizePolicy(sizePolicy);
        sortAscending->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #606060; /* Slightly darker gray */\n"
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
"    background-color: #404040 /* Darker gray when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #999999; /* Even darker gray when pressed */\n"
"}\n"
""));

        horizontalLayout_5->addWidget(sortAscending);

        sortDescending = new QPushButton(ValidTripsScene);
        sortDescending->setObjectName("sortDescending");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(42);
        sizePolicy1.setVerticalStretch(121);
        sizePolicy1.setHeightForWidth(sortDescending->sizePolicy().hasHeightForWidth());
        sortDescending->setSizePolicy(sizePolicy1);
        sortDescending->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #606060; /* Slightly darker gray */\n"
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

        pushButton = new QPushButton(ValidTripsScene);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(0, 18));
        pushButton->setMaximumSize(QSize(16777215, 16777215));
        pushButton->setSizeIncrement(QSize(0, 18));
        pushButton->setBaseSize(QSize(0, 8));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #606060; /* Slightly darker gray */\n"
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
"    background-color: #404040 /* Darker gray when hovered */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #999999; /* Even darker gray when pressed */\n"
"}\n"
""));

        horizontalLayout_5->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        scrollArea = new QScrollArea(ValidTripsScene);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(124);
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        scrollArea->setFrameShape(QFrame::Box);
        scrollArea->setLineWidth(7);
        scrollArea->setMidLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 1309, 476));
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(scrollAreaWidgetContents_3->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_3->setSizePolicy(sizePolicy3);
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        scrollArea->setWidget(scrollAreaWidgetContents_3);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 1);

        frame = new QFrame(ValidTripsScene);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(100);
        sizePolicy4.setVerticalStretch(38);
        sizePolicy4.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy4);
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(9);
        city1Label = new QLabel(frame);
        city1Label->setObjectName("city1Label");
        city1Label->setGeometry(QRect(150, 30, 271, 51));
        sizePolicy3.setHeightForWidth(city1Label->sizePolicy().hasHeightForWidth());
        city1Label->setSizePolicy(sizePolicy3);
        QFont font;
        font.setFamilies({QString::fromUtf8("MV Boli")});
        font.setPointSize(22);
        font.setBold(false);
        city1Label->setFont(font);
        city2Label = new QLabel(frame);
        city2Label->setObjectName("city2Label");
        city2Label->setGeometry(QRect(150, 80, 271, 41));
        sizePolicy3.setHeightForWidth(city2Label->sizePolicy().hasHeightForWidth());
        city2Label->setSizePolicy(sizePolicy3);
        city2Label->setFont(font);
        numEdges = new QLabel(frame);
        numEdges->setObjectName("numEdges");
        numEdges->setGeometry(QRect(1150, 100, 111, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MV Boli")});
        font1.setPointSize(16);
        numEdges->setFont(font1);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(1220, 90, 101, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Trebuchet MS")});
        font2.setPointSize(22);
        font2.setBold(true);
        label->setFont(font2);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 30, 91, 101));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font3.setBold(true);
        font3.setItalic(true);
        label_2->setFont(font3);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/arrows.svg")));
        label_2->setScaledContents(true);
        isComplete = new QLabel(frame);
        isComplete->setObjectName("isComplete");
        isComplete->setGeometry(QRect(460, 80, 461, 51));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setItalic(true);
        isComplete->setFont(font4);

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(ValidTripsScene);

        QMetaObject::connectSlotsByName(ValidTripsScene);
    } // setupUi

    void retranslateUi(QWidget *ValidTripsScene)
    {
        ValidTripsScene->setWindowTitle(QCoreApplication::translate("ValidTripsScene", "Form", nullptr));
        sortAscending->setText(QCoreApplication::translate("ValidTripsScene", "Sort Cost Ascending", nullptr));
        sortDescending->setText(QCoreApplication::translate("ValidTripsScene", "Sort Cost Descending", nullptr));
        pushButton->setText(QCoreApplication::translate("ValidTripsScene", "Add Edge", nullptr));
        city1Label->setText(QCoreApplication::translate("ValidTripsScene", "City1", nullptr));
        city2Label->setText(QCoreApplication::translate("ValidTripsScene", "City2", nullptr));
        numEdges->setText(QCoreApplication::translate("ValidTripsScene", "XX", nullptr));
        label->setText(QCoreApplication::translate("ValidTripsScene", "Edges", nullptr));
        label_2->setText(QString());
        isComplete->setText(QCoreApplication::translate("ValidTripsScene", "This is not a complete graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ValidTripsScene: public Ui_ValidTripsScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIDTRIPSSCENE_H
