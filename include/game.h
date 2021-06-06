#ifndef CHECKERS_CONSOLE_GAME_H
#define CHECKERS_CONSOLE_GAME_H
#include "other.h"
#include "../include/board.h"
#include <fstream>

class Game {
    Color turn = black;
    int game_ended = 0;
    Color winner;
    Board *game_board;

public:

    Game();

    int ask_player();

    int start_normal_game();
    int check_game_ended();

//    int load_game(string filename);
//    int save_game(string filename);
    int load_game();
    int save_game();
};

#endif //CHECKERS_CONSOLE_GAME_H