//Ejercicio 25
//Los alumnos de un curso se han dividido en dos grupos, A y B de acuerdo al sexo y el nombre. El grupo A está formado por mujeres con nombre anterior a la M y los hombres con nombre anterior a la N, y el grupo B por el resto.
//Escribir un programa que pregunte al usuario su nombre y sexo, y muestre por pantalla el grupo que le corresponde.


#include <stdio.h>

void main(){
	char sexo[1], nombre[20];

	printf("Ingrese SEXO. Masculino: M    Femenino: F   -->");
	fgets(sexo);
	printf("Ingrese nombre: ");
	fgets(nombre);
}
