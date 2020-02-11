#include "Card.h"
#include "Deck.h"
#include "StringPractice.h"
#include <iostream>

using namespace std;

int main()
{
    Deck newDeck;

    newDeck.showDeck();

    cout << "Everything after, is from card class" << endl;
    //////////////Practicing////////////////
    Card();
    Card card0;
    Card card1;
    Card card2;

    card0.setCard('J','S');
    card1.setCard('K','S');
    card2.setCard('Q','D');

    card0.showCard();
    card1.showCard();
    card2.showCard();

    cout << "Values of cards:" << endl;
    cout << card0.getValue() << endl;
    cout << card1.getValue() << endl;
    cout << card2.getValue() << endl;
    /////////////////////////////////////////

    return 0;
}

