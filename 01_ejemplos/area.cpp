#include <stdio.h>
#include <stdlib.h>

    int main(){

      int lado, area, perimetro;

       system("toilet --gay -fpagga CUADRADO");
        /*entrada de datos */
       printf("Lado: ");
       scanf(" %i", &lado);
      /*calculos*/
       area = lado * lado;
       perimetro = 4 * lado;
    /* salida de datos*/
      printf("Area: %i\n"
             "Perimetro: %i\n",
             area, perimetro);
    return EXIT_SUCCESS;
}
