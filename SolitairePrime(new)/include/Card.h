#ifndef CARD_H
#define CARD_H


class Card
{
    public:
        Card();
        Card(char r, char s);
        void setCard(char, char);
        int getValue();
        void showCard();

    protected:

    private:
        char r;
        char s;
};

#endif // CARD_H
