#include <stdio.h>
int suma = 0;
int sumar(int numUno, int numDos){
	int resultado = numUno + numDos;
	return resultado;
}
int multiplicar(int numUno, int numDos){
	int resultado = numUno * numDos;
	return resultado;
}
int restar(int numUno, int numDos){
	int resultado = numUno - numDos;
	return resultado;
}

int main(){
	int numUno, numDos, resultado;
	printf("Ingrese numero uno ");
	scanf("%d",&numUno);
	printf("Ingrese numero dos ");
	scanf("%d",&numDos);
	
	suma = sumar(numUno, numDos);
	printf("Suma es igual a  %d  \n",suma);
	
	int retornoFuncionDos = multiplicar(suma, numUno);
	printf("Multiplicacion es igual a  %d  \n", retornoFuncionDos);
	
	int retornoFuncionTres = restar(numUno, numDos);
	printf("Resta es igual a %d \n", retornoFuncionTres);

	return 0;
}

