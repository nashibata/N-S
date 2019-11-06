#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

media::media() {

}

int media::getType() {
  return type;
}

int media::getYear() {
  return year;
}

char* media::getName() {
  return name;
}
