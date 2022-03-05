#include "play_game.h"

#include <iostream>
#include <string>
#include <vector>
using std::vector;
using namespace std;

int play_game(){

    string human_nation;
    human_nation = nation_selection();

    cout << "Game starts. Your nation is: " << human_nation << endl;

    bool game_ended =false;



    while(!game_ended){
        turn();
    };



    return 0;
}
