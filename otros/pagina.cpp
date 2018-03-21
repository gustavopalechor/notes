#include <stdio.h>
#include <stdlib.h>
#define N 40
#define T 90
bool es_cuadrado (int f, int c){
    return c == 0 | f == 0 ;

}

bool es_cuadra(int f, int c){
    return c == T-1;
}

bool es_cuad(int f, int c){
    return f == N-1;
}
int main(){
    for (int f=0; f<N; f++){
        for (int c=0; c<T; c++)
            if(es_cuadrado(f,c) | es_cuadra(f,c) | es_cuad(f,c)  )
                printf("*");

            else
                printf(" ");
        

        printf("\n");

    }
    printf("\n");
    return EXIT_SUCCESS;
}
