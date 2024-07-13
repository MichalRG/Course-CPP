#include <iostream>
#include <vector>

using namespace std;

void display_menu_options();
char set_selection();
void display_selected(const vector <int>);
void add_number(vector<int> &numbers);
void display_mean(const vector <int>);
void display_smallest(const vector <int>);
void display_largest(const vector <int>);
void manage_selection(char selection, vector<int> &numbers);

void display_menu_options() {
  cout<< "P - Print numbers" << endl << "A - Add numbers" << endl << "M - Display mean of the numbers" << endl << "S - Display the smallest number" << endl << "L - Display the largest number" << endl << "Q - Quit" << endl;
}

void display_lack_of_data_message() {
  cout << "Unable to perform action - no data" << endl;
  cout << "----------------" << endl;
}

char set_selection() {
  char selection {};
  cout << "Enter your choice: ";
  cin >> selection;
  return selection;
}

void add_number(vector<int> &numbers) {
  int num_to_add {};
  cout << "Enter the number to add: ";
  cin >> num_to_add;
  numbers.push_back(num_to_add);
  cout << num_to_add << " added" << endl;
  cout << "----------------" << endl;
}

void display_selected (const vector <int> numbers) {
  cout << "Numbers: " << endl;
  for (auto num: numbers) {
    cout << num << " ";
  }
  cout << "----------------" << endl;
}

void display_mean(vector<int> numbers) {
  if (numbers.size() == 0) {
    display_lack_of_data_message();
  } else {
    int total {};
    for (auto num: numbers) {
      total += num;
    }
    cout << "Mean: " << static_cast<double>(total)/numbers.size() << endl;
  }
  cout << "----------------" << endl;
}

void display_smallest(const vector<int> numbers) {
  if (numbers.size() == 0) {
    display_lack_of_data_message();
    return;
  }

  int smallest = numbers.at(0);
  for (auto num: numbers) {
    if (num < smallest) {
      smallest = num;
    }
  }
  cout << "Smallest number: " << smallest << endl;
  cout << "----------------" << endl;
}

void display_largest(const vector<int> numbers) {
  if (numbers.size() == 0) {
    display_lack_of_data_message();
    return;
  }

  int largest = numbers.at(0);
  for (auto num: numbers) {
    if (num > largest) {
      largest = num;
    }
  }
  cout << "Largest number: " << largest << endl;
  cout << "----------------" << endl;
}

void manage_selection(char selection, vector<int> &numbers) {
  switch (selection) {
      case 'p':
      case 'P':
        display_selected(numbers);
        break;
      case 'a':
      case 'A':
        add_number(numbers);
        break;
      case 'm':
      case 'M':
        display_mean(numbers);
        break;
      case 's':
      case 'S':
        display_smallest(numbers);
        break;
      case 'l':
      case 'L':
        display_largest(numbers);
        break;
      default:
        cout << "Wrong selection" << endl;
        cout << "----------------" << endl;
        break;
    }
}

int main () {
  char selection {};
  vector <int> numbers;

  do {
    display_menu_options();
    selection = set_selection();

    manage_selection(selection, numbers);
  } while (selection != 'q' && selection != 'Q');
  cout << "Goodbye!";
  return 0;
}

