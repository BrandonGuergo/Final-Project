#include "blackjack.h"
#include "Card.h"
#include "Deck.h"

using namespace std;

int main(){
//for testing purposes only
blackjack* game = new blackjack();
game->run();
Card* lilDeck = new Card(2, 2, "s", "s");
//deck->

return 0;
}

blackjack::blackjack()
{

}

void blackjack::run()
{
    cout<<"Welcome"<<endl;
    cout<<"Choose an option by entering the list number"<<endl;

    int choice = 0;
    while (choice != 3){
        cout<<"1. Rules"<<endl<<"2. Play"<<endl<<"3. Quit"<<endl;

        cin>>choice;

        switch (choice) {
        case 1:
            //Print out rules here
            cout<<""<<endl;
            break;
        case 2:
            play();
            break;
        case 3:
            cout << "Thank you for playing"<<endl;
            break;
        default:
            cout << "You have not entered 1, 2 or 3"<<endl;
      }
    }
}

void blackjack::play()
{
    cout<<"Welcome to the table"<<endl;
    cout<<"Choose an option by entering the list number"<<endl;

    int choice = 0;
    while (choice != 3){
        cout<<"1. Hit"<<endl<<"2. Stand"<<endl<<"3. Return to main menu"<<endl;

        cin>>choice;

        switch (choice) {
        case 1:
            //deal another card
            break;
        case 2:
            //Stop dealing
            break;
        case 3:
            cout << "Thank you for playing"<<endl;
            break;
        default:
            cout << "You have not entered 1, 2 or 3"<<endl;
      }
    }
}
