#include <iostream>
#include <string>

using namespace std;

class Player {
  private:
    string name;
    int health;
    int xp;
  public:
    string get_name() {return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}
    Player(string name_val="None", int health_val=0, int xp_val = 0);

    // Copy COnstructor
    Player(const Player &source);
    // Destructor
    ~Player() {cout << "Destructor called for " << name << endl;}
};

Player::Player(string name_val, int healt_val, int xp_val): name{name_val}, health{healt_val}, xp{xp_val} {
  cout << "Three args constructor called" << endl;
}

// Copy constructor - it's also default behaviour so no need to write
Player::Player(const Player &source)
//: name(source.name), health(source.health), xp(source.xp) {
// below alternative approach which is better we run it via delegating constructor 
: Player {source.name, source.health, source.xp} {
  cout << "Copy constructor - made copy of: " << source.name << endl;
}

void display_player(Player p) {
  cout << "Name: " << p.get_name() << endl;
  cout << "Health: " << p.get_health() << endl;
  cout << "XP: "<< p.get_xp() << endl;
}

int main() {

  Player empty {"XXXX", 100, 50};
  Player my_new_object {empty}; // should call copy constructor

  display_player(empty);

  Player frank {"Frank"};
  Player hero {"Hero", 100};
  Player villain {"Villain", 100, 55};

  return 0;
}