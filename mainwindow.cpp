#include "dialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

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
  Dialog dlg;
  int retour_dlg;
  retour_dlg=dlg.exec();
  qDebug() << "retour du dialogue :" << retour_dlg;
}
