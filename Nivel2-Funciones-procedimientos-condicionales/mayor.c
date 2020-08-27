#include <stdio.h>


int devolverMayor(int A, int B, int C) {
  if(A == B == C) {
    printf("** Los numeros son iguales **");
  }
  else {
    if(A > B && A > B) {
      printf("** El mayor es: %d **", A);
    }
    else {
      if(B > A && B > C) {
        printf("** El mayor es: %d **", B);
      }
      else {
        printf("** El mayor es: %d **", C);
      }
    }
  }
}

int main() {
  int A, B, C;

  printf("Ingrese el primer numero: ");
  scanf("%d", &A);
  printf("Ingrese el segundo numero: ");
  scanf("%d", &B);
  printf("Ingrese el tercer numero: ");
  scanf("%d", &C);

  devolverMayor(A, B, C);

}