#ifndef CALCULATRICE_H
#define CALCULATRICE_H
#include<QMainWindow>


namespace Ui{
class calculatrice;
}

class calculatrice : public QMainWindow
{
    Q_OBJECT
    public:
        explicit calculatrice(QWidget *parent=0);
        ~calculatrice();



    private slots:
        void afficheNumber();
        void calculButton();
        void BoutonEgal();
        void clearB();

    private:
    Ui::calculatrice*ui;

};
#endif
