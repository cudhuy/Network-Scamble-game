#ifndef PLAYER_H
#define PLAYER_H

#include <QString>
#include <QStringList>
#include <QFile>
#include <QPair>
#include <QList>
#include <QException>
#include <iostream>

const unsigned highScoreLength = 10;

struct Record
{
    char userName[31];
    unsigned high_score[highScoreLength+1];
};

class Player
{
public:
    typedef QPair<QString, int> HiScoreEntry;
    QString userName;
    unsigned high_score[highScoreLength+1];

    explicit Player(QString name = QString("GUEST"));
    void updatePlayerData(unsigned points = 0);
    void loadHiScores(QString);
    void saveToFile();
    static bool exists(QString);
    static void backUpSaveFile();
    static void restoreSaveFile();
    static QStringList loadAllPlayerNames();
    static QList<HiScoreEntry> loadGeneralHiScores();


private:
    bool less(const HiScoreEntry&, const HiScoreEntry&);
    void sortHiScores(unsigned*, unsigned, unsigned);
    unsigned split(unsigned*, unsigned, unsigned);
    void swap(unsigned*, unsigned, unsigned);
    void copyToRecord(Record&);
    void copyFromRecord(Record&);
};

#endif // PLAYER_H
