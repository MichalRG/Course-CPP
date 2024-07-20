#include <iostream>

using namespace std;

void double_data(int *int_ptr);

void double_data(int *int_ptr) {
  *int_ptr *= 2;
}

void swap(int *a, int*b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void display(int *array, int sentinel) {
  while(*array != sentinel) {
    cout << *array++ << endl;
  }
}

int main() {
  int scores[] {100, 95, 89, 68, -1}; // -1 we call it sentinel value
  int *score_ptr {scores};

  while(*score_ptr != -1) {
    cout << *score_ptr << endl;
    score_ptr++; // it moveds to next memory location for int it moves 4 bytes because int is 4 bytes
  }

  cout << "\n-----------------" << endl;
  score_ptr = scores;
  while(*score_ptr != -1) {
    cout << *score_ptr++ << endl; // first it dereferences the pointer then increments the pointer, after derferencing the pointer is displayed
  }

  cout << "\n-----------------" << endl;
  string s1 {"Frank"};
  string s2 {"Frank"};
  string s3 {"James"};

  string *p1 {&s1};
  string *p2 {&s2};
  string *p3 {&s1};

  cout << boolalpha;
  cout << p1 << "==" << p2 << ":" << (p1==p2) << endl;
  cout << p1 << "==" << p3 << ":" << (p1==p3) << endl;

  cout << *p1 << "==" << *p2 << ":" << (*p1==*p2) << endl;
  cout << *p1 << "==" << *p3 << ":" << (*p1==*p3) << endl;

  p3=&s3;
  cout << *p1 << "==" << *p3 << ":" << (*p1==*p3) <<  endl;

  cout << "\n-------------"<<endl;
  char name[] {"Frank"};
  char *char_ptr1 {nullptr};
  char *char_ptr2 {nullptr};
  char_ptr1 = &name[0]; // F
  char_ptr2 = &name[3]; // n

  cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2-char_ptr1) << " characters away from " << *char_ptr1 << endl;


  int value {10};
  int *int_ptr {nullptr};
  cout << "Value: " << value << endl;
  double_data(&value);
  cout << "Value: " << value << endl;

  cout << "-----------------" << endl;
  int_ptr = &value;
  double_data(int_ptr);
  cout << "Value: " << value << endl;

  int x{100}, y{200};
  cout << "\nx: " << x << endl;
  cout << "y: " << y << endl;
  swap(&x, &y);
  cout << "\nx: " << x << endl;
  cout << "y: " << y << endl;

  display(scores, -1);

  return 0;
}