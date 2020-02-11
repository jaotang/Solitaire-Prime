#ifndef DECK_H
#define DECK_H
#include "Card.h"

class Deck
{
    public:
        Deck();
        void showDeck();

    protected:

    private:
        //const int cards = 52;
        Card deck[52];
        int top;
};

#endif // DECK_H
