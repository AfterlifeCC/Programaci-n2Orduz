#include <stdio.h>

int main () {
  FILE * fptr;
  char cr[50];

  fptr = fopen("10-files00.txt","r");
   if(fgets(cr, 50, fptr)!=NULL) {
      puts(cr);
   }
fclose(fptr);
//al crear este archivo toma el texto del archivo 00.txt creado anteriormente y lo devuelve en la terminal
   return(0);
}
