#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(string name_val, int health_val, int xp_val)
  :name {name_val}, health {health_val}, xp {xp_val} {
    num_players++;
    cout << "Three args constructor called" << endl;
}

Player::Player(const Player &source): Player {source.name, source.health, source.xp} {
  cout << "Copy constructor - made copy of: " << source.name << endl;
}

Player::~Player() {
  num_players--;
  cout << "Destructor called for " << name << endl;
}

int Player::num_players {0};

int Player::get_num_players() {
  return num_players;
}