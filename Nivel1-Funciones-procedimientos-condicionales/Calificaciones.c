#include <stdio.h>

void imprimirCalificacionIfAnidado(float nota){
	/* Use solo if sin else */
	if(nota >= 4.5)
		printf("el estudiante es excelente\n");
	else 
		if(nota>= 4.0 && nota < 4.5)
		printf("el estudiante es muy bueno\n");
		else 
			if(nota>= 3.5 && nota < 4.0)
			printf("el estudiante es bueno\n");
			else 
				if(nota>= 3.0 && nota < 3.5)
				printf("el estudiante es aceptable\n");
					else
					printf("el estudiante perdio la materia\n");
}

void imprimirCalificacionElseIf(float nota){
/* Use else if */
	if(nota >= 4.5)
		printf("el estudiante es excelente\n");
	else if(nota>= 4.0 && nota < 4.5)
		printf("el estudiante es muy bueno\n");
	else if(nota>= 3.5 && nota < 4.0)
		printf("el estudiante es bueno\n");
	else if(nota>= 3.0 && nota < 3.5)
		printf("el estudiante es aceptable\n");
	else
		printf("el estudiante perdio la materia\n");
	
}

void obtenerDiaSemana( int diaSemana){
	//TODO completar con lo escrito en el tercer punto
	switch (diaSemana)
	{
	case 1:
		printf("Hoy es Lunes\n");
		break;
	case 2:
		printf("Hoy es Martes\n");
		break;
	case 3:
		printf("Hoy es Miercoles\n");
		break;
	case 4:
		printf("Hoy es Jueves\n");
		break;
	case 5:
		printf("Hoy es Viernes\n");
		break;
	case 6:
		printf("Hoy es Sabado\n");
		break;
	case 7:
		printf("Hoy es Domingo\n");
		break;
	
	default:
		break;
	}
}

int main(){
	while(1) {
		float nota=0.0;
		int diaSemana;
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
		
		printf("-------procedimiento con if anidados-------\n");
		imprimirCalificacionIfAnidado(nota);
		printf("-------procedimiento con Else if-------\n");
		imprimirCalificacionElseIf(nota);
		
		//TODO llamar a obtenerDiaSemana
		
		printf("Que dia es hoy? ingrese un numero del 1 al 7\n");
		scanf("%d", &diaSemana);
		
		if(diaSemana<= 0 || diaSemana > 7) {
			printf("Lo siento, no conozco ese valor. Ingrese numero nuevamente\n");
			scanf("%d", &diaSemana);
		}
		
		obtenerDiaSemana(diaSemana);
	}
	
	
	return 0;
}