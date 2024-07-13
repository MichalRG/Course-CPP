#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>


using namespace std;

const double PI {3.14159};
double display_area_circle(double radius) {
  cout << "The area of a circle with radius " << radius << " is " << PI * pow(radius, 2) << endl;
  return PI * pow(radius, 2);
}

double display_volume_cylinder(double radius, double height) {
  cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << PI * pow(radius, 2) * height << endl;
  return PI * pow(radius, 2) * height;
}

int main() {
  cout << "Enter a number: ";
  double number;
  cin >> number;

  cout <<"The sqrt of " << number<< " is " << sqrt(number) << endl;
  cout <<"The cbrt of " << number<< " is " << cbrt(number) << endl;
  cout <<"The sin of " << number<< " is " << sin(number) << endl;
  cout <<"The cos of " << number<< " is " << cos(number) << endl;
  cout <<"The ceil of " << number<< " is " << ceil(number) << endl;
  cout <<"The floor of " << number<< " is " << floor(number) << endl;
  cout <<"The round of "<< number << " is " << round(number) << endl;

  int random_number {};
  size_t count {10};
  int min {1};
  int max {6};
  cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
  srand(time(nullptr)); // seed the random number generator

  for(size_t i {0}; i<count; i++) {
    random_number = rand() % max + min;
    cout << random_number << endl;
  }

  display_area_circle(5.0);
  display_volume_cylinder(5.0, 10.0);
  return 0;
}