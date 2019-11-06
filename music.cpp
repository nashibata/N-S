#include <iostream>
#include <cstring>
#include "music.h"
#include "media.h"

using namespace std;

music::music() {

}

int music::getType() {
  return 1;
}

char* music::getName() {
  return name;
}

char* music::getArtist() {
  return artist;
}

char* music::getPublisher() {
  return publisher;
}

int music::getYear() {
  return year;
}

int music::getLength() {
  return length;
}
