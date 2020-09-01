//Incluyo biblioteca de entrada/salida.
#include <stdio.h>
#include <stdlib.h>


int sumar(int numUno, int numDos)
{
  return numUno + numDos;
}
int restar(int numUno, int numDos)
{
  return numUno - numDos;
}
int multiplicar(int numUno, int numDos)
{
  return numUno * numDos;
}
float dividir(int numUno, int numDos)
{
  float result = 0.0;
  if (numDos > 0)
  {
    result = (float)numUno / (float)numDos;
  }
  else
  {
    printf("No se puede hacer esta operacion para los numeros %d--%d \n", numUno, numDos);
  }
  return result;
}
int palindrome(int numToCheck)
{
  int reversedNum = 0, originalNum, tmp;
  originalNum = numToCheck;
  while (numToCheck > 0) 
  {
    tmp = numToCheck % 10;
    reversedNum = reversedNum * 10 + tmp;
    numToCheck /= 10;
  }
  if(originalNum == reversedNum) {
    printf("El numero %d es palindrome\n", originalNum);
  } else {
    printf("El numero %d no es palindrome\n", originalNum);
  }
}
int bisiesto(int year)
{
  if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
    return 1;
    // printf("El año %d es bisiesto\n", year);
  } else {
    return 0;
    // printf("El año %d es no es bisiesto\n", year);
  }
}

int main()
{
  int numUno, numDos, resultInt;
  float resultFloat;
  printf("Bienvenidos a este programa \n");
  printf("Ingrese el num uno \n");
  scanf("%d", &numUno);
  printf("Ingrese el num dos \n");
  scanf("%d", &numDos);

  //Operaciones
  resultInt = sumar(numUno, numDos);
  printf("Resultado operacion sumar %d \n", resultInt);

  resultInt = restar(numUno, numDos);
  printf("Resultado operacion restar %d \n", resultInt);

  resultInt = multiplicar(numUno, numDos);
  printf("Resultado operacion multiplicar %d \n", resultInt);

  resultFloat = dividir(numUno, numDos);
  printf("Resultado operacion dividir %f \n", resultFloat);

  int numToCheck, evaluatenTC, contador = 0;
  printf("Ingresa un numero de 9 digitos para evaluar: ");
  scanf("%d", &numToCheck);
  evaluatenTC = numToCheck;
  while (evaluatenTC > 0)
  {
    evaluatenTC /= 10;
    contador++;
  }
  if (contador < 9) {
    printf("Ingresa un numero de 9 digitos para evaluar: ");
    scanf("%d", &numToCheck);
  } else {
    palindrome(numToCheck);
  }
  int year, hermanos;
  char  *name = (char*)malloc(10);
  printf("Ingresa el año a evaluar: ");
  scanf("%d", &year);
  printf("Ingresa tu nombre: ");
  scanf("%s", name);
  printf("Ingresa cuantos hermanos tienes: ");
  scanf("%d", &hermanos);
  int a = bisiesto(year);
  if (a) {
    printf("El año %d es bisiesto y tu nombre es %s\n", year, name);
    free(name);
  } else {
    printf("El año %d no es bisiesto y tienes %d hermano(s)\n", year, hermanos);
    free(name);
  }
  return 0;
}