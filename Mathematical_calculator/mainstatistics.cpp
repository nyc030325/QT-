#include "mainstatistics.h"
#include "ui_mainstatistics.h"

mainstatistics::mainstatistics(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainstatistics)
{
    ui->setupUi(this);
}

mainstatistics::~mainstatistics()
{
    delete ui;
}
