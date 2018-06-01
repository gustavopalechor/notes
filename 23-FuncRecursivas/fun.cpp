#include <stdio.h>
#include <stdlib.h>

void imprime(const char * letra){
    printf("%c", *letra);

    if(*letra!='\0')
        imprime(letra+1);
}

    int main(){
    const char * const frase = "dabale arroz a la zorra";
    const char * letra = frase;

    imprime(letra3);
    printf("\n");
    return EXIT_SUCCESS;
}
