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
    QSpacerItem *horizontalSpacer;
    QPushButton *toHomeScreenButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QLabel *startingLocation;
    QLabel *destinationLabel;
    QLabel *label_2;
    QLabel *validTripsNumberLabel;
    QLabel *validTripsNumberLabel_2;
    QLabel *validTripsNumberLabel_3;

    void setupUi(QWidget *ValidTripsScene)
    {
        if (ValidTripsScene->objectName().isEmpty())
            ValidTripsScene->setObjectName("ValidTripsScene");
        ValidTripsScene->resize(1536, 800);
        ValidTripsScene->setMaximumSize(QSize(16777215, 16777215));
        ValidTripsScene->setAutoFillBackground(false);
        ValidTripsScene->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        gridLayout = new QGridLayout(ValidTripsScene);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer = new QSpacerItem(803, 64, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        horizontalLayout_5->addItem(horizontalSpacer);

        toHomeScreenButton = new QPushButton(ValidTripsScene);
        toHomeScreenButton->setObjectName("toHomeScreenButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(40);
        sizePolicy.setVerticalStretch(121);
        sizePolicy.setHeightForWidth(toHomeScreenButton->sizePolicy().hasHeightForWidth());
        toHomeScreenButton->setSizePolicy(sizePolicy);
        toHomeScreenButton->setMinimumSize(QSize(0, 18));
        toHomeScreenButton->setMaximumSize(QSize(16777215, 16777215));
        toHomeScreenButton->setSizeIncrement(QSize(0, 18));
        toHomeScreenButton->setBaseSize(QSize(0, 8));
        toHomeScreenButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_5->addWidget(toHomeScreenButton);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        scrollArea = new QScrollArea(ValidTripsScene);
        scrollArea->setObjectName("scrollArea");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(124);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        scrollArea->setFrameShape(QFrame::Box);
        scrollArea->setLineWidth(7);
        scrollArea->setMidLineWidth(0);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 1486, 506));
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollAreaWidgetContents_3->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_3->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        scrollArea->setWidget(scrollAreaWidgetContents_3);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 1);

        frame = new QFrame(ValidTripsScene);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(100);
        sizePolicy3.setVerticalStretch(38);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(133, 138, 143);"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(9);
        startingLocation = new QLabel(frame);
        startingLocation->setObjectName("startingLocation");
        startingLocation->setGeometry(QRect(560, 20, 271, 51));
        sizePolicy2.setHeightForWidth(startingLocation->sizePolicy().hasHeightForWidth());
        startingLocation->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamilies({QString::fromUtf8("MV Boli")});
        font.setPointSize(22);
        font.setBold(false);
        startingLocation->setFont(font);
        destinationLabel = new QLabel(frame);
        destinationLabel->setObjectName("destinationLabel");
        destinationLabel->setGeometry(QRect(560, 70, 271, 41));
        sizePolicy2.setHeightForWidth(destinationLabel->sizePolicy().hasHeightForWidth());
        destinationLabel->setSizePolicy(sizePolicy2);
        destinationLabel->setFont(font);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(440, 20, 91, 101));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setBold(true);
        font1.setItalic(true);
        label_2->setFont(font1);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/arrows.svg")));
        label_2->setScaledContents(true);
        validTripsNumberLabel = new QLabel(frame);
        validTripsNumberLabel->setObjectName("validTripsNumberLabel");
        validTripsNumberLabel->setGeometry(QRect(960, 60, 61, 51));
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(validTripsNumberLabel->sizePolicy().hasHeightForWidth());
        validTripsNumberLabel->setSizePolicy(sizePolicy4);
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(true);
        validTripsNumberLabel->setFont(font2);
        validTripsNumberLabel->setLayoutDirection(Qt::LeftToRight);
        validTripsNumberLabel->setAlignment(Qt::AlignCenter);
        validTripsNumberLabel_2 = new QLabel(frame);
        validTripsNumberLabel_2->setObjectName("validTripsNumberLabel_2");
        validTripsNumberLabel_2->setGeometry(QRect(1040, 60, 171, 51));
        validTripsNumberLabel_2->setFont(font2);
        validTripsNumberLabel_3 = new QLabel(frame);
        validTripsNumberLabel_3->setObjectName("validTripsNumberLabel_3");
        validTripsNumberLabel_3->setGeometry(QRect(820, 60, 151, 51));
        validTripsNumberLabel_3->setFont(font2);
        validTripsNumberLabel_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(ValidTripsScene);

        QMetaObject::connectSlotsByName(ValidTripsScene);
    } // setupUi

    void retranslateUi(QWidget *ValidTripsScene)
    {
        ValidTripsScene->setWindowTitle(QCoreApplication::translate("ValidTripsScene", "Form", nullptr));
        toHomeScreenButton->setText(QCoreApplication::translate("ValidTripsScene", "To Home Screen", nullptr));
        startingLocation->setText(QCoreApplication::translate("ValidTripsScene", "Starting Location", nullptr));
        destinationLabel->setText(QCoreApplication::translate("ValidTripsScene", "Destination ", nullptr));
        label_2->setText(QString());
        validTripsNumberLabel->setText(QCoreApplication::translate("ValidTripsScene", "X", nullptr));
        validTripsNumberLabel_2->setText(QCoreApplication::translate("ValidTripsScene", "Trips", nullptr));
        validTripsNumberLabel_3->setText(QCoreApplication::translate("ValidTripsScene", "We Have", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ValidTripsScene: public Ui_ValidTripsScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIDTRIPSSCENE_H
