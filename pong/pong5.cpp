#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#define N 20
#define I 30
#define X 2
struct Coordenada{
    int x;
    int y;
};

void PintarCuadrado(int row, int col){
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
void PintarRaqueta(struct Coordenada Raqueta[I], int col, int row){
    for(int j=2; j<=row-2; j++){
       Raqueta[j].x= col-4;
       Raqueta[j].y= j;
       mvprintw(Raqueta[j].y, Raqueta[j].x, "*");
       Raqueta[j].x= col-3;
       Raqueta[j].y= j;
       mvprintw(Raqueta[j].y, Raqueta[j].x, "*");
    }
}
void PintarJugador(struct Coordenada Jugador[N], int row){
    for(int i=14; i<=row-14; i++){
        Jugador[0].x;
        Jugador[0].y;
        mvprintw(Jugador[0].y, Jugador[0].x, "*");
        Jugador[1].x;
        Jugador[6].y;
        mvprintw(Jugador[i].y, Jugador[i].x, "*");
        Jugador[0++].y;
    }


}
void PintarPelota(struct Coordenada Pelota[X],int row, int col){
    Pelota[0].x= col/2;
    Pelota[0].y=row/2;
    mvprintw(Pelota[0].x, Pelota[0].y, "O");
}

/*void input(struct Coordenada Jugador[I], struct Coordenada Raqueta[I], int *modX, int *modY, int *modIa){

    if()


}
void Modificar(struct Coordenada Jugador[I], struct Coordenada Raqueta[I], int col, int row, int modX, int modY, int modIa){
    input(Jugador, Raqueta, &modX, &modY, &modIa);



}*/
void Pintar(struct Coordenada Jugador[I], struct Coordenada Raqueta[I], struct Coordenada Pelota[X], int col, int row){
    PintarCuadrado(row,col);
    PintarRaqueta(Raqueta, col, row);
    PintarJugador(Jugador, row);
    PintarPelota(Pelota, row, col);
}

int main(){
    struct Coordenada Jugador[N];
    struct Coordenada Raqueta[I];
    struct Coordenada Pelota[X];
    int col; int row;//coordenadas ventana
    int modX= -1;
    int modY= -1;
    int modIa= -1;
    Jugador[0].x=3;
    Jugador[1].x=4;
    Jugador[0].y=14;
    Jugador[N].y=row-14;
    initscr();
    getmaxyx(stdscr, row, col);
    
    Pintar(Jugador, Raqueta, Pelota, col, row);
    refresh();
    //Modificar(Jugador, Raqueta, col, row, modX, modY, modIa);
    getch();
    endwin();

return 0;

}
