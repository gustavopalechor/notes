#include <stdio.h>
#include <stdlib.h>

#define N 4
//un programa que pida al usuario 4 numeros los memorce calcule su media aritmetica y despues muestre en pantalla la media y los datos
int main(){
    int numeros[N];
    int calculo;
    int media;
    for(int i= 0; i<N; i++){
        printf("introduce un numero: \n");
        scanf(" %i", &numeros[i]);
        calculo += numeros[i];
    }
    for(int i=0; i<N; i++)
        printf("numeros introducidos: %i\n\n", numeros[i]);
    printf("la suma total es: %i\n", calculo);
    media = calculo / N;
    printf("la media aritmetica es: %i", media);
    return EXIT_SUCCESS;
}
