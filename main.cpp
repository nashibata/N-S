#include <iostream>
#include <cstring>
#include <vector>
#include <iomanip>
#include "game.h"
#include "music.h"
#include "movie.h"
#include "media.h"

using namespace std;


int main() {
  bool quit = false;
  while(quit == false) {
    cout << "ADD, SEARCH, DELETE, QUIT" << endl;
    char input[15];
    cin.get(input, 15);
    cin.ignore(100, '\n');
    cin.clear();
    if (strcmp(input, "ADD") == 0 || strcmp(input, "add") == 0) {
      //add command here
      cout << "ADD" << endl;
    }
    else if (strcmp(input, "SEARCH") == 0 || strcmp(input, "search") == 0) {
      //search command here
      cout << "SEARCH" << endl;
    }
    else if (strcmp(input, "DELETE") == 0 || strcmo(input, "delete")) {
      //delete command here
      cout << "DELETE" << endl;
    }
    else if (strcmp(input, "QUIT") == 0 || strcmp(input, "quit") == 0) {
      quit = true;
    }
  }
}
