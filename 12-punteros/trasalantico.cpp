#include <stdio.h>
#include <stdlib.h>

    int main(){

      char palindromo[] = "dabale arroz a la zorra a el abad";
      char *letra= palindromo;

      while( *letra !='\0'){
          printf(" %c", *letra);
          letra++;
      }

      while( letra >palindromo ){
             printf(" %c", *--letra);
             
      }

    return EXIT_SUCCESS;
}
