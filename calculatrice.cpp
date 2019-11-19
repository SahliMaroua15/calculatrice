#include "calculatrice.h"
#include "ui_calculatrice.h"
#include<QCompleter>
#include<QStringList>


float valeur=0;
bool divOperation = false ;
bool multiOperation = false ;
bool addOperation = false ;
bool soustracOperation = false ;

calculatrice::calculatrice(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calculatrice)
{
    ui->setupUi(this);
     QStringList numberList;
      numberList<<ui->lineEditResult->text();
      QCompleter *completer = new QCompleter(numberList);
      completer->setCaseSensitivity(Qt::CaseInsensitive);
      ui->lineEditResult->setCompleter(completer);



    ui->lineEditResult->setText(QString::number(valeur));
    QPushButton *numButon[10];
    for (int i=0; i<10; i++)
       {
        QString BoutonNom = "BoutonNumber" + QString::number(i);
        numButon[i]= calculatrice::findChild<QPushButton *>(BoutonNom);
        connect(numButon[i], SIGNAL(released()), this, SLOT(afficheNumber()));
        connect(ui->pushButtonQuitter, SIGNAL(released()), this, SLOT(close()));
       }

        connect(ui->BoutonAddition, SIGNAL(released()), this, SLOT(calculButton()));
        connect(ui->BoutonDiv, SIGNAL(released()), this, SLOT(calculButton()));
        connect(ui->BoutonMulti, SIGNAL(released()), this, SLOT(calculButton()));
        connect(ui->BoutonSoustrac, SIGNAL(released()), this, SLOT(calculButton()));
        connect(ui->BoutonEgal, SIGNAL(released()), this, SLOT(BoutonEgal()));
        connect(ui->BoutonClear, SIGNAL(released()), this, SLOT(clearB()));

}

calculatrice::~calculatrice()
{
    delete ui;
}

void calculatrice::afficheNumber()
{
    QPushButton *button=(QPushButton *)sender();
    QString boutonValue=button->text();
    QString lineValue=ui->lineEditResult->text();
    if((lineValue.toDouble()==0) || (lineValue.toDouble()==0.0))
    {
        ui->lineEditResult->setText(boutonValue);
    } else {
        QString newValue =lineValue+boutonValue;
        double newValeur = newValue.toDouble();
        ui->lineEditResult->setText(QString::number(newValeur, 'g', 16));
    }
}

void calculatrice::calculButton()
{
    divOperation = false;
    multiOperation = false;
    addOperation = false;
    soustracOperation = false;
    QString lineValue = ui->lineEditResult->text();
    valeur = lineValue.toDouble();
    QPushButton *button =(QPushButton *)sender();
    QString boutonValue = button->text();
    if (QString::compare(boutonValue, "/", Qt::CaseInsensitive)==0){
        divOperation = true;
    }  else if (QString::compare(boutonValue, "*", Qt::CaseInsensitive)==0){
        multiOperation = true;
    }  else if (QString::compare(boutonValue, "+", Qt::CaseInsensitive)==0){
        addOperation = true;
    } else if (QString::compare(boutonValue, "-", Qt::CaseInsensitive)==0){
        soustracOperation = true;
    }
ui->lineEditResult->setText("");
}

void calculatrice::BoutonEgal()
{
    double result =0.0;
    QString lineValue = ui->lineEditResult->text();
    double lineValeur = lineValue.toDouble();
    if (divOperation || multiOperation || addOperation || soustracOperation){
        if (divOperation){ result = valeur / lineValeur; }
        else if (multiOperation){ result = valeur * lineValeur;}
        else if (addOperation){ result = valeur + lineValeur;}
        else { result = valeur - lineValeur;}

     }
      ui->lineEditResult->setText(QString::number(result));
}


void calculatrice::clearB()
{
    ui->lineEditResult->setText("0");
    valeur = 0;
}
