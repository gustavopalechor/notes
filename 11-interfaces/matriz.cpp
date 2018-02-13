#include <stdio.h>
#include <stdlib.h>


//Leer la matriz
//  Leer cada fila
//    Leer cada columna
//    si estoy en la fila 1 voy contando el total de columnas
//    sino rellenar con 0 cuando hay menos  o descartar los demás
//Pasar a la fila siguiente cuando haya un intro. Y terminar si hay dos
    int main(){
        int filas = 0, columnas = 0; //Las totales de la matriz
        int columna = 0; //el número de columnas de esta fila
        int last_char ="\0";
        bool fin = false;
        double nuevo_num;
        double *matriz = NULL;

        do{

          scanf("%lf", &nuevo_num);
          columna++;
          columnas++;
          matriz =(double *) realloc(matriz, columna * sizeof(double)); //unrealloc de algo que no existe es un malloc
          miradita = getc(stdin);

          ungetc(miradita, stdin);
        }

    return EXIT_SUCCESS;
}
