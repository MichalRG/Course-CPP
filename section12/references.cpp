#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  int num {100};
  int &ref {num};

  cout << num << endl;
  cout << ref << endl;

  num = 200;
  cout << "\n-----------------" << endl;
  cout << num << endl;
  cout << ref << endl;

  ref = 300;
  cout << "\n-----------------" << endl;
  cout << num << endl;
  cout << ref << endl;

  vector <string> stooges {"Larry", "Moe", "Curly"};
  for (auto str : stooges)
    str = "Funny"; // str is a copy of the vector element but only localy so it doesnt change the vector element
  for (auto str : stooges) {
    cout << str << " ";
    cout << endl;
  }
  for (auto &str : stooges)
    str = "Funny"; // str is a reference to the vector element so it changes the vector element
  for (auto const &str : stooges) {
    cout << str << " ";
    cout << endl;
  }
    
  return 0;
}