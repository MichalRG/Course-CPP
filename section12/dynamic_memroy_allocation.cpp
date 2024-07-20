#include <iostream>
#include <string>

using namespace std;

int main() {
  int *int_ptr {nullptr};
  int_ptr = new int; // allocate an integer on the heap
  cout << int_ptr << endl; // address of the integer on the heap
  cout << *int_ptr << endl; // garbage value
  *int_ptr = 100;
  cout << *int_ptr << endl; // 100
  delete int_ptr; // deallocate the integer on the heap

  int *array_ptr {nullptr};
  int size;
  cout << "Enter the size of the array: ";
  cin >> size;
  array_ptr = new int[size]; // allocate an array of integers on the heap
  cout << array_ptr << endl; // address of the array on the heap
  cout << *array_ptr << endl; // garbage value
  for (int i {0}; i<size; i++) {
    array_ptr[i] = i;
  }
  for (int i {0}; i<size; i++) {
    cout << array_ptr[i] << " ";
  }
  cout << endl;
  delete [] array_ptr; // deallocate the array on the heap

  int scores[] {100, 95, 89};
  cout <<"Value of scores: " << scores << endl; // address of the array on the stack
  int *score_ptr {scores};

  cout << "\nArray subscript notation: " << endl;
  cout << scores[0] << endl;
  cout << scores[1] << endl;
  cout << scores[2] << endl;

  cout << "\nPointer subscript notation: " << endl;
  cout << score_ptr[0] << endl;
  cout << score_ptr[1] << endl;
  cout << score_ptr[2] << endl;

  cout << "\nPointer offset notation: " << endl;
  cout << *score_ptr << endl;
  cout << *(score_ptr + 1) << endl;
  cout << *(score_ptr + 2) << endl;

  cout << "\nArray offset notation: " << endl;
  cout << *scores << endl;
  cout << *(scores + 1) << endl;
  cout << *(scores + 2) << endl;

  string xx {"SASDA"};
  string *xx_ptr {&xx};
  cout << (*xx_ptr).length() << endl;
  cout << xx_ptr++;
  return 0;
}