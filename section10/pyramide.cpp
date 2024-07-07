#include <iostream>
#include <string>

using namespace std;

int main() {
  string input;
  size_t rows {0};
  int in_row {1};
  cout << "Enter strings of rows: ";
  getline(cin, input);
  rows = input.length();
  cout << endl;

  for (int i {0}; i<rows; i++, in_row++) {
    // white spaces 
    if (i != rows-1) {
      for (int amount_of_white_spaces {rows-i-1}; amount_of_white_spaces>0; amount_of_white_spaces--)
        cout << " ";
    }
    
    // increasing 
    for (int j {0}; j<in_row; j++) {
      cout <<input[j];
    }

    // decresing
    if (i > 0) {
      for (int j {in_row-2}; j>=0; j--) {
        cout <<input[j];
      }
    }
    cout << endl; 
  }
  return 0;
}
