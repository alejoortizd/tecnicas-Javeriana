#include <stdio.h>

void imprimirCalificacionIfAnidado(float nota){
	/* Use solo if sin else */
	if(nota >= 4.5)
		printf("el estudiante es excelente");
	if(nota>= 4.0 && nota < 4.5)
		printf("el estudiante es muy bueno");
	if(nota>= 3.5 && nota < 4.0)
		printf("el estudiante es bueno");
	if(nota>= 3.0 && nota < 3.5)
		printf("el estudiante es aceptable");
	if(nota < 3.0)
		printf("el estudiante perdio la materia");
}

void imprimirCalificacionElseIf(float nota){
/* Use else if */
	
}

void obtenerDiaSemana( int diaSemana){
	//TODO completar con lo escrito en el tercer punto
}
int main(){
	float nota=0.0;
	//Solicite la nota
	printf("Ingrese la nota a revisar recuerde el valor entre 0 y 5\n");
	scanf("%f", &nota);
	//Valide que se encuentre en el rango indicado
	if (nota < 0 || nota > 5) {
		printf("lo siento el valor de la calificación está por fuera del rango. Ingrese nota nuevamente: \n");
		scanf("%f", &nota);
	}
	//Si se encuentra en el rango indicado invoque los procedimientos
	// 	 imprimirCalificacionElseIf  e  imprimirCalificacionIfAnidado
	imprimirCalificacionIfAnidado(nota);
	imprimirCalificacionElseIf(nota);
	//TODO llamar a obtenerDiaSemana
	return 0;
}