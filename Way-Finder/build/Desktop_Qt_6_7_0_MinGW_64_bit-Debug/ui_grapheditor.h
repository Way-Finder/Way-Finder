/********************************************************************************
** Form generated from reading UI file 'grapheditor.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHEDITOR_H
#define UI_GRAPHEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphEditor
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *cityBox;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QComboBox *cityBox_2;
    QPushButton *secWindow;

    void setupUi(QWidget *GraphEditor)
    {
        if (GraphEditor->objectName().isEmpty())
            GraphEditor->setObjectName("GraphEditor");
        GraphEditor->resize(680, 452);
        layoutWidget = new QWidget(GraphEditor);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(210, 160, 236, 82));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        cityBox = new QComboBox(layoutWidget);
        cityBox->setObjectName("cityBox");

        verticalLayout_2->addWidget(cityBox);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        cityBox_2 = new QComboBox(layoutWidget);
        cityBox_2->setObjectName("cityBox_2");

        verticalLayout_3->addWidget(cityBox_2);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_3);

        secWindow = new QPushButton(layoutWidget);
        secWindow->setObjectName("secWindow");

        verticalLayout->addWidget(secWindow);


        retranslateUi(GraphEditor);

        QMetaObject::connectSlotsByName(GraphEditor);
    } // setupUi

    void retranslateUi(QWidget *GraphEditor)
    {
        GraphEditor->setWindowTitle(QCoreApplication::translate("GraphEditor", "Form", nullptr));
        label->setText(QCoreApplication::translate("GraphEditor", "Select the first city :", nullptr));
        label_2->setText(QCoreApplication::translate("GraphEditor", "Select the second city :", nullptr));
        secWindow->setText(QCoreApplication::translate("GraphEditor", "Choose", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphEditor: public Ui_GraphEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHEDITOR_H
