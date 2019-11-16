#include <iostream>
#include <string.h>
#include <vector>
#include <iomanip>
#include "game.h"
#include "music.h"
#include "movie.h"
#include "media.h"

using namespace std;

void ADD(vector<Media*>* media);

int main() {
  bool quit = false;
  char input[15];
  char yearInput[20];
  char nameInput[20];
  vector<Media*> mediaArray;
  while(quit == false) {
    cout << "ADD, SEARCH, DELETE, QUIT" << endl;
    cin.get(input, 15);
    cin.clear();
    cin.ignore(100, '\n');
    if (strcmp(input, "ADD") == 0 || strcmp(input, "add") == 0) {
      ADD(&mediaArray);
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

void ADD(vector<Media*>* media) {
  char input[15];
  cout << "Would you like to add a movie, a song, or a game?" << endl;
  cin.get(input, 15);
  cin.clear();
  cin.ignore(100, '\n');
  if(strcmp(input, "movie") == 0) {
    Movie* movie = new Movie();
    cout << "Please enter the following..." << endl;
    cout << "Title:" << endl;
    cin.get(movie->getName(), 50);
    cin.clear();
    cin.ignore(50, '\n');
    cout << "Year:" << endl;
    cin >> *movie->getYear();
    cin.clear();
    cin.ignore(50, '\n');
    cout << "Director:" << endl;
    cin.get(movie->getDirector(), 50);
    cin.clear();
    cin.ignore(50, '\n');
    cout << "Duration:" << endl;
    cin >> *movie->getLength();
    cin.clear();
    cin.ignore(50, '\n');
    cout << "Rating:" << endl;
    cin >> *movie->getRating();
    cin.clear();
    cin.ignore(50, '\n');
    media->push_back(movie);
  }
  else if(strcmp(input, "song") == 0) {
    Music* music = new Music();
    cout << "Please enter the following..." << endl;
    cout << "Title:" << endl;
    cin.get(music->getName, 50);
    cin.clear();
    cin.ignore(50, '\n');
    cout << "Year:" << endl;
    cin >> *music->getYear();
    cin.clear();
    cin.ignore(50, '\n');
    cout << "Artist:" << endl;
    cin.get(music->getArtist, 50);
    cin.clear();
    cin.ignore(50, '\n');
    cout << "Duration:" << endl;
    cin >> *music->getLength;
    cin.clear();
    cin.ignore(50, '\n');
    cout << "Publisher:" << endl;
    cin.get(music->getPublisher(), 50);
    cin.clear();
    cin.ignore(50, '\n');
    media->push_back(music);
  }
  else if(strcmp(input, "game") == 0) {
    Game* game = new Game();
    cout << "Please enter the following..." << endl;
    cout << "Title:" << endl;
    cin.get(game->getName(), 50);
    cin.clear();
    cin.ignore(50, '\n');
    cout << "Year:" << endl;
    cin >> *game->getYear();
    cin.clear();
    cin.ignore(50, '\n');
    cout << "Publisher:" << endl;
    cin.get(game->getPublisher(), 50);
    cin.clear();
    cin.ignore(50, '\n');
    cout << "Rating:" << endl;
    cin >> *game->getRating();
    cin.clear();
    cin.ignore(50, '\n');
    media->push_back(game);
  }
  else {
    cout << "invalid command" << endl;
  }
}
