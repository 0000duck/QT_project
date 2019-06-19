/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButtonDel;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButtonMul;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButtonDiv;
    QPushButton *pushButton0;
    QPushButton *pushButtonPlus;
    QPushButton *pushButtonSub;
    QPushButton *pushButtonEqual;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(438, 400);
        Widget->setMinimumSize(QSize(0, 400));
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QFont font;
        font.setPointSize(20);
        lineEdit->setFont(font);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 5);

        pushButton7 = new QPushButton(Widget);
        pushButton7->setObjectName(QStringLiteral("pushButton7"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton7->sizePolicy().hasHeightForWidth());
        pushButton7->setSizePolicy(sizePolicy);
        pushButton7->setFont(font);

        gridLayout->addWidget(pushButton7, 1, 0, 1, 1);

        pushButton8 = new QPushButton(Widget);
        pushButton8->setObjectName(QStringLiteral("pushButton8"));
        sizePolicy.setHeightForWidth(pushButton8->sizePolicy().hasHeightForWidth());
        pushButton8->setSizePolicy(sizePolicy);
        pushButton8->setFont(font);

        gridLayout->addWidget(pushButton8, 1, 1, 1, 2);

        pushButton9 = new QPushButton(Widget);
        pushButton9->setObjectName(QStringLiteral("pushButton9"));
        sizePolicy.setHeightForWidth(pushButton9->sizePolicy().hasHeightForWidth());
        pushButton9->setSizePolicy(sizePolicy);
        pushButton9->setFont(font);

        gridLayout->addWidget(pushButton9, 1, 3, 1, 1);

        pushButtonDel = new QPushButton(Widget);
        pushButtonDel->setObjectName(QStringLiteral("pushButtonDel"));
        sizePolicy.setHeightForWidth(pushButtonDel->sizePolicy().hasHeightForWidth());
        pushButtonDel->setSizePolicy(sizePolicy);
        pushButtonDel->setFont(font);

        gridLayout->addWidget(pushButtonDel, 1, 4, 1, 1);

        pushButton4 = new QPushButton(Widget);
        pushButton4->setObjectName(QStringLiteral("pushButton4"));
        sizePolicy.setHeightForWidth(pushButton4->sizePolicy().hasHeightForWidth());
        pushButton4->setSizePolicy(sizePolicy);
        pushButton4->setFont(font);

        gridLayout->addWidget(pushButton4, 2, 0, 1, 1);

        pushButton5 = new QPushButton(Widget);
        pushButton5->setObjectName(QStringLiteral("pushButton5"));
        sizePolicy.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy);
        pushButton5->setFont(font);

        gridLayout->addWidget(pushButton5, 2, 2, 1, 1);

        pushButton6 = new QPushButton(Widget);
        pushButton6->setObjectName(QStringLiteral("pushButton6"));
        sizePolicy.setHeightForWidth(pushButton6->sizePolicy().hasHeightForWidth());
        pushButton6->setSizePolicy(sizePolicy);
        pushButton6->setFont(font);

        gridLayout->addWidget(pushButton6, 2, 3, 1, 1);

        pushButtonMul = new QPushButton(Widget);
        pushButtonMul->setObjectName(QStringLiteral("pushButtonMul"));
        sizePolicy.setHeightForWidth(pushButtonMul->sizePolicy().hasHeightForWidth());
        pushButtonMul->setSizePolicy(sizePolicy);
        pushButtonMul->setFont(font);

        gridLayout->addWidget(pushButtonMul, 2, 4, 1, 1);

        pushButton1 = new QPushButton(Widget);
        pushButton1->setObjectName(QStringLiteral("pushButton1"));
        sizePolicy.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy);
        pushButton1->setFont(font);

        gridLayout->addWidget(pushButton1, 3, 0, 1, 2);

        pushButton2 = new QPushButton(Widget);
        pushButton2->setObjectName(QStringLiteral("pushButton2"));
        sizePolicy.setHeightForWidth(pushButton2->sizePolicy().hasHeightForWidth());
        pushButton2->setSizePolicy(sizePolicy);
        pushButton2->setFont(font);

        gridLayout->addWidget(pushButton2, 3, 2, 1, 1);

        pushButton3 = new QPushButton(Widget);
        pushButton3->setObjectName(QStringLiteral("pushButton3"));
        sizePolicy.setHeightForWidth(pushButton3->sizePolicy().hasHeightForWidth());
        pushButton3->setSizePolicy(sizePolicy);
        pushButton3->setFont(font);

        gridLayout->addWidget(pushButton3, 3, 3, 1, 1);

        pushButtonDiv = new QPushButton(Widget);
        pushButtonDiv->setObjectName(QStringLiteral("pushButtonDiv"));
        sizePolicy.setHeightForWidth(pushButtonDiv->sizePolicy().hasHeightForWidth());
        pushButtonDiv->setSizePolicy(sizePolicy);
        pushButtonDiv->setFont(font);

        gridLayout->addWidget(pushButtonDiv, 3, 4, 1, 1);

        pushButton0 = new QPushButton(Widget);
        pushButton0->setObjectName(QStringLiteral("pushButton0"));
        sizePolicy.setHeightForWidth(pushButton0->sizePolicy().hasHeightForWidth());
        pushButton0->setSizePolicy(sizePolicy);
        pushButton0->setFont(font);

        gridLayout->addWidget(pushButton0, 4, 0, 1, 1);

        pushButtonPlus = new QPushButton(Widget);
        pushButtonPlus->setObjectName(QStringLiteral("pushButtonPlus"));
        sizePolicy.setHeightForWidth(pushButtonPlus->sizePolicy().hasHeightForWidth());
        pushButtonPlus->setSizePolicy(sizePolicy);
        pushButtonPlus->setFont(font);

        gridLayout->addWidget(pushButtonPlus, 4, 2, 1, 1);

        pushButtonSub = new QPushButton(Widget);
        pushButtonSub->setObjectName(QStringLiteral("pushButtonSub"));
        sizePolicy.setHeightForWidth(pushButtonSub->sizePolicy().hasHeightForWidth());
        pushButtonSub->setSizePolicy(sizePolicy);
        pushButtonSub->setFont(font);

        gridLayout->addWidget(pushButtonSub, 4, 3, 1, 1);

        pushButtonEqual = new QPushButton(Widget);
        pushButtonEqual->setObjectName(QStringLiteral("pushButtonEqual"));
        sizePolicy.setHeightForWidth(pushButtonEqual->sizePolicy().hasHeightForWidth());
        pushButtonEqual->setSizePolicy(sizePolicy);
        pushButtonEqual->setFont(font);

        gridLayout->addWidget(pushButtonEqual, 4, 4, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        lineEdit->setText(QString());
        pushButton7->setText(QApplication::translate("Widget", "7", 0));
        pushButton8->setText(QApplication::translate("Widget", "8", 0));
        pushButton9->setText(QApplication::translate("Widget", "9", 0));
        pushButtonDel->setText(QApplication::translate("Widget", "c", 0));
        pushButton4->setText(QApplication::translate("Widget", "4", 0));
        pushButton5->setText(QApplication::translate("Widget", "5", 0));
        pushButton6->setText(QApplication::translate("Widget", "6", 0));
        pushButtonMul->setText(QApplication::translate("Widget", "*", 0));
        pushButton1->setText(QApplication::translate("Widget", "1", 0));
        pushButton2->setText(QApplication::translate("Widget", "2", 0));
        pushButton3->setText(QApplication::translate("Widget", "3", 0));
        pushButtonDiv->setText(QApplication::translate("Widget", "/", 0));
        pushButton0->setText(QApplication::translate("Widget", "0", 0));
        pushButtonPlus->setText(QApplication::translate("Widget", "+", 0));
        pushButtonSub->setText(QApplication::translate("Widget", "-", 0));
        pushButtonEqual->setText(QApplication::translate("Widget", "=", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
