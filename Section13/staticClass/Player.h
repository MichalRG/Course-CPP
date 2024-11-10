#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>

using namespace std;

class Player {
  private:
    string name;
    int health;
    int xp;
    static int num_players;
  public:
    string get_name() const {return name;}
    void set_name(string name_val) {name = name_val;}
    
    
    Player(const Player &source);
    Player(string name_val, int health_val, int xp_val);
    ~Player();
    static int get_num_players();
};

#endif // _PLAYER_H_