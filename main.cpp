//
// Created by Kyle on 7/3/21.
//

//#include "stdafx.h"
#include <iostream>
//#include "conio.h"
#include <math.h>
#include <string>
#include <ncurses.h>

const int x = 10;
const int y = 10;
const int hcode = 206;

using namespace std;

struct hero {
    char code;

    int posx;
    int posy;
    int lifes;
};

void init(char world[][y], struct hero &link){
    int i, j;

    link.code = hcode;

    link.posy = 5;
    link.posx = 10;
    link.lifes = 3;

    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            world[i][j] = ' ';
        }
    }
    world[link.posx][link.posy] = link.code;
}

void paint(char world[][y]){
    int i,j;

    cout << endl << endl;

    for (int i = 0; i < x; ++i) {

        cout << "\t";

        for (int j = 0; j < y; ++j) {
            cout << world[i][j] << "";
        }

        cout << endl;
    }

    cout << endl << endl;
    cout << "\t";
    cout << "SPACE INVADERS";
}


int main(){

    char world[x][y];
    struct hero link;

    init(world, link);
    paint(world);

    return 0;
}
