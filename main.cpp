#include <iostream>

// Lab 5 — Isaiah Salvatierra
// CIS 5 Week 05 · Eligibility check

using std::cout;
using std::cin;

int main() {
  int age = 0;
  double gpa = 0.0;

 cout << "How old are you? \n"; cin >> age; // Declare and store with cout and cin
 cout << "What is your current GPA? \n"; cin >> gpa;

  // Thresholds: adult at 18, GPA eligible at 3.5

 bool adult = age >= 18;
 bool eligible = gpa >= 3.5;
 
 if ( adult && eligible) { // Double Ampersands indicate take both of booleans
  cout << "You are in right standings to be considered for this college, thank you for your application! We will be in contact soon. \n";
 } else if ( adult || eligible ) {
  cout << "One of these requirements for admission have not been met, please try applying again next year! \n";
 } else {
  cout << "You are not able to be considered for admission at this time. \n";
 }
  return 0;
}
