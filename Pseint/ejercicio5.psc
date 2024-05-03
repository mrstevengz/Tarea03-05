Proceso ejercicio5
	Definir i Como Entero;
	Definir suma, nota, promedio Como Real;
	Definir cantidadAprobados, cantidadReprobados Como Entero;
	cantidadAprobados <- 0;
	cantidadReprobados <- 0;
	suma <- 0;
	Para i<-1 Hasta 8 Hacer
		Escribir 'Ingrese la nota del estudiante: ', i;
		Leer nota;
		suma <- suma+nota;
		Si nota>=70 Entonces
			cantidadAprobados <- cantidadAprobados+1;
		SiNo
			cantidadReprobados <- cantidadReprobados+1;
		FinSi
	FinPara
	promedio <- suma/8;
	Escribir 'La cantidad de alumnos aprobados es: ', cantidadAprobados;
	Escribir 'La cantidad de alumnos reprobados es: ', cantidadReprobados;
	Escribir 'El promedio general del grupo es: ', promedio;
FinProceso
