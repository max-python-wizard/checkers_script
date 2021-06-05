#ifndef CHECKERS_CONSOLE_PIECE_H
#define CHECKERS_CONSOLE_PIECE_H

#include <iostream>
#include <vector>
#include "other.h"
using namespace std;

class Piece {
protected:
    int location;
    int loc_row;
    int loc_col;
    int history[30];
    Color color;

    std::vector<int> valid_moves;

    int add_history(int location_) {
        int i = 0;
        while (history[i] != '\0') {
            history[i] = location_;
        }
    }



public:
    int move(int from, int to);
    Piece(Color color_, int location_);
    virtual char print_itself();
    void print_valid_moves();

    // move to protected later
    virtual int * return_valid_moves(int *moves_array) {};
    virtual int generate_valid_moves() {};
    virtual vector<int> generate_moves_proposal() {};

//    int Man::generate_valid_moves
    int calculate_row(int square);
    int calculate_column(int square);
    int calculate_location(int row, int column);

};


#endif //CHECKERS_CONSOLE_PIECE_H