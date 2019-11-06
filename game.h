#include <iostream>
#include <cstring>

using namespace std;

class game {
 public:
  game();
  char* getName();
  int getYear();
  char* getPublisher();
  float getRating();
  int getType();
 private:
  char* name;
  int year;
  char* publisher;
  float rating;
};
