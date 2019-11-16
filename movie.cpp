#include <iostream>
#include <string.h>
#include "movie.h"
#include "media.h"

using namespace std;

movie::movie() {

}

int movie::getType() {
  return 2;
}

char* movie::getName() {
  return name;
}

char* movie::getDirector() {
  return director;
}

int* movie::getYear() {
  return year;
}

int* movie::getLength() {
  return &length;
}

float* movie::getRating() {
  return &rating;
}
