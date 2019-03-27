#include <stdio.h>
#include <stdlib.h>
#define n 10
int main () {
  FILE * fptr;
  char * cr;
  cr=(char*) malloc(n*sizeof(cr));

  fptr = fopen("10-files00.txt","r");
   if(fgets(cr,n*sizeof(cr), fptr)!=NULL) {
      puts(cr);
   }

fclose(fptr);
 //Hace lo mismo que en 10-files.01, pero esta vez utiliza malloc para liberar la memoria dinamica 
   return(0);
}
