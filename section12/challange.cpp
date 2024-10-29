#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(const int *const arr, const size_t size);
int* applay_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2);

void print(const int *const arr, const size_t size) {
  for (int i=0; i< size;i++)
    cout << arr[i] << " "; // pointer subscript notation
    // cout << *(arr+i) << " "; // pointer offset notation same as above result
  cout << endl;
}

int* applay_all(const int *const arr1, size_t size1, const int *const arr2, size_t size2) {
  int *arr_pointer {nullptr};
  arr_pointer = new int[size1*size2];
  for (int i=0, k=0; i<size1; i++) {
    for (int j=0; j<size2; j++, k++) {
      arr_pointer[k]=arr1[i]*arr2[j];
    }
  }
  return arr_pointer;
}

void test(int *arr, int size) { // if pass int[] I have to defined size before passing that why I rather use pointers
  cout << *arr << endl;
  cout << arr[0] << endl;
}

int main () {
  int arr[] {1, 2, 3, 4, 5};
  int arr2[] {10, 20, 30};
  // int size1 = 5; 
  size_t size1 {5}; // size_t is unsigned int
  // int size2 = 3;
  size_t size2 {3};

  print(arr, size1);
  print(arr2, size2);
  
  int* res_arr = applay_all(arr,size1,arr2,size2);
  print (res_arr, size1*size2);
  test(arr, size1);
  delete[] res_arr;
}
