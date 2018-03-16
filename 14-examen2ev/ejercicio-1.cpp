#include <stdio.h>
#include <stdlib.h>
#define N 3
    int main(){
    double a[N] = {1, 2, 3},
           b[N] = {4, 5, 6};
    double suma = 0;

    for(int i=0; i<N; i++)

        suma += a[i] * b[i];

    printf(" %.2lf", suma);

    return EXIT_SUCCESS;
}
