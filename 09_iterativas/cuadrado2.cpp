#include <stdio.h>
#include <stdlib.h>

#define N 10
    int main(){
    for (int t=0; t<N; t++){
        for (int e=0; e<N; e++){
            if(N-1-t == e || t == 0 || t == N-1 || e == 0 || e == N-1 || t == e );}
            else{
                printf(" ");
            }
    }
    printf("\n");
    }

    return EXIT_SUCCESS;
}
