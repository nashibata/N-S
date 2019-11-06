#include <iostream>
#include <cstring>

using namespace std;

class media {
 public:
  media();
  char* getName();
  int getYear();
  int getType();
 private:
  char* name;
  int year;
  int type;
};
