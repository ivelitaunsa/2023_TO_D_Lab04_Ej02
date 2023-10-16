#include "menu.h"
#include "./ui_menu.h"
#include "signo.h"
#include "./signo.h"

menu::menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);
    setWindowTitle("Horoscopo");
    ui->signoTittle->setText("");
    ui->fechaLabel->setText("");
    ui->descripcionText->setText("");
}

menu::~menu()
{
    delete ui;
}


void menu::on_ariesButton_clicked()
{
    ui->signoTittle->setText(aries.nombre);
    ui->fechaLabel->setText(aries.meses);
    ui->descripcionText->setText(aries.lectura);
}


void menu::on_tauroButton_clicked()
{
    ui->signoTittle->setText(tauro.nombre);
    ui->fechaLabel->setText(tauro.meses);
    ui->descripcionText->setText(tauro.lectura);
}


void menu::on_geminisButton_clicked()
{
    ui->signoTittle->setText(geminis.nombre);
    ui->fechaLabel->setText(geminis.meses);
    ui->descripcionText->setText(geminis.lectura);
}


void menu::on_cancerButton_clicked()
{
    ui->signoTittle->setText(cancer.nombre);
    ui->fechaLabel->setText(cancer.meses);
    ui->descripcionText->setText(cancer.lectura);
}


void menu::on_leoButton_clicked()
{
    ui->signoTittle->setText(leo.nombre);
    ui->fechaLabel->setText(leo.meses);
    ui->descripcionText->setText(leo.lectura);
}


void menu::on_virgoButton_clicked()
{
    ui->signoTittle->setText(virgo.nombre);
    ui->fechaLabel->setText(virgo.meses);
    ui->descripcionText->setText(virgo.lectura);
}


void menu::on_libraButton_clicked()
{
    ui->signoTittle->setText(libra.nombre);
    ui->fechaLabel->setText(libra.meses);
    ui->descripcionText->setText(libra.lectura);
}


void menu::on_escorpionButton_clicked()
{
    ui->signoTittle->setText(escorpion.nombre);
    ui->fechaLabel->setText(escorpion.meses);
    ui->descripcionText->setText(escorpion.lectura);
}


void menu::on_sagitarioButton_clicked()
{
    ui->signoTittle->setText(sagitario.nombre);
    ui->fechaLabel->setText(sagitario.meses);
    ui->descripcionText->setText(sagitario.lectura);
}


void menu::on_capricornioButton_clicked()
{
    ui->signoTittle->setText(capricornio.nombre);
    ui->fechaLabel->setText(capricornio.meses);
    ui->descripcionText->setText(capricornio.lectura);
}


void menu::on_acuarioButton_clicked()
{
    ui->signoTittle->setText(acuario.nombre);
    ui->fechaLabel->setText(acuario.meses);
    ui->descripcionText->setText(acuario.lectura);
}


void menu::on_piscisButton_clicked()
{
    ui->signoTittle->setText(piscis.nombre);
    ui->fechaLabel->setText(piscis.meses);
    ui->descripcionText->setText(piscis.lectura);
}

