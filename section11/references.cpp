#include <iostream>
#include <vector>
#include <string>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v);

void pass_by_ref1(int &num) {
  num = 1000;
}

void pass_by_ref2(string &s) {
  s = "aaa";
}

void pass_by_ref3(vector<string> &v) {
  v.clear();
}

void print_vector(const vector<string> &v) {
  for (auto s : v)
    cout << s << " ";
  cout << endl;
}

int main() {
  int num {10};
  int another_num {20};

  cout << "num before calling pass_by_ref1 " << num << endl;
  pass_by_ref1(num);
  cout << "num after calling pass_by_ref1 " << num << endl;

  cout << "another_num before calling pass_by_ref1 " << another_num << endl;
  pass_by_ref1(another_num);
  cout << "another_num after calling pass_by_ref1 " << another_num << endl;

  string name {"Frank"};
  cout << "name before calling pass_by_ref2 " << name << endl;
  pass_by_ref2(name);
  cout << "name after calling pass_by_ref2 " << name << endl;

  vector<string> stooges {"Larry", "Moe", "Curly"};
  cout << "stooges before calling pass_by_ref3: " << endl;
  print_vector(stooges);
  pass_by_ref3(stooges);
  cout << "stooges after calling pass_by_ref3: " << endl;
  print_vector(stooges);

  return 0;
}