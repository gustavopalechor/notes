#include <stdio.h>
#include <stdlib.h>
int i=0;
    char imprime(char Frase[]){

          if(Frase='\0'){
            return '\n';
          }
          return Frase[i];
          i++;
          if(Frase!="\0"){
          imprime(Frase);
          }
    }

    int main(){

    char frase[]="dabale, arroz a la zorra el abad";
    char *letra = frase;
    imprime(frase);


    return EXIT_SUCCESS;
}
