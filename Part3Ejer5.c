#include <stdio.h>
#define n 100

int main ()
{
char name[n];
int  age[n];

printf("cual es tu nombre?\n");
scanf("%[^\n]%*c", name);
//%[^\n]%*c asignación de datos
printf("Cual es tu edad?\n");
scanf("%i", &age);

printf("Hola %s tu edad es %i anios\n", name, &age);

return 0;
}
