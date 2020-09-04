#include <stdio.h>

int main()
{
  int numero = 0, contador = 0;
  float nota, promedio = 0, suma = 0;
  printf("---- Bienvenido al promediador de notas ----\n");
  do
  {
    printf("Ingesa una nota entre 0 y 5: ");
    scanf("%f", &nota);
    if (nota < 0 || nota > 5) {
		printf("lo siento el valor de la calificación está por fuera del rango. Ingrese nota nuevamente: \n");
		scanf("%f", &nota);
    }
    suma += nota;
    contador += 1;
    promedio = suma / contador;
    printf("Has ingresado %d notas y el promedio actual es %0.2f\n", contador, promedio);
    printf("para agregar otra nota presiona 1 o -1 para terminar\n");
    scanf("%d", &numero);

  } while (numero != -1);
  printf("Ingresaste %d nota(s) y el promedio total es %0.2f\n", contador, promedio);
}