#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

using namespace std;

class Account {
private:
  string name {"Accouut"};
  double balance {0.0};
public:
  void set_name(string n);
  string get_name();
  bool deposit(double bal); 
  bool withdraw(double bal);
};

#endif // _ACCOUNT_H_