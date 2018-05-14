#include <stdio.h>
#include <stdlib.h>
#define N 0x100

typedef struct {
    int posicion;
    int velocidad;
    int aceleracion;
    double (*haz);
}Datos;

typedef struct{
    Datos data[N];
    int cima;
}Pila;
double haz(){
    int i = 0;
    char palabra[N];
    printf("Nombra a esta casilla: \n");
    scanf(" %c", &palabra[i]);
    i++;
}


void push(Datos op1, Pila *pila){
      pila->data[pila->cima] = op1;
      pila->cima++;
}

Datos pop(Pila *pila){
    return pila->data[--pila->cima];
}
    int main(){
    Datos Op;
    Pila rodrigo;

    Op.posicion = 1;
    Op.velocidad = 2;
    Op.aceleracion = 4;

    push(Op, &rodrigo);


    return EXIT_SUCCESS;
}
