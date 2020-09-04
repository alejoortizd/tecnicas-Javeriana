#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void adivinar(int numero, int numDado, int contador) {
  do
  {
    printf("Ingresa un numero: ");
    scanf("%d", &numDado);
    if (numDado > numero) {
      printf("Demasiado grande! Intentalo de nuevo: %d\n", contador);
      contador+=1;
    } else if(numDado < numero) {
      printf("Demasiado pequenio! Intentalo de nuevo: %d\n", contador);
      contador += 1;
    } else if (numDado == numero) {
      //printf("Acertaste! Te ha costado %d intento(s)", contador);
      break;
    }
  } while (contador < 6);
  if (contador > 5) {
    printf("Perdiste el numero era: %d", numero);
  } else {
    printf("Acertaste! Te ha costado %d intento(s)", contador);
  }
}

void programa() {

  srand(time(NULL));
  int numero = rand() % 5000, numDado, contador = 1;
  printf("%d", numero);
  printf("---Adivina el numero, tienes 5 intentos---\n");
  adivinar(numero, numDado, contador);
}

int main()
{
  programa();  
  return 0;
}