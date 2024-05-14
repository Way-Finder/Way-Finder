/********************************************************************************
** Form generated from reading UI file 'editedge.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITEDGE_H
#define UI_EDITEDGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editedge
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *priceEdit;
    QLineEdit *transportationEdit;
    QPushButton *applyButton;
    QPushButton *cancelButton;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *editedge)
    {
        if (editedge->objectName().isEmpty())
            editedge->setObjectName("editedge");
        editedge->resize(400, 320);
        layoutWidget = new QWidget(editedge);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(180, 120, 156, 61));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        priceEdit = new QLineEdit(layoutWidget);
        priceEdit->setObjectName("priceEdit");

        verticalLayout->addWidget(priceEdit);

        transportationEdit = new QLineEdit(layoutWidget);
        transportationEdit->setObjectName("transportationEdit");

        verticalLayout->addWidget(transportationEdit);

        applyButton = new QPushButton(editedge);
        applyButton->setObjectName("applyButton");
        applyButton->setGeometry(QRect(180, 210, 93, 29));
        cancelButton = new QPushButton(editedge);
        cancelButton->setObjectName("cancelButton");
        cancelButton->setGeometry(QRect(280, 210, 93, 29));
        label = new QLabel(editedge);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 120, 63, 20));
        label_2 = new QLabel(editedge);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 160, 63, 20));

        retranslateUi(editedge);

        QMetaObject::connectSlotsByName(editedge);
    } // setupUi

    void retranslateUi(QWidget *editedge)
    {
        editedge->setWindowTitle(QCoreApplication::translate("editedge", "Form", nullptr));
        applyButton->setText(QCoreApplication::translate("editedge", "Apply", nullptr));
        cancelButton->setText(QCoreApplication::translate("editedge", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("editedge", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("editedge", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editedge: public Ui_editedge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITEDGE_H
