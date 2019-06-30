#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore/QCoreApplication>
#include <QProcess>
#include <QDebug>
#include<QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->graphicsView_2->hide();
    ui->label->hide();
    ui->pushButton->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton->setText("");
    ui->pushButton_2->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton_2->setText("");
    ui->pushButton_3->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton_3->setText("");
    ui->pushButton_4->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton_4->setText("");
    ui->pushButton_5->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton_5->setText("");
    ui->pushButton_6->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton_6->setText("");
    ui->pushButton_7->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton_7->setText("");
    ui->pushButton_8->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton_8->setText("");
    ui->pushButton_9->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton_9->setText("");
    ui->pushButton_10->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton_10->setText("");
    ui->pushButton_11->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton_11->setText("");
    ui->pushButton_12->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton_12->setText("");
    ui->pushButton_13->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton_13->setText("");
    ui->pushButton_14->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton_14->setText("");
    ui->pushButton_15->setStyleSheet("background-color: rgba(255, 255, 255, 0);");
    ui->pushButton_15->setText("");
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("Python");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("Assembler");

    QProcess *process = new QProcess(this);
    process->setWorkingDirectory("E:\\Qt projects\\pydata\\");
    QString program = "pydata1.py";
    process->start(program);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("JavaScript");

}

void MainWindow::on_pushButton_4_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("Java");

}

void MainWindow::on_pushButton_5_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("PHP");

}

void MainWindow::on_pushButton_6_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("C/C++");

}

void MainWindow::on_pushButton_7_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("R");

}

void MainWindow::on_pushButton_8_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("GO");

}

void MainWindow::on_pushButton_9_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("Java");
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("Ruby");

}

void MainWindow::on_pushButton_11_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("Lua");

}

void MainWindow::on_pushButton_12_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("Swift");

}

void MainWindow::on_pushButton_13_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("Perl");

}

void MainWindow::on_pushButton_14_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("SQL");

}

void MainWindow::on_pushButton_15_clicked()
{
    ui->graphicsView_2->show();
    ui->label->show();
    ui->label->setText("MATLAB");

}
