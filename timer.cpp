#include "timer.h"

Timer::Timer(QObject *parent, unsigned timeLeft) :
    QThread(parent)
{
    this->timeLeft = timeLeft;
}

void Timer::run()
{
    for(unsigned i = 0; i <= timeLeft; i++)
    {
        emit countDown(timeLeft - i);
        this->sleep(1);
    }
    this->exit(0);
}

void Timer::addSeconds(unsigned addedTime)
{
    this->timeLeft += addedTime;
}
