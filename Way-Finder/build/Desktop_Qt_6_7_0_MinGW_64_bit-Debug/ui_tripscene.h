/********************************************************************************
** Form generated from reading UI file 'tripscene.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIPSCENE_H
#define UI_TRIPSCENE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tripscene
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_4;
    QWidget *widget_5;
    QLabel *src;
    QLabel *dist;
    QLabel *price;
    QLabel *label_10;
    QWidget *widget_6;
    QLabel *details;

    void setupUi(QWidget *tripscene)
    {
        if (tripscene->objectName().isEmpty())
            tripscene->setObjectName("tripscene");
        tripscene->resize(995, 266);
        tripscene->setStyleSheet(QString::fromUtf8("border: 3px solid black;\n"
"  padding: 2px;\n"
"border-color:rgb(133, 138, 143);\n"
"background-color: rgb(203, 203, 203); "));
        horizontalLayout_2 = new QHBoxLayout(tripscene);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        widget_4 = new QWidget(tripscene);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8(""));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(0, 0, 140, 241));
        src = new QLabel(widget_5);
        src->setObjectName("src");
        src->setGeometry(QRect(15, 10, 110, 30));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        src->setFont(font);
        src->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        src->setAlignment(Qt::AlignCenter);
        dist = new QLabel(widget_5);
        dist->setObjectName("dist");
        dist->setGeometry(QRect(15, 130, 110, 30));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        dist->setFont(font1);
        dist->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        dist->setAlignment(Qt::AlignCenter);
        price = new QLabel(widget_5);
        price->setObjectName("price");
        price->setGeometry(QRect(15, 180, 110, 40));
        price->setFont(font1);
        price->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        price->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(widget_5);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(15, 70, 110, 30));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_10->setAlignment(Qt::AlignCenter);
        widget_6 = new QWidget(widget_4);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(140, 0, 831, 241));
        widget_6->setStyleSheet(QString::fromUtf8(""));
        details = new QLabel(widget_6);
        details->setObjectName("details");
        details->setGeometry(QRect(-11, 0, 841, 266));
        QFont font2;
        font2.setPointSize(20);
        details->setFont(font2);
        details->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        details->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        details->setWordWrap(true);

        horizontalLayout_2->addWidget(widget_4);


        retranslateUi(tripscene);

        QMetaObject::connectSlotsByName(tripscene);
    } // setupUi

    void retranslateUi(QWidget *tripscene)
    {
        tripscene->setWindowTitle(QCoreApplication::translate("tripscene", "Form", nullptr));
        src->setText(QCoreApplication::translate("tripscene", "Source", nullptr));
        dist->setText(QCoreApplication::translate("tripscene", "dist", nullptr));
        price->setText(QCoreApplication::translate("tripscene", "price", nullptr));
        label_10->setText(QCoreApplication::translate("tripscene", "To", nullptr));
        details->setText(QCoreApplication::translate("tripscene", "Trip Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tripscene: public Ui_tripscene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIPSCENE_H
