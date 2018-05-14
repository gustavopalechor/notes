#include <stdio.h>
#include <stdlib.h>
#define N 0x100

typedef struct{
    int cima;
    int data[N];
}Pila;

void push(int dato, Pila *cual_pila){
    cual_pila->data[cual_pila->cima] = dato;
    printf(" --> %5i\n", cual_pila->data[cual_pila->cima]);
    cual_pila->cima++;
}
int pop(Pila *cual_pila){
    cual_pila->cima--;
    printf("<-- %5i\n", cual_pila->data[cual_pila->cima]);
    return cual_pila->data[cual_pila->cima];
}

    int main(){
    Pila datonuevo;
    datonuevo.cima=0;

    push(5, &datonuevo);
    push(7, &datonuevo);
    push(8, &datonuevo);
    push(-16, &datonuevo);
    pop(&datonuevo);
    pop(&datonuevo);
    return EXIT_SUCCESS;
}
