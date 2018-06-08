#include <stdio.h>
#include <stdlib.h>
#define N 0x100

typedef struct{
    int data[N];
    int cima;
}Pila;

void push(Pila *pilila, int dato){
    pilila->data[pilila->cima]=dato;
    pilila->cima++;
}

int pop(Pila *pilila){
    pilila->cima--;
    printf(" %i", pilila->data[pilila->cima]);
    return pilila->data[pilila->cima];
}
    int main(){

      Pila pila;
      pila.cima = 0;   
      push(&pila, 5);
      pop(&pila);



    return EXIT_SUCCESS;
}
