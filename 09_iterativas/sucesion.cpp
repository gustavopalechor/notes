#include <stdio.h>
#include <stdlib.h>

#define N 25

    int main(){
    float contador[N];
    contador[0] = 1;
    contador[1] = 1;
    float sumar;

    for( int i=0; i<N; i++)
      sumar = contador + contador+1;
      printf("%2.f\n", sumar);
  
    return EXIT_SUCCESS;
}
