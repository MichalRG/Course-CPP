#include <iostream>
#include <vector>

using namespace std;

class Player {
public:
   string name {"Player"};
   int health {100};
   int xp {3};

   void talk(string text_to_say) {
    cout << name << " says " << text_to_say << endl;
   };

   bool is_dead();
};

class Account {
public:
  string name {"Accouut"};
  double balance {0.0};

  void deposit(double bal) {balance += bal; cout<< "In deposit" << endl;};
  void withdraw(double bal) {balance -= bal; cout<< "In withdraw" << endl;};
};

int main() {
  Account frank_account;
  frank_account.name="Frank's account";
  frank_account.balance = 5000.0;
  frank_account.deposit(1000.0);
  frank_account.withdraw(500.0);
  Account jim_account;

  Player frank;
  frank.name = "Frank";
  frank.health = 100; 
  frank.xp = 12;
  frank.talk("Hi there");

  Player hero;

  Player players[] {frank, hero};
  
  vector<Player> player_vec {frank};
  player_vec.push_back(hero);

  Player *enemy {nullptr};
  enemy = new Player;

  (*enemy).name = "Enemy";
  enemy->health = 100;
  enemy->xp = 15;
  enemy->talk("I will destroy you!");

  delete enemy;
  return 0;

}