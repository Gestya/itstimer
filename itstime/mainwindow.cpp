#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <Qtime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QTimer* timer = new QTimer(this);
    timer->setInterval(1000);
    connect(timer, Signal(timeout()), this, SLOT(onTimeout()));
    timer->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWidget::onTimeout()
{

    ui->label->setText(QTime::currentTime());
    ui->label_2->setText(QTime::currentTime().toString());
}
