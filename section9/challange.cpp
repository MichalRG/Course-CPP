#include <iostream>
#include <vector>

using namespace std;

int main () {
  char selection {};
  vector <int> numbers;

  do {
    cout<< "P - Print numbers" << endl << "A - Add numbers" << endl << "M - Display mean of the numbers" << endl << "S - Display the smallest number" << endl << "L - Display the largest number" << endl << "Q - Quit" << endl;
    cout << "Enter your choice: ";
    cin >> selection;

    switch (selection) {
      case 'p':
      case 'P':
        cout << "Numbers: " << endl;
        for (auto num: numbers) {
          cout << num << " ";
        }
        cout << "----------------" << endl;
        break;
      case 'a':
      case 'A':
      {
        int num_to_add {};
        cout << "Enter the number to add: ";
        cin >> num_to_add;
        numbers.push_back(num_to_add);
        cout << num_to_add << " added" << endl;
        cout << "----------------" << endl;
        break;
      }
      case 'm':
      case 'M':
      { 
        if (numbers.size() == 0) {
          cout << "Unable to calculate the mean - no data" << endl;
        } else {
          int total {};
          for (auto num: numbers) {
            total += num;
          }
          cout << "Mean: " << static_cast<double>(total)/numbers.size() << endl;
        }
        cout << "----------------" << endl;
        break;
      }
      case 's':
      case 'S':
      {
        int smallest {999999};
        for (auto num: numbers) {
          if (num < smallest) {
            smallest = num;
          }
        }
        cout << "Smallest number: " << smallest << endl;
        cout << "----------------" << endl;
        break;
      }
      case 'l':
      case 'L':
      {
        int largest {-999999};
        for (auto num: numbers) {
          if (num > largest) {
            largest = num;
          }
        }
        cout << "Largest number: " << largest << endl;
        cout << "----------------" << endl;
        break;
      }
      default:
        cout << "Wrong selection" << endl;
        cout << "----------------" << endl;
        break;
    }
  } while (selection != 'q' && selection != 'Q');
  cout << "Goodbye!";
  return 0;
}

