#include "konwerter.h"
#include "ui_konwerter.h"

Konwerter::Konwerter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Konwerter)
{
    ui->setupUi(this);
    setStyleSheet("background-color: blue");
    ui->przelicz->setStyleSheet("color: white; background: navy;");
    ui->listView->setStyleSheet("background: cyan; color: black");
    ui->lineEdit->setStyleSheet("background: cyan; color: black");
    ui->lineEdit_2->setStyleSheet("background: cyan; color: black");
    ui->comboBox->setStyleSheet("background: cyan; color: black");
    ui->comboBox_2->setStyleSheet("background: cyan; color: black");
    ui->Tytul->setStyleSheet("color: white");
    ui->label->setStyleSheet("color: white");
}
Konwerter::Lista()
{

}

Konwerter::Przeliczaj()
{

}

Konwerter::~Konwerter()
{
    delete ui;
}
