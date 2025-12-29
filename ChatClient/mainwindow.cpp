#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui->stackedWidget->setCurrentWidget(ui->loginPage);
}

void MainWindow::on_loginButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->chatPage);
}


void MainWindow::on_sayButton_clicked()
{

}


void MainWindow::on_logoutButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->loginPage);
}

