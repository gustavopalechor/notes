#include <stdio.h>
#include <stdlib.h>

#define ROJO "\x1B[31m"
#define NORM "\x1B[39m"
  int main(){
      int entero = 34;
      float realillo = 34.7;
      double real = 35.7;               //Constante de tipo caracter
      unsigned char byte = 97;

      long int entero_largo = 93;
      unsigned positivo = 5;

    printf("%i  \t(%lu bytes)\n", entero, sizeof(int));
    printf("%li  \t(%lu bytes)\n", entero_largo, sizeof(int));
    printf("%u  \t(%lu bytes)\n", positivo, sizeof(int));
    printf("%i \t(%lu bytes)\n", byte, sizeof(char));
    printf("%f  \t(%lu bytes)\n", realillo, sizeof(float));
    printf("%8.2lf \t(%lu bytes)\n", real, sizeof(double)); // long float

    printf("%c%c%c\n", 49,50,10);
    printf("%c%c%c\n", '1', '2', '\n');   //constaten de tipo cadena de caracteres
    printf("\x1B[31m13\x1B[39m\n");

    printf(ROJO "12\n");
    printf(NORM "12\n");

    return EXIT_SUCCESS;
  }
