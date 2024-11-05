#include <iostream>
#include <string>

using namespace std;

class Player {
  private:
    string name;
    int health;
    int xp;
  public:
    Player();
    Player(string name);
    Player(string name, int health, int xp);
};

Player::Player()
  :name {"None"}, health {0}, xp{0} {
}
Player::Player(string new_name) 
  :name {new_name}, health {0}, xp{0} {
}
Player::Player(string new_name, int new_health, int new_xp) 
  :name {new_name}, health {new_health}, xp{new_xp} {
}

int main() {
  return 0;
}