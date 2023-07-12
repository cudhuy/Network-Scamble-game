#ifndef LETTER_H
#define LETTER_H

#include <cstdlib>
#include <QTime>

const unsigned numberOfLetters = 32;

class Letter
{
private:
    char xter;
    unsigned val;

public:
    Letter();
    explicit Letter(unsigned);
    char character();
    unsigned value();
};

#endif // LETTER_H
