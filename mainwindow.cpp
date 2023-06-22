#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "janelacomanda.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    JanelaComanda j;
    j.dados(_Cx,_E,_G,_A);
    j.exec();
}

