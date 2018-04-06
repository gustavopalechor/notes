#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define h 75
#define v 21

void inicio(char campo[v][h], int pelx, int pely, int inijug, int finjug, int iniia, int finia);
void borde (char campo[v][h]);
void raqjug (char campo[v][h], int inijug, int finjug);
void raqia (char campo[v][h], int iniia, int finia);
void pel (char campo[v][h], int pelx, int pely);
void leerCamp(char campo[v][h]);
void gameloop (char campo[v][h], int pelx, int pely, int inijug, int finjug, int iniia, int finia, int modx, int mody, int modia);
void draw(char campo[v][h], int pely, int mody);
void imput(char campo[v][h], int *pelx, int *pely, int *inijug, int *finjug, int *iniia, int *finia, int *modx, int *mody, int *modia, int *gol);
void update(char campo[v][h], int pelx, int pely, int inijug, int finjug, int iniia, int finia);


int main(){

 int pelx, pely, inijug, finjug, iniia, finia; // variables de posicion
 int modx, mody, modia; // variables de modificacion
 char campo [v][h];

 //posicion
 pelx = 37; pely = 10; //pelota
 inijug = 6; finjug = 12; //jugador
 iniia = 5; finia = 19; //maquina

 //modificacion

 modx = -1;
 mody = -1;
 modia = -1;

 inicio(campo, pelx, pely, inijug, finjug, iniia, finia);
 gameloop (campo, pelx, pely, inijug, finjug, iniia, finia, modx, mody, modia);
 system ("pause");
 return 0;
}

void inicio(char campo[v][h], int pelx, int pely, int inijug, int finjug, int iniia, int finia){

 borde (campo);
 raqjug (campo, inijug, finjug);
 raqia (campo, iniia, finia);
 pel (campo, pelx, pely);
}

void borde (char campo[v][h]){

 for (int i = 0; i < v; i++){

  for (int j = 0; j < h; j++){

   if (i == 0 || i == v-1 ){

    campo [i][j] = '_';
   }
   else if (j == 0 || j == h-1 ){

    campo [i][j] = '|';
   }
   else{

    campo [i][j] = ' ';
   }
  }
 }
}

void raqjug (char campo[v][h], int inijug, int finjug){

 for (int i = inijug; i < finjug; i++){

  for (int j = 2; j <= 3; j++){

   campo [i][j] = 'X';
  }
 }
}

void raqia (char campo[v][h], int iniia, int finia){

 for (int i = iniia; i < finia; i++){

  for (int j = h-4; j <= h-3; j++){

   campo [i][j] = 'X';
  }
 }
}

void pel (char campo[v][h], int pelx, int pely){

 campo [pely][pelx] = 'O';
}

void leerCamp(char campo[v][h]){

 for (int i = 0; i < v; i++){

  for (int j = 0; j < h; j++){
   printf ("%c", campo[i][j]);
  }
  printf ("\n");
 }
}

void gameloop (char campo[v][h], int pelx, int pely, int inijug, int finjug, int iniia, int finia, int modx, int mody, int modia){

 int gol;
 gol = 0;
 do{

  draw(campo, pely, mody);  //dibujar
  imput(campo, &pelx, &pely, &inijug, &finjug, &iniia, &finia, &modx, &mody, &modia, &gol); //verificar y modificar las posiciones
  update(campo, pelx, pely, inijug, finjug, iniia, finia); //actualizar la matriz
  Sleep (5);
 } while(gol == 0);
}

void draw(char campo[v][h], int pely, int mody){

 system ("cls");
 leerCamp(campo);
}

void imput(char campo[v][h], int *pelx, int *pely, int *inijug, int *finjug, int *iniia, int *finia, int *modx, int *mody, int *modia, int *gol){

 char key;
 //verificacion
 if (*pely == 1 || *pely == v-2){

  *mody *= -1;
 }

 if (*pelx == 1 || *pelx == h-2){

  *gol = 1;
 }

 if (*pelx == 4){

  for (int i = *inijug; i <= *finjug; i++){

   if (i == (*pely)){

    *modx *= -1;
   }
  }
 }

 if (*pelx == h-5){

  for (int i = *iniia; i <= *finia; i++){

   if (i == (*pely)){

    *modx *= -1;
   }
  }
 }

 if (*iniia == 1 || *finia == v-1){

  *modia *= -1;
 }

 //modificacion
 if (*gol == 0){

  //pelota
  *pelx += (*modx);
  *pely += (*mody);

  //raqueta del ia
  *iniia += (*modia);
  *finia += (*modia);

  //raqueta del jugador

  if (kbhit() == 1){

   key = getch(); //es igual que scanf pero sin pulsar intro

   if (key == 'w'){

    if (*inijug != 1){

     *inijug -= 1;
     *finjug -= 1;
    }
   }

   if (key == 's'){

    if (*finjug != v-1){

     *inijug += 1;
     *finjug += 1;
    }
   }
  }
 }

}

void update(char campo[v][h], int pelx, int pely, int inijug, int finjug, int iniia, int finia){

 borde (campo);
 raqjug (campo, inijug, finjug);
 raqia (campo, iniia, finia);
 pel (campo, pelx, pely);
}﻿
