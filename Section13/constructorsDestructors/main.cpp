#include <iostream>

using namespace std;

class Player {
  private:
    string name;
    int health;
    int xp;
  public:
    void set_name(string name_val) {
      name = name_val;
    }

    Player() {
      cout << "No args constructor called" << endl;
    }

    Player(string name) {
      cout << "String arg constructor called" << endl;
    }

    Player(string name, int helath, int xp) {
      cout << "Three args constructor called" << endl;
    }
    
    ~Player() {
      cout << "Destructor called for " << name << endl;
    }
};

class Account {
  private:
    string name;
    double balance;
  public:
    void set_balance(double bal) {
      balance = bal;
    }

    double get_balance() {
      return balance;
    }

    string get_name() {
      return name;
    }
};

int main () {
  {
    Player slayer;
    slayer.set_name("Slayer");
  }

  {
    Player frank;
    frank.set_name("Frank");
    Player hero("Hero");
    hero.set_name("Hero");
    Player villain("Villain", 100, 12);
    villain.set_name("Villain");
  }

  Player *enemy = new Player;
  enemy->set_name("Enemy");
  Player *level_boss = new Player("Level Boss", 1000, 300);
  level_boss->set_name("Level Boss");

  delete enemy;
  delete level_boss;

  Account frank_acc;
  frank_acc.set_balance(500.0);
  cout << frank_acc.get_name() << " " << frank_acc.get_balance() << endl;
  return 0;
}