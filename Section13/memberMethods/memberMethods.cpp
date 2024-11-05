#include <iostream>
#include "Account.h"

using namespace std;

int main() {
  Account frank_account;
  frank_account.set_name("Frank's account");

  if(frank_account.deposit(1000.0))
    cout << "Deposit OK" << endl;
  else
    cout << "Deposit Not allowed" << endl;
  if(frank_account.withdraw(500.0))
    cout << "Withdrawal OK" << endl;
  else
    cout << "Not sufficient funs" <<endl;

  return 0;
}