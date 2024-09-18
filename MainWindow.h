#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include "WorkerClass.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void updateUI();

private slots:
    void on_spinBox_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
    int m_i = 0;
    int m = 0;
    QThread *workerThread;
    WorkerClass *worker;

};
#endif // MAINWINDOW_H
