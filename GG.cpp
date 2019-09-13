#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() { 
  bool stillPlaying = true;
  while (stillPlaying == true) {
    //two lines below initialize a random number, the formula ensures its between 0 and 100
    srand(time(NULL));
    int random = 0 + rand() % 101;
    cout << "Welcome to the Guessing Game" << endl << "I've thought up a number between 0 & 100, it's your job to guess" << endl << "Go ahead and try" << endl;
    int input = 0;
    int guess = 0;
    cout << random << endl;
    while (random != input) {
      cin >> input;
      if (random < input) {
	cout << "your guess was too high, try again" << endl;
	guess++;
      }
      else if (random > input) {
	cout << "your guess was too low, try again" << endl;
	guess++;
      }
      else if (random == input) {
	cout << "correct!" << endl << "it took you " << guess << " tries" << endl;
	cout << "would you like to play again? y for yes and n for no" << endl;
	char yn ='y';
	cin >> yn;
	if (yn == 'y') {
	  stillPlaying = true;
	}
	else if (yn == 'n') {
	  stillPlaying = false;
	}
     }
  }
}
}
