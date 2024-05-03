Algoritmo promedio
	Definir nota, suma, promedios Como Real
	suma <- 0
	Para i <- 1 Hasta 10 Con Paso 1 Hacer
		Escribir "Ingrese la nota del estudiante ", i, ": "
		Leer nota
		suma <- suma + nota
	FinPara
	promedios <- suma / 10
	Escribir "El promedio general de la seccion es: ", promedios
FinAlgoritmo