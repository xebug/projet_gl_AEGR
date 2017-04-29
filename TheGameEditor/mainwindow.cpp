#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <istream>
#include <iostream>
#include <string>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{



    string const nomFichier("/Users/rebug/thegame.config");
    ofstream monFlux(nomFichier.c_str());

    if(monFlux)
    {

        monFlux << "map= " << map2 << " " << map1 << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }

}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    map1=arg1;
}

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    map2=arg1;
}
