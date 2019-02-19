#include<stdio.h>
#include<string.h>
#define n 5

// Declaracion de un arreglo de estructuras 
// de 100 elementos denominado libros
struct Todos_Libros
{
char titulo[30];
char autor[30];
char editorial[30];
int anio;
};


// Funcion principal
int main()
{

int i;
// Declaracion de una variable de estructura
struct Todos_Libros libros[n];

// Inicializacion (Definicion) de los miembros

strcpy(libros[0].titulo,"Programacion I");
strcpy(libros[0].autor,"Orduz, J.");
strcpy(libros[0].editorial,"Patito-Hill");
libros[0].anio = 2018;

strcpy(libros[1].titulo,"Programacion II");
strcpy(libros[1].autor,"Ducuara, A.");
strcpy(libros[1].editorial,"Patito-Hill");
libros[1].anio = 2019;

strcpy(libros[2].titulo,"1984");
strcpy(libros[2].autor,"George Orwell");
strcpy(libros[2].editorial,"Debolsillo");
libros[2].anio = 1949;

strcpy(libros[3].titulo,"El senior de las moscas");
strcpy(libros[3].autor,"William Golding");
strcpy(libros[3].editorial,"Faber");
libros[3].anio = 1954;

scanf("%[^\n]%*c",libros[4].titulo);
scanf("%[^\n]%*c",libros[4].autor);
scanf("%[^\n]%*c",libros[4].editorial);
scanf("%i",&libros[4].anio);

for(i=0; i<n; i++)
{
printf("Este libro es: %s %s %s %d\n",libros[i].titulo,libros[i].autor, libros[i].editorial, libros[i].anio);
}

return 0;
}

