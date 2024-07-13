#include <iostream>
#include <vector>
#include <string> 

using namespace std;

const double PI {3.14159};

// function prototypes  
double calc_area_circle(double);
double calc_volume_cylinder(double radius, double height);
void area_circle();
void volume_cylinder();

void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);

int main() {
  char selection {};
  do {
    cout << "-----------------" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Volume of a Cylinder" << endl;
    cout << "3. Quit" << endl;
    cout << "Enter your selection: ";
    cin >> selection;

    switch(selection) {
      case '1':
        area_circle();
        break;
      case '2':
        volume_cylinder();
        break;
      case '3':
        cout << "Goodbye!" << endl;
        break;
      default:
        cout << "Unknown selection, please try again" << endl;
    }
  } while (selection != '3');

  int num {10};
  pass_by_value1(num);
  cout << num << endl;
  string s {"Hello"};
  pass_by_value2(s);
  cout << s << endl;
  vector<string> stooges {"Larry", "Moe", "Curly"};
  pass_by_value3(stooges);
  print_vector(stooges);
  return 0;
}

double calc_area_circle(double radius) {
  return PI * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
  return calc_area_circle(radius) * height;
}

void area_circle() {
  double radius;
  cout << "Enter the radius of the circle: ";
  cin >> radius;
  cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
  double radius;
  double height;
  cout << "Enter the radius of the cylinder: ";
  cin >> radius;
  cout << "Enter the height of the cylinder: ";
  cin >> height;
  cout << "The volume of cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

void pass_by_value1(int num) {
  num = 1000;
}

void pass_by_value2(string s) {
  s = "Changed";
}

void pass_by_value3(vector<string> v) {
  v.clear();
}

void print_vector(vector<string> v) {
  for(auto s:v)
    cout << s << " ";
  cout << endl;
}
