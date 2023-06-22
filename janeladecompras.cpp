#include "janeladecompras.h"
#include "ui_janeladecompras.h"
#include<QMessageBox>
#include "mainwindow.h"
#include <string.h>
#include <stdlib.h>
#include <QMessageBox>
#include <exception>
#include<iostream>
#include <exception>

JanelaDeCompras::JanelaDeCompras(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JanelaDeCompras)
{
    ui->setupUi(this);
}

JanelaDeCompras::~JanelaDeCompras()
{
    delete ui;
}

void JanelaDeCompras::dados(Caixa* cx,Estoque* es,Gerente* ge,std::vector<Atendente*> at,Atendente* poat){
    this->cai=cx;
    this->est=es;
    this->ger=ge;
    this->ate=at;
    this->enAt=poat;
};

void JanelaDeCompras::on_CocaButton_clicked()
{

    try{
        this->enAt->VenderItem(est,"Coca");
    }catch(std::invalid_argument &e){
        QMessageBox::critical(this,"Erro","Acabou a Coca");
        this->close();
    };
};



void JanelaDeCompras::on_FantaButton_clicked()
{
    try{
        this->enAt->VenderItem(est,"Fanta");
    }catch(std::invalid_argument &e){
        QMessageBox::critical(this,"Erro","Acabou a Fanta");
        this->close();
    };

};


void JanelaDeCompras::on_CafeButton_clicked()
{
    try{
        this->enAt->VenderItem(est,"Café");
    }catch(std::invalid_argument &e){
        QMessageBox::critical(this,"Erro","Acabou o Café");
        this->close();
    };
};


void JanelaDeCompras::on_PastelButton_clicked()
{

    try{
        this->enAt->VenderItem(est,"Pastel");
    }catch(std::invalid_argument &e){
        QMessageBox::critical(this,"Erro","Acabou o Pastel");
            this->close();
    };
}


void JanelaDeCompras::on_Coxinha_clicked()
{
    try{
            this->enAt->VenderItem(est,"Coxinha");
    }catch(std::invalid_argument &e){
            QMessageBox::critical(this,"Erro","Acabou o Coxinha");
            this->close();
    };
}


void JanelaDeCompras::on_BisButton_clicked()
{
    try{
            this->enAt->VenderItem(est,"Bis");
    }catch(std::invalid_argument &e){
            QMessageBox::critical(this,"Erro","Acabou o Bis");
            this->close();
    };
}

