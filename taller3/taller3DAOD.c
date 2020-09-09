#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void adivinar() {
  srand(time(NULL));
  int numero = rand() % 5000, numDado, contador = 1;
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
      break;
    }
  } while (contador < 6);
  if (contador > 5) {
    printf("Perdiste el numero era: %d\n", numero);
  } else {
    printf("Acertaste! Te ha costado %d intento(s)\n", contador);
  }
}

void adivina71(){
  int cantidad = 0, adivinado = 71, numero=0;
  float suma = 0, promedio = 0, contador = 0;
  printf("Bienvenido al adivinador, cuantas veces quieres intentar?: ");
  scanf("%d", &cantidad);
  if (cantidad > 1) {
    printf("Listo vamos a jugar %d veces recuerda que son numeros entre 50 y 80\n", cantidad);
  } else {
    printf("Listo vamos a jugar %d vez recuerda que son numeros entre 50 y 80\n", cantidad);
  }
  do
  {
    printf("Ingresa un numero: ");
    scanf("%d", &numero);
    if (numero < 50 || numero > 80) {
      do
      {
        printf("Ingresa un numero valiado entre 50 y 80: ");
        scanf("%d", &numero);
      } while (numero < 50 || numero > 80);
    }
    if (numero == adivinado) {
      contador += 1;
      if (contador == 1) {
        printf("Felicitaciones\n");
      } else if (contador == 2) {
        printf("Felicitaciones, puedes pasar mañana por un premio\n");
      } else {
        printf("¡¡está muy sospechoso!!\n");
      }
    } else {
      suma += numero;
      contador += 1;
    }
    cantidad -= 1;
  } while (cantidad > 0);
  if (promedio > 0) {
    promedio = suma / contador;
    printf("--- El promedio que obtuviste fue: %f---\n \n", promedio);
  }
}

void evaluarCamionesB(int camionesA, int camionesB){
  int copyCamionesB = camionesB, tipo, tipo2 = 0, tipo3 = 0, tipo4 = 0;
  float cebolla, kgCebolla = 0, tomate, kgTomate = 0, naranja, kgNaranja = 0, mango, kgMango = 0, papa, kgPapa = 0;

  if (copyCamionesB > 0) {
    do
    {
      printf("Que tipo de camion es:\n[2] Tomate y cebolla\n[3]Tomate, cebolla, naranja\n[4] Tomate, cebolla, naranjo y mango\nEscoge una opcion: ");
      scanf("%d", &tipo);
      if (tipo == 2) {
        tipo2 +=1;
        printf("Cuantos kilos de cebolla hay: ");
        scanf("%f", &cebolla);
        kgCebolla += cebolla;
        printf("Cuantos kilos de tomate hay: ");
        scanf("%f", &tomate);
        kgTomate += tomate;
      } else if (tipo == 3) {
        tipo3 +=1;
        printf("Cuantos kilos de cebolla hay: ");
        scanf("%f", &cebolla);
        kgCebolla += cebolla;
        printf("Cuantos kilos de tomate hay: ");
        scanf("%f", &tomate);
        kgTomate += tomate;
        printf("Cuantos kilos de naranja hay: ");
        scanf("%f", &naranja);
        kgNaranja += naranja;
      } else if (tipo == 4) {
        tipo4 +=1;
        printf("Cuantos kilos de cebolla hay: ");
        scanf("%f", &cebolla);
        kgCebolla += cebolla;
        printf("Cuantos kilos de tomate hay: ");
        scanf("%f", &tomate);
        kgTomate += tomate;
        printf("Cuantos kilos de naranja hay: ");
        scanf("%f", &naranja);
        kgNaranja += naranja;
        printf("Cuantos kilos de mango hay: ");
        scanf("%f", &mango);
        kgMango += mango;
      }
      copyCamionesB -= 1;
    } while (copyCamionesB > 0);
    printf("El dia de hoy llegaron %d camion(es) tipoA\n", camionesA);
    if (camionesB > 0) {
      printf("Tambien llegaron %d camion(es) con 3 productos y %d camion(es) con 4 productos\n", tipo3, tipo4);
      printf("El total de kilos:\n[1] Cebolla es de: %0.2f\n[2] Naranja es: %0.2f\n[3] Mango es: %0.2f\n", kgCebolla, kgNaranja, kgMango);
    }
  }
}

