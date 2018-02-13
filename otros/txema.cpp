#include <stdio.h>
#include <stdlib.h>

int main(){
  int l = 10;

 for(int f=0; f<l; f++){
     for(int c=0; c<l-f; c++) 
         printf("*");
      printf("\n");
  }

    return EXIT_SUCCESS;

}
