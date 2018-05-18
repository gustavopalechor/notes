#include <stdio.h>
#include <stdlib.h>

    int main(){

    int num = 0x1234;

    FILE *pf= fopen("b.int", "r");
    fread(&num, sizeof(int), 1, pf);

    fclose(pf);

    printf("He leido: %i (%Xh)\n", num, num);
    return EXIT_SUCCESS;
}
