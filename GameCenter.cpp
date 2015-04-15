#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
//include three game headers
using namespace std;

int main(){
	bool quit = false;
	int playerin;
	//define ConnectFour class header
	//define tictactoe class header
	//define blackhack class header


	std::cout << "\nḠαмε ℭ℮ηтεя\n"
			  << "\nGreetings player, welcome to the GameCenter! Let the games begin...\n"
			  << "\n";
	while(!quit){
		std::cout << "Please choose which game you would like to play.\n";
		std::cout << "\nEnter 1 for Connect 4..\n"
				  << "Enter 2 for Tic Tac Toe..\n"
				  << "Enter 3 for Blackjack..\n"
				  << "Enter 4 to quit..\n"
				  << "\nEnter your choice now : ";
		std::cin >> playerin;
		std:: cout<< "\n";

		while(cin.fail()){
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Invalid input, please enter an integer from 1 to 3! .. : ";
			std::cin >> playerin;
		}

		if(playerin == 1){
			//initialize connectfour class
		}
		else if(playerin == 2){
			//initialize tictactoe class
		}
		else if(playerin == 3){
			//initialize blackjack class
		}
		else if(playerin == 4){
			quit = true;
		}


	}

	std::cout << "\nThanks for playing! We hope it was time well spent.\n"
			  << "\n";

}
