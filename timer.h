#ifndef TIMER_H
#define TIMER_H

#include <QThread>

class Timer : public QThread
{
    Q_OBJECT
public:
    explicit Timer(QObject *parent = 0, unsigned timeLeft = 100);
    
signals:
    void countDown(unsigned);
    
public slots:
    void run();
    void addSeconds(unsigned);

private:
    unsigned timeLeft;
    
};

#endif // TIMER_H
