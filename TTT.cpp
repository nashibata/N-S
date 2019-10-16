#include <iostream>
#include <string.h>

//Nicholas Shibata
//Tic Tac Toe prints a board out and allows the user to input a 2-character pair to add a piece to the board and play a full game of TTT
using namespace std;

void printB(char * point[3][3]); //print board
void clearB(char * point[3][3]); //clear board
bool winC(char * point[3][3], char player); //check win
bool tieC(char * point[3][3]); //check tie
int xwin = 0;
int owin = 0;

int main() {
  //variables
  char board[3][3];
  char * boardpoint[3][3];
  char pair[2];
  char player = 'o'; //piece, either O or X
  char playAgain = 'y';
  bool tries = true;

  for (int x = 0; x < 3; x++) {
    for (int y = 0; y < 3; y++) {
      boardpoint[x][y] = & board[x][y];
    }
  }
  while(playAgain == 'y') { //runs TTT one time
    clearB(boardpoint);
    printB(boardpoint);
    player = 'o';
    while(!winC(boardpoint, player) && !tieC(boardpoint)) {
      if(player == 'x') {
	player = 'o';
      }
      else {
	player = 'x';
      }
      do {
	if(tries == true) {
	  cout << "type in a letter followed by a number to place a piece" << endl; 
	}
	cin.get(pair, 5);
	cin.clear();
	cin.ignore(45, '\n');
	tries = false;
      }
      //checks if the piece is in a valid spot
      while(!(pair[0] == 'a' || pair[0] == 'b' || pair[0] == 'c')
	    || !(pair[1] == '1' || pair[1] == '2' || pair[1] == '3')
	    || !(board[(int)pair[1] - '1'][(int)pair[0] - 'a'] == ' '));
      tries == true;
      if(player == 'x') {
	board[(int)pair[1]][(int)pair[0]] = 'x';
	board[(int)pair[1]][(int)pair[0]] = player;
      }
      else if(player == 'o'){
	board[(int)pair[1]][(int)pair[0]] = 'o';
	board[(int)pair[1]][(int)pair[0]] = player;
      }
      printB(boardpoint);
    }
    if(tieC(boardpoint)) { //if it endds in a tie
      cout << "It's a tie. Nobody won." << endl;
    }
    else { //if not then its a win
      cout << player << " has won the match" << endl;
      if(player == 'x') {
	xwin++;
      }
      else if(player == 'o') {
	owin++;
      }
    }
    //asks if the player wants to go again
    cout << "Wanna play again? type y or n" << endl;
    cin >> playAgain;
    cin.clear();
    cin.ignore(50, '\n');
  }
}

//functions
void clearB(char * point[3][3]) { //clearing the board
  for (int x = 0; x < 3; x++) {
    for (int y = 0; y < 3; y++) {
      * point[x][y] = ' ';
    }
  }
}

void printB(char * point[3][3]) { //prints the board
  cout << " a b c" << endl;
  cout << '1';
  for (int i = 0; i < 3; i++) {
    cout << ' ' << * point[0][i];
  }
  cout << endl;

  cout << '2';
  for (int i = 0; i < 3; i++) {
    cout << ' ' << * point[1][i];
  }
  cout << endl;

  cout << '3';
  for (int i = 0; i < 3; i++) {
    cout << ' ' << * point[2][i];
  }
  cout << endl;
}

bool tieC(char * point[3][3]) { //checks for ties by looking at every point on the board
  for (int x = 0; x < 3; x++) {
    for (int y = 0; y < 3; y++) {
      if(* point[x][y] == ' ') {
	return false;
      }
    }
  }
  return true;
}

bool winC(char * point[3][3], char player) { //checks for wins by looking at every possibility
  for (int i = 0; i < 3; i++) {
    if(* point[0][i] == player && * point[1][i] == player && * point[2][i] == player) {
      return true;
    }
    if(* point[i][0] == player && * point[i][1] == player && * point[i][2] == player) {
      return true;
    }
  }
  if(* point[0][0] == player && * point[1][1] == player && * point[2][2] == player) {
    return true;
  }
  if(* point[2][0] == player && * point[1][1] == player && * point[0][2] == player) {
    return true;
  }
  return false;
}
