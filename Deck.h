#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <ctime>
#include "Card.h"
using namespace std;

class Deck
{
    public:
        Deck();
        Card draw();
        bool AnyCardsLeft();
    private:
        int numCards;
        int numSuits;
        bool** isDrawn;
};

#endif // DECK_H
