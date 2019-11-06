#include <iostream>
#include <cstring>
#include "game.h"
#include "media.h"

using namespace std;

game::game() {

}

int game::getType() {
  return 0;
}

char* game::getName() {
  return name;
}

int game::getYear() {
  return year;
}

char* game::getPublisher() {
  return publisher;
}

float game::getRating() {
  return rating;
}
