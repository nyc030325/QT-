#include "mainwindow.h"
#include "mainmatrix.h"
#include "mainstatistics.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_MainMatrix_clicked()
{
    // 创建新窗口实例
    mainmatrix *main_matrix = new mainmatrix(this);
    // 显示新窗口作为模态对话框
    main_matrix->exec();
}

void MainWindow::on_MainStatistics_clicked()
{
    // 创建新窗口实例
    mainstatistics *main_statistics = new mainstatistics(this);
    // 显示新窗口作为模态对话框
    main_statistics->exec();
}


