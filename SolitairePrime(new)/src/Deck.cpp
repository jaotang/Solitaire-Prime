#include "Deck.h"
#include "Card.h"
#include <iostream>

using namespace std;

Deck::Deck()
{

    /////////////////ALL SPADES: 0 - 12///////////////////
    deck[0].setCard('A', 'S'); deck[1].setCard('2', 'S'); deck[2].setCard('3', 'S'); deck[3].setCard('4', 'S'); deck[4].setCard('5', 'S'); deck[5].setCard('6', 'S');
    deck[6].setCard('7', 'S'); deck[7].setCard('8', 'S'); deck[8].setCard('9', 'S'); deck[9].setCard('T', 'S'); deck[10].setCard('J', 'S'); deck[11].setCard('K', 'S');
    deck[12].setCard('Q', 'S');

    /////////////////ALL HEARTS: 13 - 25///////////////////
    deck[13].setCard('A', 'H'); deck[14].setCard('2', 'H'); deck[15 ].setCard('3', 'H'); deck[16 ].setCard('4', 'H'); deck[17].setCard('5', 'H'); deck[18].setCard('6', 'H');
    deck[19].setCard('7', 'H'); deck[20].setCard('8', 'H'); deck[21].setCard('9', 'H'); deck[22].setCard('T', 'H'); deck[23].setCard('J', 'H'); deck[24].setCard('K', 'H');
    deck[25].setCard('Q', 'H');
    /////////////////ALL DIAMONDS: 26 - 38///////////////////
    deck[26].setCard('A', 'D'); deck[27].setCard('2', 'D'); deck[28].setCard('3', 'D'); deck[29 ].setCard('4', 'D'); deck[30].setCard('5', 'D'); deck[31].setCard('6', 'D');
    deck[32].setCard('7', 'D'); deck[33].setCard('8', 'D'); deck[34].setCard('9', 'D'); deck[35].setCard('T', 'D'); deck[36].setCard('J', 'D'); deck[37].setCard('K', 'D');
    deck[38].setCard('Q', 'D');
    /////////////////ALL CLUBS: 39 - 52///////////////////
    deck[39].setCard('A', 'C'); deck[40].setCard('2', 'C'); deck[41].setCard('3', 'C'); deck[42].setCard('4', 'C'); deck[43].setCard('5', 'C'); deck[44].setCard('6', 'C');
    deck[45].setCard('7', 'C'); deck[46].setCard('8', 'C'); deck[47].setCard('9', 'C'); deck[48].setCard('T', 'C'); deck[49].setCard('J', 'C'); deck[50].setCard('K', 'C');
    deck[51].setCard('Q', 'C');
}

void Deck::showDeck(){ //i forgot, since it's void it doesn't return anything

    for(int i = 0; i < 52; i ++){
        deck[i].showCard(); //showCard has the endl;
    }

}
