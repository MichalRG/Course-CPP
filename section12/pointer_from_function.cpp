#include <iostream>
using namespace std;

int *create_array(size_t size, int value = 0) {
  int *new_storage {nullptr};
  new_storage = new int[size];
  for (size_t i {0}; i<size; i++) {
    *(new_storage + i) = value;
  }
  return new_storage;
}

void display(const int *const array, size_t size) {
  for (size_t i {0}; i<size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main() {
  int *my_array {nullptr};
  size_t size {10};
  int init_value {2};

  my_array = create_array(size, init_value);

  display(my_array, size);
  delete [] my_array;

  return 0;
}
