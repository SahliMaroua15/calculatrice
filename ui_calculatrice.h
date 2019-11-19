/********************************************************************************
** Form generated from reading UI file 'calculatrice.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICE_H
#define UI_CALCULATRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculatrice
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditResult;
    QHBoxLayout *horizontalLayout;
    QPushButton *BoutonNumber1;
    QPushButton *BoutonNumber2;
    QPushButton *BoutonNumber3;
    QPushButton *BoutonAddition;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BoutonNumber4;
    QPushButton *BoutonNumber5;
    QPushButton *BoutonNumber6;
    QPushButton *BoutonSoustrac;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *BoutonNumber7;
    QPushButton *BoutonNumber8;
    QPushButton *BoutonNumber9;
    QPushButton *BoutonMulti;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *BoutonEgal;
    QPushButton *BoutonNumber0;
    QPushButton *BoutonClear;
    QPushButton *BoutonDiv;
    QPushButton *pushButtonQuitter;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *calculatrice)
    {
        if (calculatrice->objectName().isEmpty())
            calculatrice->setObjectName(QString::fromUtf8("calculatrice"));
        calculatrice->resize(458, 382);
        centralWidget = new QWidget(calculatrice);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEditResult = new QLineEdit(centralWidget);
        lineEditResult->setObjectName(QString::fromUtf8("lineEditResult"));

        verticalLayout->addWidget(lineEditResult);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        BoutonNumber1 = new QPushButton(centralWidget);
        BoutonNumber1->setObjectName(QString::fromUtf8("BoutonNumber1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BoutonNumber1->sizePolicy().hasHeightForWidth());
        BoutonNumber1->setSizePolicy(sizePolicy);
        BoutonNumber1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : LightGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color : DimGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout->addWidget(BoutonNumber1);

        BoutonNumber2 = new QPushButton(centralWidget);
        BoutonNumber2->setObjectName(QString::fromUtf8("BoutonNumber2"));
        sizePolicy.setHeightForWidth(BoutonNumber2->sizePolicy().hasHeightForWidth());
        BoutonNumber2->setSizePolicy(sizePolicy);
        BoutonNumber2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : LightGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color : DimGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout->addWidget(BoutonNumber2);

        BoutonNumber3 = new QPushButton(centralWidget);
        BoutonNumber3->setObjectName(QString::fromUtf8("BoutonNumber3"));
        sizePolicy.setHeightForWidth(BoutonNumber3->sizePolicy().hasHeightForWidth());
        BoutonNumber3->setSizePolicy(sizePolicy);
        BoutonNumber3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : LightGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color : DimGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout->addWidget(BoutonNumber3);

        BoutonAddition = new QPushButton(centralWidget);
        BoutonAddition->setObjectName(QString::fromUtf8("BoutonAddition"));
        sizePolicy.setHeightForWidth(BoutonAddition->sizePolicy().hasHeightForWidth());
        BoutonAddition->setSizePolicy(sizePolicy);
        BoutonAddition->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : Orange;\n"
"border: 1px OrangeRed;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color : OrangeRed;\n"
"border: 1px OrangeRed;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout->addWidget(BoutonAddition);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        BoutonNumber4 = new QPushButton(centralWidget);
        BoutonNumber4->setObjectName(QString::fromUtf8("BoutonNumber4"));
        sizePolicy.setHeightForWidth(BoutonNumber4->sizePolicy().hasHeightForWidth());
        BoutonNumber4->setSizePolicy(sizePolicy);
        BoutonNumber4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : LightGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color : DimGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(BoutonNumber4);

        BoutonNumber5 = new QPushButton(centralWidget);
        BoutonNumber5->setObjectName(QString::fromUtf8("BoutonNumber5"));
        sizePolicy.setHeightForWidth(BoutonNumber5->sizePolicy().hasHeightForWidth());
        BoutonNumber5->setSizePolicy(sizePolicy);
        BoutonNumber5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : LightGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color : DimGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(BoutonNumber5);

        BoutonNumber6 = new QPushButton(centralWidget);
        BoutonNumber6->setObjectName(QString::fromUtf8("BoutonNumber6"));
        sizePolicy.setHeightForWidth(BoutonNumber6->sizePolicy().hasHeightForWidth());
        BoutonNumber6->setSizePolicy(sizePolicy);
        BoutonNumber6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : LightGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color : DimGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(BoutonNumber6);

        BoutonSoustrac = new QPushButton(centralWidget);
        BoutonSoustrac->setObjectName(QString::fromUtf8("BoutonSoustrac"));
        sizePolicy.setHeightForWidth(BoutonSoustrac->sizePolicy().hasHeightForWidth());
        BoutonSoustrac->setSizePolicy(sizePolicy);
        BoutonSoustrac->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : Orange;\n"
"border: 1px OrangeRed;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color : OrangeRed;\n"
"border: 1px OrangeRed;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_2->addWidget(BoutonSoustrac);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        BoutonNumber7 = new QPushButton(centralWidget);
        BoutonNumber7->setObjectName(QString::fromUtf8("BoutonNumber7"));
        sizePolicy.setHeightForWidth(BoutonNumber7->sizePolicy().hasHeightForWidth());
        BoutonNumber7->setSizePolicy(sizePolicy);
        BoutonNumber7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : LightGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color : DimGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(BoutonNumber7);

        BoutonNumber8 = new QPushButton(centralWidget);
        BoutonNumber8->setObjectName(QString::fromUtf8("BoutonNumber8"));
        sizePolicy.setHeightForWidth(BoutonNumber8->sizePolicy().hasHeightForWidth());
        BoutonNumber8->setSizePolicy(sizePolicy);
        BoutonNumber8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : LightGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color : DimGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(BoutonNumber8);

        BoutonNumber9 = new QPushButton(centralWidget);
        BoutonNumber9->setObjectName(QString::fromUtf8("BoutonNumber9"));
        sizePolicy.setHeightForWidth(BoutonNumber9->sizePolicy().hasHeightForWidth());
        BoutonNumber9->setSizePolicy(sizePolicy);
        BoutonNumber9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : LightGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color : DimGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(BoutonNumber9);

        BoutonMulti = new QPushButton(centralWidget);
        BoutonMulti->setObjectName(QString::fromUtf8("BoutonMulti"));
        sizePolicy.setHeightForWidth(BoutonMulti->sizePolicy().hasHeightForWidth());
        BoutonMulti->setSizePolicy(sizePolicy);
        BoutonMulti->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : Orange;\n"
"border: 1px OrangeRed;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color : OrangeRed;\n"
"border: 1px OrangeRed;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_3->addWidget(BoutonMulti);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        BoutonEgal = new QPushButton(centralWidget);
        BoutonEgal->setObjectName(QString::fromUtf8("BoutonEgal"));
        sizePolicy.setHeightForWidth(BoutonEgal->sizePolicy().hasHeightForWidth());
        BoutonEgal->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(BoutonEgal);

        BoutonNumber0 = new QPushButton(centralWidget);
        BoutonNumber0->setObjectName(QString::fromUtf8("BoutonNumber0"));
        sizePolicy.setHeightForWidth(BoutonNumber0->sizePolicy().hasHeightForWidth());
        BoutonNumber0->setSizePolicy(sizePolicy);
        BoutonNumber0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : LightGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color : DimGray;\n"
"border: 1px solid gray;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_4->addWidget(BoutonNumber0);

        BoutonClear = new QPushButton(centralWidget);
        BoutonClear->setObjectName(QString::fromUtf8("BoutonClear"));
        sizePolicy.setHeightForWidth(BoutonClear->sizePolicy().hasHeightForWidth());
        BoutonClear->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(BoutonClear);

        BoutonDiv = new QPushButton(centralWidget);
        BoutonDiv->setObjectName(QString::fromUtf8("BoutonDiv"));
        sizePolicy.setHeightForWidth(BoutonDiv->sizePolicy().hasHeightForWidth());
        BoutonDiv->setSizePolicy(sizePolicy);
        BoutonDiv->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color : Orange;\n"
"border: 1px OrangeRed;\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"background-color : OrangeRed;\n"
"border: 1px OrangeRed;\n"
"padding: 5px;\n"
"}"));

        horizontalLayout_4->addWidget(BoutonDiv);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        pushButtonQuitter = new QPushButton(centralWidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));

        gridLayout->addWidget(pushButtonQuitter, 1, 0, 1, 1);

        calculatrice->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(calculatrice);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 458, 22));
        calculatrice->setMenuBar(menuBar);
        statusBar = new QStatusBar(calculatrice);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        calculatrice->setStatusBar(statusBar);

        retranslateUi(calculatrice);

        QMetaObject::connectSlotsByName(calculatrice);
    } // setupUi

    void retranslateUi(QMainWindow *calculatrice)
    {
        calculatrice->setWindowTitle(QApplication::translate("calculatrice", "calculatrice", nullptr));
        BoutonNumber1->setText(QApplication::translate("calculatrice", "1", nullptr));
        BoutonNumber2->setText(QApplication::translate("calculatrice", "2", nullptr));
        BoutonNumber3->setText(QApplication::translate("calculatrice", "3", nullptr));
        BoutonAddition->setText(QApplication::translate("calculatrice", "+", nullptr));
        BoutonNumber4->setText(QApplication::translate("calculatrice", "4", nullptr));
        BoutonNumber5->setText(QApplication::translate("calculatrice", "5", nullptr));
        BoutonNumber6->setText(QApplication::translate("calculatrice", "6", nullptr));
        BoutonSoustrac->setText(QApplication::translate("calculatrice", "-", nullptr));
        BoutonNumber7->setText(QApplication::translate("calculatrice", "7", nullptr));
        BoutonNumber8->setText(QApplication::translate("calculatrice", "8", nullptr));
        BoutonNumber9->setText(QApplication::translate("calculatrice", "9", nullptr));
        BoutonMulti->setText(QApplication::translate("calculatrice", "*", nullptr));
        BoutonEgal->setText(QApplication::translate("calculatrice", "=", nullptr));
        BoutonNumber0->setText(QApplication::translate("calculatrice", "0", nullptr));
        BoutonClear->setText(QApplication::translate("calculatrice", "Clear", nullptr));
        BoutonDiv->setText(QApplication::translate("calculatrice", "/", nullptr));
        pushButtonQuitter->setText(QApplication::translate("calculatrice", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculatrice: public Ui_calculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H
