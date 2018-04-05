#include <stdio.h>
#include <stdlib.h>
/*
void inicio (char campo [V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa)
void borde(char campo [V][H])
void raqJug(char campo[V][H], int iniJug, int finJug)
void raqIa(campo [V][H], int iniIa, int finIa)
void pelota(campo [V][H], int pelX, int pelY)
*/

#define V 21
#define H 75

void borde(char campo[V][H]){
      for(int i=0; i<V; i++){
          for(int j=0; j<H; j++)
              if(i == 0 || i== V-1){
                  campo[i][j]='-';
              }
              else if(j == 0 || j ==
                      H-1){
                  campo [i][j] = '|';
              }
              else{
                  campo[i][j]=' ';
              }

      }


}


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
void inicio (char campo [V][H], int pelX, int pelY, int iniJug, int finJug, int iniIa, int finIa){
    borde(campo);
    raqjug(campo, iniJug, finJug);
    raqIa(campo, iniIa, finIa );
    pelota(campo,  pelX,  pelY);


}

    int main(){

    int pelX, pelY, iniJug, finJug, iniIa, finIa;
    char campo[V][H];

    pelX = 36;
    pelY = 10;

    iniJug = 8;
    finJug = 12;

    iniIa = 2;
    finIa = 18;

    inicio (campo, pelX, pelY, iniJug, finJug, iniIa, finIa);
    leerCamp(campo);

    return EXIT_SUCCESS;
}
