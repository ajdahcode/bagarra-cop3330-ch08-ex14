/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 alden bagarra
 */

#include <iostream>
using namespace std;

void addConstInt(const int a, const int b){
  // a = b + a; 
  /*
  You cannot modify the values in the function.
  */
  int result = a + b;
  cout << result << "\n";
}

void addInt(int a, int b){
  // a = a + b;
  /*
  As opposed to this function, you can modify the values.
  */
  int result = a + b;
  cout << result << "\n";
}

int main() {
  cout << "Enter two numbers with space in between to add: ";
  int value1;
  cin >> value1;
  int value2;
  cin >> value2;


  // addConstInt(value1, value2);
  addInt(value1, value2);
} 