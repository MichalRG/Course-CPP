#include <iostream>

using namespace std;

int main () {
  int base_cents {};
  int cents {};
  cout << "Enter amount of cents: ";
  cin >> base_cents;
  cents = base_cents;

  const int dolar = 100;
  const int quarter = 25;
  const int dime = 10;
  const int nickel = 5;
  const int penny = 1;

  /**
   * First solution
  */

  int amount_of_dolars = base_cents / dolar;
  cents -= dolar * amount_of_dolars;
  int amount_of_quarter = cents / quarter;
  cents -= quarter * amount_of_quarter;
  int amount_of_dime = cents / dime;
  cents -= dime * amount_of_dime;
  int amount_of_nickel = cents / nickel;
  cents -= nickel * amount_of_nickel;
  int amount_of_penny = cents / penny;
  
  cout << "\nYou have " << amount_of_dolars << "$, " << amount_of_quarter << " quarters, "<< 
  amount_of_dime << " dimes, "<<amount_of_nickel << " nickels, " <<amount_of_penny << " pennies." <<endl;


}