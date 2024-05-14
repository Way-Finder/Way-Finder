/********************************************************************************
** Form generated from reading UI file 'newedgeinput.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWEDGEINPUT_H
#define UI_NEWEDGEINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NewEdgeInput
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *vehicleInput;
    QLineEdit *priceInput;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *NewEdgeInput)
    {
        if (NewEdgeInput->objectName().isEmpty())
            NewEdgeInput->setObjectName("NewEdgeInput");
        NewEdgeInput->resize(316, 223);
        NewEdgeInput->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);"));
        gridLayout = new QGridLayout(NewEdgeInput);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(NewEdgeInput);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(NewEdgeInput);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        vehicleInput = new QLineEdit(NewEdgeInput);
        vehicleInput->setObjectName("vehicleInput");
        vehicleInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid black;\n"
"	border-radius: 5px;\n"
"}"));
        vehicleInput->setEchoMode(QLineEdit::Normal);

        verticalLayout_2->addWidget(vehicleInput);

        priceInput = new QLineEdit(NewEdgeInput);
        priceInput->setObjectName("priceInput");
        priceInput->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid black;\n"
"	border-radius: 5px;\n"
"}"));
        priceInput->setEchoMode(QLineEdit::Normal);

        verticalLayout_2->addWidget(priceInput);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(NewEdgeInput);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(NewEdgeInput);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewEdgeInput, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewEdgeInput, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NewEdgeInput);
    } // setupUi

    void retranslateUi(QDialog *NewEdgeInput)
    {
        NewEdgeInput->setWindowTitle(QCoreApplication::translate("NewEdgeInput", "New Edge", nullptr));
        label->setText(QCoreApplication::translate("NewEdgeInput", "Vehicle", nullptr));
        label_2->setText(QCoreApplication::translate("NewEdgeInput", "Price", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewEdgeInput: public Ui_NewEdgeInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWEDGEINPUT_H
