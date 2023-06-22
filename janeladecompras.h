#ifndef JANELADECOMPRAS_H
#define JANELADECOMPRAS_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class JanelaDeCompras;
}

class JanelaDeCompras : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaDeCompras(QWidget *parent = nullptr);
    ~JanelaDeCompras();
    void dados(Caixa* cx,Estoque* es,Gerente* ge,std::vector<Atendente*> at,Atendente* poat);
private slots:
    void on_pushButton_clicked();

    void on_CocaButton_clicked();

    void on_pushButton_2_clicked();

    void on_FantaButton_clicked();

    void on_CafeButton_clicked();

    void on_PastelButton_clicked();

    void on_Coxinha_clicked();

    void on_BisButton_clicked();

private:
    Ui::JanelaDeCompras *ui;
    Caixa* cai;
    Estoque* est;
    Gerente* ger;
    std::vector<Atendente*> ate;
    Atendente* enAt;
};

#endif // JANELADECOMPRAS_H
