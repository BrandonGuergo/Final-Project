#ifndef PLAYER_H
#define PLAYER_H
using namespace std;

//This class doesn't work (I didn't know how you were implementing this)


class Player
{
    public:
        Card[] hand;
        Player();
        void addToTotal(int);
    private:
        int total;
};

#endif // PLAYER_H
