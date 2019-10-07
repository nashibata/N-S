#include <iostream>
#include <cstring>
using namespace std;

int main() {
  cout << "Welcome to Palindrome!" << endl << "type a word or phrase and I will check if its a palindrome" << endl;
  //variables
  char str1[50];
  char str2[50];
  char str3[50];
  int count = 0;
  for (int i = 0; i < 49; i++) {
    str1[i] = 0;
    str2[i] = 0;
    str3[i] = 0;
  }
  cin.get(str1, 50);
  cin.get();
  for (int i = 0; i < 49; i++) {
    if (str1[i] >= 97 && str1[i] <= 122) { //removes special characters based on ASCII values
      str2[count] = str1[i];
      count++;
    }
    else if (str1[i] >= 65 && str1[i] <= 90) {
      str2[count] = str1[i] + 32;
      count++;
    } //lowercase letters
  }
  count = 0;
  for (int i = 49; i >= 0; i--) { //reverse the second string and copy it into string 3
    if (str2[i] != 0) {
      str3[count] = str2[i];
      count++;
    }
  }
  if (strcmp (str2, str3) == 0) { //0 means the strings are the same, in reverse and forwards
    cout << "Palindrome" << endl;
  }
  else {
    cout << "Not a Palindrome" << endl;
  }
}
