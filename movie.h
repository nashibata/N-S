#include <iostream>
#include <cstring>

using namespace std;

class movie {
 public:
  movie();
  char* getName();
  char* getDirector();
  int getYear();
  int getLength();
  float getRating();
  int getType();
 private:
  char* name;
  char* director;
  int year;
  int length;
  float rating;
};
