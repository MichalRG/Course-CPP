#include <iostream>

using namespace std;

class Player { 
private:
  string name {"Player"};
  int health {100};
  int xp {3};
public:
  void talk(string text_to_say) {
    cout << name << " says " << text_to_say << endl;
  };
  bool is_dead();
};

int main() {
  Player frank;
  // frank.name = "Frank"; // error: 'std::string Player::name' is private within this context
  // frank.health = 100; // error: 'int Player::health' is private within this context
  // frank.xp = 12; // error: 'int Player::xp' is private within this context
  frank.talk("Hi there");
  
  return 0;
}