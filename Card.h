#ifndef CARD_H
#define CARD_H
#include <sstream>
#include <iostream>
#include <cstdlib>

using namespace std;

class Card
{
    public:
        Card(int, int, string, string);
    private:
        std::string name;
        std::string Suit;
        unsigned int Value;
        unsigned int SuitValue;
};

#endif // CARD_H
