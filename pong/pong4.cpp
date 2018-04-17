#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

struct Coordenada{
    double x;
    double y;
};

void Pintarcuadrado(int row, int col){
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
void Pintarjugador(int row, int col){
    for(int j=3; j<=4; j++){
        for(int i=14; i<=row-14; i++){
            
            mvprintw(i, j, "*");
        }
    }
}
void Pintarraqueta(int row, int col){
    for(int i=col-4; i<=col-3; i++){
        for(int j=3; j<=row-3; j++){
            
            mvprintw(j, i, "*");
        }
    }


}
void Pintarpelota(int row, int col){
    mvprintw(row/2, col/2, "O");
}

int main(){
    int col; int row;//coordenadas ventana
    

    initscr();
    getmaxyx(stdscr, row, col);
    refresh();
    Pintarcuadrado(row, col);
    Pintarjugador(row, col);
    Pintarraqueta(row, col);
    Pintarpelota(row,col);
    getch();
    endwin();

return 0;

}
