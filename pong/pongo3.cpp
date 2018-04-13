#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#define V 21
#define H 75


void raqjug(char campo[V][H], int iniJug, int finJug){

    for(int i = iniJug; i <=finJug; i++){
        for(int j = 2; j <=3; j++){
            campo[i][j] ='x';
        }
    }

}

void raqIa(char campo[V][H], int iniIa, int finIa){

    for (int i = iniIa; i <= finIa; i++){
        for(int j =H-4; j <=H-3; j++ ){
            campo[i][j] = '*';

        }
    }

}
void pelota(char campo[V][H], int pelX, int pelY){
    campo [pelY][pelX] = 'O';
}

void leerCamp(char campo [V][H]){
    for(int i = 0; i<V; i++){
        for(int j = 0; j<H; j++){
            printf ("%c", campo[i][j]);
        }
        printf("\n");
    }

}

void draw (char campo[V][H]){
    system ("clear");
    leerCamp (campo);
}


void input (char campo [V][H], int *pelX, int *pelY, int *iniJug, int *finJug, int *iniIa, int *finIa, int *modX, int *modY, int *modIa, int *gol){
    int i;
    char option;
    char buf[128];
    //Verificacion
    if (*pelY == 1 || *pelY == V-2){
        *modY *= -1;
    }
     if (*pelX == 1 || *pelX == H-2){
        *gol = 1;
    }
    if(*pelX == 4 || *pelX == H-3){
        *modX *= -1;
    
   }

    if (*pelY == V-2){
        for(i = (*iniJug); i <= (*finJug); i++){
            if(i == (*pelY)){
                *modX *= -1;

            }
        }
    }
    if (*pelX == H-5){
        for(i = (*iniIa); i <= (*finJug); i++){
            if(i == (*pelX)){
                *modX *= -1;
            }
        }
    }
    

    if (*iniIa == 1 || *finIa == V-1){
        *modIa *= -1;
    }
    //Modificacion

    //pelota
    if (*gol == 0){
        *pelX += (*modX);
        *pelY += (*modY);

        //raquetaIa

        *iniIa += (*modIa);
        *finIa += (*modIa);
    }
    //raqueta jugador

    if ( 1 == 1 ){

        //option = getch(); //
        option = getch();
        if(option == 'a'){
            if(*iniJug != 1){
                *iniJug -= 1;
                *finJug -= 1;
            }
        }
        if(option == 's'){
            if(*finJug != V-2){
                *iniJug += 1;
                *finJug += 1;
            }
        }
    }
}

void update (char campo [V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa){
    raqjug(campo, iniJug, finJug);
    raqIa(campo, iniIa, finIa );
    pelota(campo,  pelX,  pelY);
}

void gameloop(char campo [V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa, int modX, int modY, int modIa){
    int gol;
    gol = 0;
    do{
        draw(campo); //Dibuja en pantalla
        input (campo, &pelX, &pelY, &iniJug, &finJug, &iniIa, &finIa, &modX, &modY, &modIa, &gol);         //Verificar y modificar las posiciones
        update (campo, pelX, pelY, iniJug, finJug, iniIa, finIa); //Actualizar la matriz campo
        usleep(100000); //con esto dormimos el proceso durante un tiempo para que no se ejecute demasiad        o rapido
    }while (gol == 0);



}
void cuadrado(char campo[V][H], int row, int col){
    char c;
    char v;
    c=95;
      for(int i=1; i<col; i++){
          move(0,i);
          printw("%c", c);
          move(row-1,i);
          printw("%c", c);
      }
    v=124;
      for(int i=1; i<row; i++){
          move(i,0);
          printw("|");
          move(i,col-1);
          printw("|");

      }

}
void inicio (char campo [V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa){
    raqjug(campo, iniJug, finJug);
    raqIa(campo, iniIa, finIa );
    pelota(campo,  pelX,  pelY);


}

int main(){
    int pelX, pelY, iniJug, finJug, iniIa, finIa; //variables posicion
    int modX, modY, modIa;
    int row, col;
    char campo[V][H];
    initscr();
    getmaxyx(stdscr, row, col);
    refresh();
    getch();
    cuadrado(campo, row, col);
    endwin();
    //posición
    pelX = 36;
    pelY = 10;

    iniJug = 8;
    finJug = 12;

    iniIa = 2;
    finIa = 18;

    //modificación

    modX = -1;
    modY = -1;

    modIa = -1;


    inicio (campo, pelX, pelY, iniJug, finJug, iniIa, finIa);
    //leerCamp(campo);
    gameloop (campo, pelX, pelY, iniJug, finJug, iniIa, finIa, modX, modY, modIa);

    return EXIT_SUCCESS;
}
