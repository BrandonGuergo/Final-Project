#include "Deck.h"
using namespace std;

private int numCards;
private int numSuits;

Deck::Deck()
{
    //Declared in here in case we want to change to multiple decks
    numSuits = 4;
    numCards = 13;

    isDrawn = new bool*[numSuits];
    //set each card to false (until drawn)
    for (int i = 0; i < numCards; i++) {
        isDrawn[i] = new bool[numCards];
        for (int j = 0; j < numCards; j++){
            isDrawn[i][j] = false;
        }
    }
}

Card Deck::draw(){
  //initialize random number generator
  srand (time(NULL));
  bool inHand = true;
  int suit;
  int card;
  while(inHand){
    suit = rand() % 4;
    card = rand() % 13;
    //false if in deck still by construction
    if (isDrawn[suit][card] == false){
        inHand = false;
    }
  }
  //st = suit
  string st;
  //s = card
  string s;

  switch (suit)) {
        case 0:
            st = "Clubs";
            break;
        case 1:
            st = "Hearts";
            break;
        case 2:
            st = "Diamonds";
            break;
        case 3:
            st = "Spades";
            break;
      }
  switch (card)) {
        case 0:
            s = "King of " + s;
            break;
        case 1:
            s = "Ace of " + s;
            break;
        case 2:
            s = "2 of " + s;
            break;
        case 3:
            s = "3 of " + s;
            break;
        case 4:
            s = "4 of " + s;
            break;
        case 5:
            s = "5 of " + s;
            break;
        case 6:
            s = "6 of " + s;
            break;
        case 7:
            s = "7 of " + s;
            break;
        case 8:
            s = "8 of " + s;
            break;
        case 9:
            s = "9 of " + s;
            break;
        case 10:
            s = "10 of " + s;
            break;
        case 11:
            s = "Jack of " + s;
            break;
        case 12:
            s = "Queen of " + s;
            break;
      }

  Card* toCard = Card(card, suit, s, st);
  //Don't have player methods or how they relate
  //PLAYER->addToTotal(card);
  return toCard;
}

bool Deck::AnyCardsLeft()
{
	for(int n = 0; n < numSuits; n++)
		for(int i = 0; i < numCards; i++)
			if(!isdrawn[i][n])
				return true;
	return false;
}

