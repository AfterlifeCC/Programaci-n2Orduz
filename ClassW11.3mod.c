// hacer lo mismo que en 07-files.c pero lograr que el segundo .txt copie todos los caracteres
//asignacion de formato %[^\n]%*c
#include<stdio.h>
int main(){

FILE * fptr1, *fptr2;
char c1, c2;


fptr1 = fopen("11-3ejemplo.txt","r");

 if(fptr1 == NULL)
   {
     printf("Error al abrir el archivo original");
}

fptr2 = fopen("11-3ejemplo2.txt","w");
fscanf(fptr1,"%c %c", &c1, &c2);
fprintf(fptr2, "%c %c",c1, c2);
fclose(fptr1);
fclose(fptr2);


return 0;
}
