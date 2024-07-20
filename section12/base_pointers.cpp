#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int num {10};
  cout << "Value of num is: " << num << endl;
  cout << "size of num is: " << sizeof num << endl;
  cout << "Address of num is: " << &num << endl; 

  cout << endl;
  int *p;
  cout << "Value of p is: " << p << endl; // pointing somewhere random
  cout << "Address of p is: " << &p << endl;
  cout << "Size of p is: " << sizeof p << endl;

  p = nullptr;
  cout << "Value of p is: " << p << endl;

  int *p1 {nullptr};
  double *p2 {nullptr};
  unsigned long long *p3 {nullptr};
  vector<string> *p4 {nullptr};
  string *p5 {nullptr};

  cout << "\nsize of p1 is: " << sizeof p1 << endl;
  cout << "size of p2 is: " << sizeof p2 << endl;
  cout << "size of p3 is: " << sizeof p3 <<endl;
  cout << "size of p4 is: " << sizeof p4 << endl;
  cout << "size of p5 is: " << sizeof p5 << endl;

  int score{10};
  double high_temp{100.7};

  int *score_ptr {nullptr};

  score_ptr = &score;
  cout << "\nValue of scores is: " << score <<endl;
  cout << "Address of score is: " << &score << endl;
  cout << "Value of score_ptr is: " << score_ptr << endl;
  
  score = 100;
  score_ptr = &score;

  cout << "\nDereferencing score_ptr: " << *score_ptr << endl;

  *score_ptr = 200;
  cout << "Dereferencing score_ptr: " << *score_ptr << endl;

  string name {"Frank"};
  string *string_ptr {&name};
  cout << "string_ptr " << *string_ptr << endl; // Frank
  name = "James";
  cout << "string_ptr " << *string_ptr << endl; // James

  vector<string> stooges {"Larry", "Moe", "Curly"};
  vector<string> *vector_ptr {nullptr};
  vector_ptr = &stooges;

  cout << "\nFirst stooge: " << (*vector_ptr).at(0) << endl;
  cout <<"Stooges: " << endl;
  for (auto stooge: *vector_ptr)
    cout << stooge << " ";
  

  return 0;
}