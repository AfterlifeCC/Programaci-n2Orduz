
#include<stdio.h>
int main(){

FILE * fptr1, *fptr2;
char c1, c2;

//Si no se crea el archivo 01.txt la terminal regresa "Error al abrir el archivo original", y si se crea el 01.txt la terminal no regresa
//nada, pero crea el archivo 02.txt en el que copia 2 caracteres.
fptr1 = fopen("07-files01.txt","r");

 if(fptr1 == NULL)
   {
     printf("Error al abrir el archivo original");
}

fptr2 = fopen("07-files02.txt","w");

 fscanf(fptr1,"%c %c", &c1, &c2);

 fprintf(fptr2, "%c %c",c1, c2);
fclose(fptr1);
fclose(fptr2);


return 0;
}
