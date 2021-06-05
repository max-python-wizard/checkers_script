#include "../include/piece.h"
#include <iomanip>


Piece::Piece(Color color_, int location_) {
    color = color_;
    location = location_;
    add_history(location);
}

int Piece::move(int from, int to) {
    location = to;
    add_history(to);

    return 0;
}

char Piece::print_itself() {
    return 'p';
    cout << "printing piece";
};

int Piece::calculate_row(int square) {
    int row = square/4;
    return row;
}

int Piece::calculate_column(int square) {
    int column;
    int rem_8 = square%8;

    if (rem_8 <=3) {
        column = rem_8 * 2 + 1;
    }
    else {
        column = (rem_8-4) * 2;
    }
    return column;
}

void Piece::print_valid_moves() {

    for (int & valid_move : valid_moves)
        std::cout << ' ' << valid_move;
    std::cout << '\n';
}

int Piece::calculate_location(int row, int column) {
    int location;

    if (((row+column)%2)==0) {
        cout << " On that row column there is no space. wrong color." << endl;
        return -1;
    }

//    if ((row%2)==0) {
//        if ((location%2)==0) {
//            cout << " On that row column there is no space. wrong color." << endl;
//        }
//    }
//    else {
//        if ((location%2)==1) {
//            cout << " On that row column there is no space. wrong color." << endl;
//        }
//    }

    location = row*4;
    location += column/2;
    return location;
}

//void Piece::print_valid_moves(int size) {
//    //
////    clean_array(valid_moves);
//    return_valid_moves(valid_moves);
//
//
//
//    int i;
//    for (i=0; i<size; i++) {
//        if (valid_moves[i] != NULL) {
////            printf("%d ", valid_moves[i]);
//            cout << setw(4) << valid_moves[i]; // "%d ", valid_moves[i]);
//        }
//    }
//}