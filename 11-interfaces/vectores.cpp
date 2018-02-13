#include <stdio.h>
#include <stdlib.h>

    int main(){
    int filas = 0;
    double numero;
    bool fin = false;
    double *vector = NULL;
    
    printf("vector:\n\n");

    do{
      scanf(" %lf", &numero);

      if(filas == 0)
          filas++;
        vector = (double *) realloc(vector, (filas+1) * sizeof(double));
        *(vector+filas)= numero;

    } while(!fin);

    for (int f = 0; f<filas; f++){
    printf("%6.2lf", *(vector+f*filas));
    printf("\n");
    }

    return EXIT_SUCCESS;
}
