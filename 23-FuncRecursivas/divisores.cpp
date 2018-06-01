#include <stdio.h>
#include <stdlib.h>
#define N 20
    int main(){
    int numero = 8;
    int j=0;
    int divisores[N];
    for(int i = 2; i <8; i++){
        if(numero % i == 0){
          divisores[j] = i;
        j++;
        }
    }
    for(int i=0; i<j; i++)
      printf(" %i", divisores[j]);

  

    return EXIT_SUCCESS;
}
