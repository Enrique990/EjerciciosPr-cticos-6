Algoritmo alumnos
	Definir nota, suma, promedio, aprobados, reprobados Como Entero
	suma <- 0
	aprobados <- 0
	reprobados <- 0
	Para i <- 1 Hasta 10 Con Paso 1 Hacer
		Escribir "Ingrese la nota del estudiante ", i, ": "
		Leer nota
		suma <- suma + nota
		Si nota < 70 Entonces
			reprobados <- reprobados + 1
		Sino
			aprobados <- aprobados + 1
		FinSi		
	FinPara
	promedio <- suma / 10
	Escribir "El promedio general de la seccion es: ", promedio
	Escribir "La cantidad de alumnos aprobados son: ", aprobados
	Escribir "La cantidad de alumnos reprobados son: ", reprobados
FinAlgoritmo