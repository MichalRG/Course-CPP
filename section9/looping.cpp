#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
  for (int i {1}; i <= 10; i++) {
    cout << i << endl;
  }

  for (int i {1}; i <=10; i+=2) {
    cout << i << endl;
  }

  for (int i{1}, j{5}; i<=5; i++, j++) {
    cout << i << " + " << j << " = " << i + j << endl;
  }

  vector <int> nums {10, 20,30,40,50};

  for (unsigned i {0}; i < nums.size(); i++) { // unsigned is used to avoid warning, warning comes from size retuning unsigned int
    cout << nums[i] << endl;
  }

  // RANGE BASED FOR LOOP EXAMPLES

  int scores[] {10, 20, 30};
  for (auto score : scores) {
    cout << score << endl;
  }

  vector <double> temperatures {87.9, 77.9, 80.0, 72.5};
  double average_temp {};
  double total {};
  
  for (auto temp: temperatures) {
    total += temp;
  }

  if (temperatures.size() != 0)
    average_temp = total / temperatures.size();
  cout << fixed << setprecision(1); // from  iomanip it set precision to 1 decimal point
  cout << "Average temp: " << average_temp << endl;

  // WHILE LOOP EXAMPLES

  int number {};
  cout << "Enter a positive integer - start the countdown: ";
  cin >> number;

  while (number > 0)
  {
    cout << number << endl;
    number--;
  }
  cout<<"BLASTOFF!"<<endl;

  int number2 {};

  cout << "Enter an integer less than 100: ";
  cin >> number2;

  while (number2 >= 100) {
    cout << "Enter an integer less than 100: ";
    cin >> number2;
  }
  cout << "Thanks!" << endl;

  // DO WHILE LOOP EXAMPLES
  char selection {};

  do {
    cout << "\n------------------" << endl;
    cout << "1. Do this" << endl;
    cout << "2. Do that" << endl;
    cout << "3. Do something else" << endl;
    cout << "Q. Quit" << endl;
    cout <<"\nEnter the selection: ";
    cin >> selection;

    switch(selection) {
      case '1':
        cout << "You chose 1 - doing this" << endl;
        break;
      case '2':
        cout << "You chose 2 - doing that" << endl;
        break;
      case '3':
        cout << "You chose 3 - doing sth else" << endl;
        break;
      case 'q':
      case 'Q':
        cout << "Goodbye..." << endl;
        break;
      default:
        cout << "Unknown option -- try again..." << endl;
    }
  } while (selection != 'q' && selection != 'Q');

  // nested looops
  for (int num1 {1}; num1 <= 10; num1++) {
    for (int num2 {1}; num2 <= 10; num2++) {
      cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    cout << "----------------" << endl;
  }

  vector <int> histogram {3, 7, 2, 5, 13, 20, 8};
  cout << "Histogram" << endl;
  for (auto val: histogram) {
    for (int i {1}; i <= val; i++) {
      if (i % 2 == 0) {
        cout << "-";
      } else {
        cout << "*";
      }
    }
    cout << endl;
  }

  cout<<"calc pairs"<<endl;
  vector <int> vec {1, 2, 3, 4, 5};
  int result {};
    
  if (vec.size() == 0 || vec.size() == 1)
      return 0;
      
  int loop {1};
  int elements = vec.size();
  
  for (int i=0; i<vec.size(); i++) {
      while (loop < elements) {
          result += vec[i] * vec[loop];
          loop++;
      }
      if (i+2<vec.size()) {
          loop=i+2;
      }
  }
}