Algoritmo suma_de_vectores
	Definir long, i, array1, array2, array3 Como Entero
	
	Escribir "Ingresa la long del vector: "
	Leer long
	
	Escribir ""
	Escribir "Ingresando datos para el vector 1..."
	Escribir ""
	Para i=0 Hasta long Con Paso 1 Hacer
		Escribir "Posicion [ ", i+1, " ] = Dime un numero: "
		Leer array1[i]
	FinPara
	
	Escribir ""
	Escribir "Ingresando datos para el vector 2..."
	Escribir ""
	Para i=0 Hasta long Con Paso 1 Hacer
		Escribir "Posicion [ ", i+1, " ] = Dime un numero: "
		Leer array2[i]
	FinPara
	
	Escribir ""
	Escribir "Calculando resultados..."
	Para i=0 Hasta long Con Paso 1 Hacer
		array3[i] <- +(array1[i] + array2[i])
		Escribir "Posicion [ ", i+1, " ] = ", array3[i]
	FinPara
FinAlgoritmo