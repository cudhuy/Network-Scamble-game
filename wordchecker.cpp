#include "wordchecker.h"

WordChecker::WordChecker(QString entry, QObject *parent) :
    QThread(parent)
{
    this->entry = entry;
}

void WordChecker::run()
{
    if(!findWordInDictionary())
    {
        emit sendPoints(entry, 0);
    }
    else
    {
        unsigned values[] = {1, 2, 3, 1, 1, 4, 2, 4, 1, 8, 10, 1, 2, 1,
                           1, 3, 8, 1, 1, 1, 1, 1, 10, 10, 10, 10};

        unsigned n = entry.size();
        unsigned points = 0;
        for(unsigned i = 0; i < n; i++)
        {
            char ch = entry.toStdString().at(i);
            points += values[ch - 'A'];
        }
        emit sendPoints(entry, points);
    }
    this->exit();
}

bool WordChecker::findWordInDictionary()
{
    QFile file("dictionary.txt");
    file.open(QFile::ReadWrite);
    qint32 first = 0;
    qint32 last = file.size();
    while(last >= first)
    {
        char word[31];
        // get the number of blocks in search space
        qint32 blocks = (last - first) / sizeof(word);
        // get the position of the middle block
        qint32 mid = first + (blocks / 2) * sizeof(word);
        // go to the position of the middle block
        file.seek(mid);
        // read that block
        file.read((char*)word, sizeof(word));

        // if the word is found, return true
        if(entry == QString(word))
        {
            return true;
        }
        if(entry > QString(word))
        {
            first = mid + (sizeof(word));
        }
        else    // if(entry < QString(word))
        {
            last = mid - (sizeof(word));
        }
    }
    return false;
}
