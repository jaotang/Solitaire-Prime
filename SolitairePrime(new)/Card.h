#ifndef CARD_H
#define CARD_H


class Card
{
    public:
        Card();
        Card(char newR, char newS);
        int getValue();
        void showCard();
        void setCard(char newR, char newS);

    protected:

    private:
        char r;
        char s;
};

#endif // CARD_H
