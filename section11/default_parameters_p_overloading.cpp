#include <iostream>
#include <string>
#include <vector>

using namespace std;
 
double calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);

void greeting(string name, string prefix = "Mr.", string suffix = "");

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print_array(const int arr[], size_t size); //if u pass array u have to also pass information about size
void set_array(int arr[], size_t size, int value);

void print(int num) {
  cout << "Printing int: " << num << endl;
}

void print(double num) {
  cout << "Printing double: " << num << endl;
}

void print(string value) {
  cout << "Printing string: " << value << endl;
}

void print(string val1, string val2) {
  cout << "Printing 2 strings: " << val1 << " and " << val2 << endl;
}

void print(vector<string> v) {
  cout << "Printing vector of strings: ";
  for (auto s : v)
    cout << s + " ";
  cout << endl;
}

double calc_cost(double base_cost, double tax_rate, double shipping) {
  return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix) {
  cout << "Hello " << prefix + " " + name +  " " + suffix << endl;
}

void print_array(const int array[], size_t amount) { // const prevent random bug with changing value of index in array
  for (int i =0; i<amount; i++) {
    cout <<array[i] << " ";
  }
  cout << endl;
}

void set_array(int arr[], size_t size, int value) {
  for (size_t i {0}; i< size; ++i) {
    arr[i]=value;
  }
}

int main() {
  double cost {0};
  cost = calc_cost(100.0, 0.08, 4.25);
  cout << "Cost is " << cost;
  cost = calc_cost(100.0, 0.08);
  cout << "\nCost is " << cost;
  cost = calc_cost(200.0);
  cout << "\nCost is " << cost;
  cost = calc_cost();
  cout << "\nCost is " << cost;

  cout << endl;

  greeting("Glenn Jones", "Dr.", "M.D.");
  greeting("James Rogers", "Professor", "Ph.D.");
  greeting("Frank Miller", "Dr.");
  greeting("Michal");

  cout << endl;

  print(100); // int
  print('A'); // char is always promoted to int
  print(123.5);
  print(123.3F); // float is promoted to double
  print("C-style string"); // c-style string is promoted to a C++ string
  string s {"C++ string"}; // C++ string
  print(s);
  print("C-style string", s); // First argument is promoted to a C++ string
  vector<string> stooges {"Larry", "Moe", "Curly"};
  print(stooges);

  int my_scores[] {100,98,90,86,84};
  print_array(my_scores,5);
  set_array(my_scores,5,100);
  print_array(my_scores,5);
  cout<<endl;
 
  return 0;
}