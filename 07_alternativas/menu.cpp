#include <stdio.h>
#include <stdlib.h>

/*
 ************************************************************************************
 | Haremos un programa que de unas opciones al usuario y que las saque por pantalla |
 ************************************************************************************
 */

#define CIR 1
#define CUA 2
#define TRI 3
#define PAR 4
#define ROM 5
#define EQI 6
#define ISO 7
#define REC 8
int main(){


    system("clear");

    system("toilet -fpagga MENU");
    unsigned opcion, opcion2;

    printf("Elige una opcion: "
            "\n"

            "1. Circulo.\n"
            "2. Cuadrado.\n"
            "3. Triangulo.\n"
            "4. Paralelogramo.\n"
            "5. Rombo.\n");
    scanf(" %u", &opcion);

    switch(opcion){
        case CIR:
            printf(" ⃝  \n");
            break;
        case CUA:
            printf(" ⃞  \n");
            break;
        case TRI:
            printf("Que clase de triangulo quieres: \n"
                    "6.equilatero.\n"
                    "7.isoceles.\n"
                    "8.rectangulo.\n"
                  );
            scanf("%u", &opcion2);
            switch(opcion2){
                case EQI:
                    printf ("    ⃤\n");
                    break;
                case ISO:
                    printf("⍙ \n");
                    break;
                case REC:
                    printf("⊿ \n");
                    break;
                default:
                    printf("del 6 al 7");
            }
            break;
        case PAR:
            printf("⏥ \n");
            break;
        case ROM:
            printf("  ⃟\n");
            break;
        default:
            printf("Del 1 al 5 \n");


    }


return EXIT_SUCCESS;
}
