#include "mainmatrix.h"
#include "ui_mainmatrix.h"

mainmatrix::mainmatrix(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainmatrix)
{
    ui->setupUi(this);
}

mainmatrix::~mainmatrix()
{
    delete ui;
}
