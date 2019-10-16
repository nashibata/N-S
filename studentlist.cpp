/*
Nicholas Shibata
Student List is a program that creates a struct of student information which can be manipulated through commands
 */
#include <iostream>
#include <string.h>
#include <vector>
#include <iomanip>

using namespace std;

//this struct is a set of information for an individual "student"
struct Student {
  char namef[20];
  char namel[20];
  int id;
  float gpa;
};

//function prototypes
Student* ADD();
void PRINT(vector<Student*> person);
void DELETE(vector<Student*>* person, int id);

int main() {
  char command[10];
  int inputID;
  vector<Student*> person;
  bool quit = false;
  while (quit == false) {//continue looping the main program until user decides to quit
    cout << "ADD, PRINT, DELETE, QUIT" << endl;
    cin.get(command, 10);
    cin.clear();
    cin.ignore(50, '\n');
    if (strcmp(command, "QUIT") == 0 || strcmp(command, "quit") == 0) {
      quit = true; //break out of the while loop
    }
    else if (strcmp(command, "ADD") == 0 || strcmp(command, "add") == 0) {
      person.push_back(ADD()); //run ADD function
    }
    else if (strcmp(command, "PRINT") == 0 || strcmp(command, "print") == 0) {
      PRINT(person); //run PRINT function
    }
    else if (strcmp(command, "DELETE") == 0 || strcmp(command, "delete") == 0) {
      cout << "enter ID" << endl; 
      cin >> inputID;
      cin.clear();
      cin.ignore(50, '\n');
      DELETE(&person, inputID); //run DELETE function
    }
    else {
      cout << "invalid command" << endl; //invalid input
    }
  }
}

Student* ADD() {
  //creates space for a new struct and fills in information
  Student* newguy = new Student();
  cout << "enter first name" << endl;
  cin >> newguy->namef;
  cin.clear();
  cin.ignore(50, '\n');
  cout << "enter last name" << endl;
  cin >> newguy->namel;
  cin.clear();
  cin.ignore(50, '\n');
  cout << "enter ID" << endl;
  cin >> newguy->id;
  cin.clear();
  cin.ignore(50, '\n');
  cout << "enter GPA" << endl;
  cin >> newguy->gpa;
  cin.clear();
  cin.ignore(50, '\n');
  return newguy;
}

void PRINT(vector<Student*> person) {
  vector<Student*>::iterator i;
  for (i = person.begin(); i != person.end(); i++) { //looking through a list of students
    //print each component of struct Student for each person
    cout << "name: " << (*i)->namef << " " << (*i)->namel << endl;
    cout << "ID: " << (*i)->id << endl;
    cout << "GPA: " << fixed << setprecision(2) << (*i)->gpa << endl;
    cout << " " << endl;
  }
}

void DELETE(vector<Student*>* person, int id) {
  vector<Student*>::iterator j;
  for (j = person->begin(); j != person->end(); j++) { //looking at each person in the list
    if ((*j)->id == id) {//find the one with the same id as input
      //delete it and erase its memory
      delete *j;
      person->erase(j);
      return;
    }
  }
  //invalid id
  cout << "this may be an invalid id, returning to command prompt" << endl;
}