void separarCamiones(int camionesLlegaron) {
  int camionesA, camionesB, total, suma;

  do
  {
    printf("Cuantos camiones de tipo A llegaron: ");
    scanf("%d", &camionesA);
  } while (camionesA < 0);

  do
  {
    printf("Cuantos camiones de tipo B llegaron: ");
    scanf("%d", &camionesB);
  } while (camionesB < 0);

  total = camionesLlegaron - camionesA - camionesB;
  suma = camionesA + camionesB;

  do
  {
    if (total > 0) {
      printf("Por favor verifica el total de camiones: \n");
      printf("Registraste %d camiones de tipoA\ny %d camiones de tipoB\ny el total son %d camiones\nhacen falta %d camiones por registrar\n", camionesA, camionesB, camionesLlegaron, total);
      printf("Cuantos camiones de tipo A llegaron: ");
      scanf("%d", &camionesA);
      camionesA = camionesA;
      printf("Cuantos camiones de tipo B llegaron: ");
      scanf("%d", &camionesB);
      camionesB = camionesB;
      total = camionesLlegaron - camionesA - camionesB;
      suma = camionesA + camionesB;
    } else if (total < 0) {
      total *= -1;
      printf("Por favor verifica el total de camiones: \n");
      printf("Registraste %d camiones de tipoA\ny %d camiones de tipoB\ny el total son %d camiones\nIngresaste %d camion(es) de mas\n", camionesA, camionesB, camionesLlegaron, total);
      printf("Cuantos camiones de tipo A llegaron: ");
      scanf("%d", &camionesA);
      camionesA = camionesA;
      printf("Cuantos camiones de tipo B llegaron: ");
      scanf("%d", &camionesB);
      camionesB = camionesB;
      total = camionesLlegaron - camionesA - camionesB;
      suma = camionesA + camionesB;
    }
  } while (total != 0);
  evaluarCamionesB(camionesA, camionesB);
}

void tienda() {
  int camionesLlegaron;

  printf("Cuantos camiones llegaron hoy?: ");
  scanf("%d", &camionesLlegaron);
  do
  {
    if (camionesLlegaron < 0) {
      printf("Por favor ingresa un numero mayor a 0: ");
      scanf("%d", &camionesLlegaron);
    }
  } while (camionesLlegaron < 0);
  separarCamiones(camionesLlegaron);
}

void numerosPrimos(){
  int mostrarPrimos, n =2 , i, primo, primoSum, copy, suma = 0;

  printf("Cuantos primos desea mostrar: ");
  scanf("%d", &mostrarPrimos);

  while (mostrarPrimos > 0) {
    primo = 1;
    for (i = 2; i < n; ++i) {
      if (n % i == 0) {
        primo = 0;
        break;
      }
    }
    if (primo) {
      copy = n;
      if (n > 100) {
        while (copy > 0) {
          suma += copy % 10;
          copy /= 10;
        }
        primoSum = 1;
        for (i = 2; i < suma; ++i) {
          if (suma % i == 0) {
            primoSum = 0;
            break;
          }
        }
        printf("---El numero primo es %d, su suma es: %d y %s ---\n", n, suma, primoSum ? "es primo" : "no es primo");
      } else {
        printf("---El numero primo es %d---\n", n);
      }
      mostrarPrimos--;
    }
    n++;
  }
}

void mostrarOpciones() {
  printf("Bienvenido que quieres realizar el dia de hoy?\n");
  printf("[1] Adivinar Numero\n");
  printf("[2] A que no aciertas el numero\n");
  printf("[3] Administrar tu tienda\n");
  printf("[4] Numeros primos\n");
  printf("[0] Salir\n");
  printf("Ingresa una opcion: ");
}

void menu() {
  int op;
  do
  {
    mostrarOpciones(op);
    scanf("%d", &op);

    if(op) {
      switch (op)
      {
      case 1:
        adivinar();
        break;

      case 2:
        adivina71();
        break;

      case 3:
        tienda();
        break;

      case 4:
        numerosPrimos();
        break;

      default:
        break;
      }
    }
  } while (op != 0);
}

int main() {
  menu();
}