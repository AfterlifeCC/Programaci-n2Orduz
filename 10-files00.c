#include<stdio.h>

int main(){
  FILE * fptr;

  char cad[160] = "Bienvenidos al curso de programacion estudiantes de MAC";

  fptr = fopen("10-files00.txt","w");
  fputs(cad, fptr);
//no devuelve nada en la terminal pero crea el archivo 00.txt con el texto escrito aqui 
// si creo el 01.c me imprime lo que contiene el archivo de texto pero en la terminal.

fclose(fptr);
  return 0;
}
