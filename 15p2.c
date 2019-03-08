#include <stdio.h>
//void Func_Cubo(float * numero);
//void Func_Cubo(float * N);

void main(){

  float num;
  float N=5;

printf("De un valor: ");
scanf("%f", &num);
//Func_Cubo(&num);
//Func_Cubo(&N);
}

void Func_Cubo(float * numero, float * N){
{
 * numero = (* N) * (* numero);
 * numero = (* N) / (* numero);
 printf("El cubo es: %2.2f \n", * numero);
}
}
