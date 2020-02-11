#include "Card.h"
#include <iostream>

using namespace std;

//IMPLEMENTATION goes here

Card::Card(){ //default constructor?
    r = 'z';
    s = 'z';
}

Card::Card(char newR, char newS){
    r = newR;
    s = newS;
}

void Card::setCard(char newR, char newS){
    r = newR;
    s = newS;
}

int Card::getValue(){
    switch(r){
        case 'A':
            return 1;
            break;
        case '2':
            return 2;
            break;
        case '3':
            return 3;
            break;
        case '4':
            return 4;
            break;
        case '5':
            return 5;
            break;
        case '6':
            return 6;
            break;
        case '7':
            return 7;
            break;
        case '8':
            return 8;
            break;
        case '9':
            return 9;
            break;
        case '10':    //too many characters, not considered a char
            return 10;
            break;
        case 'J':
            return 10;
            break;
        case 'K':
            return 10;
            break;
        case 'Q':
            return 10;
            break;
    }
}

void Card::showCard(){
    cout << r << s << endl;
}

