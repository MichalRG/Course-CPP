#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
  Mystring larry {"Larry"};
  Mystring moe {"Moe"};

  Mystring stooge = larry;
  larry.display();
  moe.display();

  cout << (larry == moe) << endl;
  cout << (larry == stooge) << endl;

  larry.display();
  Mystring larry2 -= larry;
  larry2.display();

  Mystring stooges = larry + "Moe";
  Mystring two_stooges = "Larry" + moe;
  two_stooges.display();
  Mystring three_stooges = larry + moe + "Curly";
  three_stooges.display();
}