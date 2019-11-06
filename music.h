#include <iostream>
#include <cstring>

using namespace std;

class music {
 public:
  music();
  char* getName();
  char* getArtist();
  int getYear();
  int getLength();
  char* getPublisher();
  int getType();
 private:
  char* name;
  char* artist;
  int year;
  int length;
  char* publisher;
};
