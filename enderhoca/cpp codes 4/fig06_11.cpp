// Fig. 6.11: fig06_11.cpp
// Craps simulation.
#include <iostream>
#include <cstdlib> // contains prototypes for functions srand and rand
#include <ctime> // contains prototype for function time
using namespace std;

int rollDice(); // rolls dice, calculates and displays sum

int main() {
	// enumeration with constants that represent the game status
	enum Status {
	    CONTINUE=2, WON, LOST=5
	}; // all caps in constants

	// randomize random number generator using current time
	srand(time(0));

	int myPoint {0}; // point if no win or loss on first roll
	Status gameStatus; // can be CONTINUE, WON or LOST
	int sumOfDice =rollDice(); // first roll of the dice

	// determine game status and point (if needed) based on first roll
	switch (sumOfDice) {
		case 7: // win with 7 on first roll
		case 11: // win with 11 on first roll
			gameStatus = WON;
			break;
		case 2: // lose with 2 on first roll
		case 3: // lose with 3 on first roll
		case 12: // lose with 12 on first roll
			gameStatus = Status::LOST;
			break;
		default: // did not win or lose, so remember point
			gameStatus = Status::CONTINUE; // game is not over
			myPoint = sumOfDice; // remember the point
			cout << "Point is " << myPoint << endl;
			break; // optional at end of switch
	}

	// while game is not complete
	while (Status::CONTINUE == gameStatus) { // not WON or LOST
		sumOfDice = rollDice(); // roll dice again

		// determine game status
		if (sumOfDice == myPoint) { // win by making point
			gameStatus = Status::WON;
		} else {
			if (sumOfDice == 7) { // lose by rolling 7 before point
				gameStatus = Status::LOST;
			}
		}
	}

	// display won or lost message
	if (Status::WON == gameStatus) {
		cout << "Player wins" << endl;
	} else {
		cout << "Player loses" << endl;
	}
//	Status e=WON;
//		cout <<(e&LOST);
}

// roll dice, calculate sum and display results
int rollDice() {
	int die1 {1 + rand() % 6}; // first die roll
	int die2 {1 + rand() % 6}; // second die roll
	int sum {die1 + die2}; // compute sum of die values

	// display results of this roll
	cout << "Player rolled " << die1 << " + " << die2
	     << " = " << sum << endl;
	cout << time(0);     
	return sum;
}

