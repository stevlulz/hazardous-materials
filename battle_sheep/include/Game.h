//
// Created by sidahmedlahmer on 3/26/19.
//

#ifndef HAZARDOUS_MATERIALS_GAME_H
#define HAZARDOUS_MATERIALS_GAME_H


#include "Team.h"
#include "Player.h"
class Team;
class Player;
//TODO check play method...if we make method for each action and call the right one out side..or doing it inside play function...
class Game {
private:
    enum TURN{TEAM1_PLAYER1,TEAM1_PLAYER2,TEAM2_PLAYER1,TEAM2_PLAYER2};
public:
    Game(const std::string&);
    void start();
    void play(Player* player,const std::string& msg);//TODO check if we
    Player* has(const std::string&);
    bool is_my_turn(Player*);
private:
    std::string m_game_id;
    Team* m_t1,*m_t2;
    TURN m_current_turn;



    void switch_turn();
    void on_game_state_changed();
};


#endif //HAZARDOUS_MATERIALS_GAME_H
