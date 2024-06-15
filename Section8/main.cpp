#include <iostream>

using namespace std;

int main() {
  int num1 {10};
  int num2 {20};
  cout << "Num 1: "<< num1<<endl;
  cout << "Num 2: "<< num2<<endl;

  num1 = 100;
  cout << "Num 1 updated: "<< num1<<endl;

  num1=1;
  num2=2;
  cout << num1 << "/" << num2 << "=" <<num1/num2<<endl; //it returns 0 because we works with int so double precision doesnt exist
  cout << num1 << "%" << num2 << "=" <<num1%num2<<endl; 

  cout<< "------------------------------------"<<endl;
  /***
   * CONVERTER EUROS TO DOLARS
  ****/
  const double usd_per_eur {1.19};
  double euros = {0.0};
  double dolars = {0.0};

  cout << "Welcome to the EUR to USD converter" << endl;
  cout << "Enter the value in Euros: ";
  cin >> euros;

  dolars = euros* usd_per_eur;

  cout << "Euros:" << euros <<" is equivalent to "<< dolars << " dolars"<<endl;

  cout << "-------------------------------------" <<endl;
  /**************
  *
  ******/
  int result {0};
  int counter {10};
  
  result = ++counter; // Pre-increment ++counter <=> counter = counter + 1; so it will change the value of counter and then assign;
  cout << "PRE-res: " << result<<endl;
  cout << "counter: " << counter<<endl;

  result = counter++; // post-increment - it will increment counter after assigining
  cout << "POST-res: " << result<<endl;
  cout << "counter: " << counter<<endl;

  result = counter++ + 10; // post-increment! - so it will make counter+10 assign and then it will increment value of counter;
  cout << "POST-res-complex: " << result<<endl;
  cout << "counter: " << counter<<endl;

  /*****************
   * MIXING Opeartors
  */
  int total {};
  int num3 {}, num5 {}, num4 {};
  const int count {3};

  cout << "Enter 3 integers separated by spaces: ";
  cin >> num3 >> num4 >> num5;
  
  total = num3 + num4+ num5;
  
  double average {0.0};
  average = static_cast<double>(total)/count; // when compilar will see double + int he will try to parse int to double to match type and return value will be double
  // average = (double)total/count; //old-way of casting it doesnt check is it possible to cast

  cout << "The 3 numbers were: " <<num3 << ", " <<num4 << ", " <<num5 << endl;
  cout << "Sum: " <<total<<endl;
  cout << "Avg: "<< average<<endl; 

  /*****
   * 
  */

  bool equal_result {false};
  bool not_equal_result {false};
  int num6{}, num7 {};

  cout <<"Equal res:"<< equal_result<<endl;
  cout <<"Equal res:"<< not_equal_result<<endl;
  cout<< boolalpha; // it force to display false/true instead of 0/1 
  cout <<"num6==num7: "<< (num6==num7) << endl;

  // double dnum1 {12} dnum2 {11.9999999999999999999999999999999999999999999999};
  // cout<<"dnum1 == dnum2: " << (dnum1==dnum2) <<endl; // if we would assing to dnum2 by user big double precision of double is to small so it marks dnum2 as 12 and it will return true;



  return 0;
}