#include "letter.h"

Letter::Letter()
{
    // get random letter
    int i = QTime::currentTime().msec();
    srand(i);
    char alphabet[] = {'A', 'A', 'B', 'C', 'D', 'E', 'E', 'F', 'G', 'H', 'I', 'I', 'J', 'K', 'L', 'M',
                       'N', 'O', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'U', 'V', 'W', 'X', 'Y', 'Y', 'Z'};
    xter = alphabet[rand() % numberOfLetters];

    // get value of letter
    unsigned values[] = {1, 2, 3, 1, 1, 4, 2, 4, 1, 8, 10, 1, 2, 1,
                       1, 3, 8, 1, 1, 1, 1, 1, 10, 10, 10, 10};

    val = values[xter - 'A'];
}

Letter::Letter(unsigned seed)
{
    // get random character
    srand(seed);
    char alphabet[] = {'A', 'A', 'B', 'C', 'D', 'E', 'E', 'F', 'G', 'H', 'I', 'I', 'J', 'K', 'L', 'M',
                       'N', 'O', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'U', 'V', 'W', 'X', 'Y', 'Y', 'Z'};
    xter = alphabet[rand() % numberOfLetters];

    // get value of letter
    unsigned values[] = {1, 2, 3, 1, 1, 4, 2, 4, 1, 8, 10, 1, 2, 1,
                       1, 3, 8, 1, 1, 1, 1, 1, 10, 10, 10, 10};
    val = values[xter - 'A'];
}

char Letter::character()
{
    return xter;
}

unsigned Letter::value()
{
    return val;
}
