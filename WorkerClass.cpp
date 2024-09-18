#include "WorkerClass.h"

WorkerClass::WorkerClass()
{


}

void WorkerClass::doWork()
{
    while(true)
    {
        i++;

        if(i>100000000)
        {
            emit signalDone();


                i = 0;
        }


    }
}

int WorkerClass::getI() const
{
    return i;
}
