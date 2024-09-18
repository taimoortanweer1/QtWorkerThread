#include "MainWindow.h"
#include "./ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    worker = new WorkerClass;
    workerThread = new QThread(this);
    worker->moveToThread(workerThread);


    connect(worker,SIGNAL(signalDone()), this, SLOT(updateUI()));
    connect(workerThread,&QThread::started,worker, &WorkerClass::doWork);

    workerThread->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateUI()
{

    qDebug() << "work done" << m++;
    ui->spinBox->setValue(worker->getI());

}

void MainWindow::on_spinBox_valueChanged(int arg1)
{

}

