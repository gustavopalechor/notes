#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

void cuadrado(int row, int col){
    for(int i=1; i<col; i++){
        move(0, i);
        printw("-");
        move(row-1, i);
        printw("-");
    }
    for(int i=0; i<row; i++){
        move(i, 0);

        printw("|");
        move(i, col-1);
        printw("|");
    }
}
void jugador(int row, int col, int iniJug, int finJug){
    for(int i=3; i<4; i++){
        for(int j=3; i<row-3; i++){
            move(i, j);
            printw("*");
            
        }
    


    }
}
int main(){
    int col; int row;//coordenadas ventana
    int iniJug, finJug;

    iniJug=8;
    finJug=12;
    initscr();
    getmaxyx(stdscr, row, col);
    refresh();
    cuadrado(row, col);
    jugador(row, col,  iniJug,finJug);
    getch();
    endwin();

return 0;
    
}
