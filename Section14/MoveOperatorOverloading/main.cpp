#include <iostream>
#include "Mystring.h"
#include <vector>

using namespace std;

int main () {
  Mystring a{"Hello"};
  a = Mystring{"Hola"};
  a = "Bonjour";

  return 0;
}