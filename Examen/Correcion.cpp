#include <stdio.h>
#include <stdlib.h>
//Algoritmia básica
struct Par minimo_mates(struct Alumno lista[N]){
    struct Par minimo = {1000., -1};

    for(int i=0; i<N; i++)
        if (minimo.nota > lista[i].asignaturas.matematicas){
            minimo.nota = lista[i].asignaturas.matematicas;
            minimo.id=i;
        }
    return minimo;
}
//recursividad
int fibonacci(int n){
    if(n == 0 | n ==1)
        return 1;
    return fibonacci(n-1)+ fibonacci(n-2);
}


    int main(){


    return EXIT_SUCCESS;
}
