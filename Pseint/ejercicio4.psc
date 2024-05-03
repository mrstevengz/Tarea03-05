Proceso ejercicio4
	Definir i Como Entero;
	Definir suma, nota, promedio Como Real;
	suma <- 0;
	Para i<-1 Hasta 10 Hacer
		Escribir 'Ingrese la nota de la clase ', i;
		Leer nota;
		suma <- suma+nota;
	FinPara
	promedio <- suma/10;
	Escribir 'El promedio general de la clase es: ', promedio;
FinProceso
