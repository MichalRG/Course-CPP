#include <iostream>

using namespace std;

int num {300}; // global variable

void global_example() {
  cout << "Global num is: " << num << " at address: " << &num << endl;
  num *=2;
  cout << "Global num is: " << num << " at address: " << &num << endl;
}

void local_example(int x) {
  int num {1000};
  cout << "Local num is: " << num << " at address: " << &num << endl;
  num = x;
  cout << "Local num is: " << num << " at address: " << &num << endl;
}

void static_local_example() {
  static int num {5000}; // static local variable
  cout << "Local static num is: " << num << " at address: " << &num << endl;
  num += 1000;
  cout << "Local static num is: " << num << " at address: " << &num << endl;

}

int main() {
  int num {100};
  int num1 {200};

  cout << "Value of num is: " << num << endl;

  {
    int num {300}; // this num is different from the num outside the block
    cout << "Value of num inside inner block is: " << num << endl;
    cout << "Value of num1 inside inner block is: " << num1 << endl;
  }

  cout << "Value of num after inner block is: " << num << endl;
  local_example(10);
  local_example(20);
  global_example();
  global_example();
  static_local_example();
  static_local_example();
  return 0;
}