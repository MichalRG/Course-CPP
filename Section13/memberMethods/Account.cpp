#include "Account.h"

using namespace std;

void Account::set_name(string n) {
  name = n;
}

string Account::get_name() {
  return name;
}

bool Account::deposit(double bal) {
  balance += bal;
  return true;
}

bool Account::withdraw(double bal) {
  if (balance - bal >= 0) {
    balance -= bal;
    return true;
  } else {
    return false;
  }
}