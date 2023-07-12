#ifndef WORDCHECKER_H
#define WORDCHECKER_H

#include <QThread>
#include <QFile>

class WordChecker : public QThread
{
    Q_OBJECT
    QString entry;

public:
    explicit WordChecker(QString entry = QString("\0"), QObject *parent = 0);
    void run();
    bool findWordInDictionary();

signals:
    void sendPoints(QString, unsigned);
    
public slots:
    
};

#endif // WORDCHECKER_H
