#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#define M 0x40
#define N 0x10

#define CAR_LLENO "▒"
#define CAR_VACIO " "

#define SON_VALIDAS(f,c) (((f)>=0 && (f)<M) && ((c)>=0 && (c)<N));
void pintar(int matriz[M][N]){
    for (int fila=0; fila<N; fila++){
        for(int col=0; col<N; col++)
            printf("%s", matriz[fila][col]? CAR_LLENO : CAR_VACIO);
        printf("\n");

    }
}
void dame_coord(int *x, int *y){
  printf("usa unas coordenadas invalidas para terminar.\n");
  printf("\n\n\tNuevo x,y ");
  scanf(" %i, %i", x, y);
}

void poblacion_inicial(int matriz[M][N]){
      int x, y;


      do{
        system("clear");

        printf("usa unas coordenadas invalidas para terminar.\n");
        pintar(matriz);
        printf("\n\tNuevo x,y: ");
        scanf(" %i, %i", &x, &y);
        (*x--), (*y--);

        if (SON_VALIDAS(x,y))
        matriz[x][y] = 1;

        //todo: validar los caracteres antes de meterlos

        }while(es_valido(x,y));
    int main(){

        int actual[M][N],
            futuro[M][N];
      bzero(actual, sizeof(actual));
      poblacion_inicial(actual);
    
      while(1){
      //calcular(futuro,actual);
      //convertir el futuro en actual
      pintar(actual);
      }
    return EXIT_SUCCESS;
}
