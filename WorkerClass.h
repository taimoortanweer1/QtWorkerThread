#ifndef WORKERCLASS_H
#define WORKERCLASS_H

#include <QObject>

class WorkerClass : public QObject
{
    Q_OBJECT
public:
    WorkerClass();

    void doWork();


public:  int getI() const;

signals:
    void signalDone();

private:

    long long i = 0;

};

#endif // WORKERCLASS_H
