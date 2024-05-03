Algoritmo numeros_impares
	Definir suma, i Como Entero;
	suma <- 0;
	Para i <- 0 Hasta 100 Con Paso 1 Hacer
		Si i Mod 2 <> 0 Entonces
			suma <- suma + i;
		FinSi
	FinPara
	Escribir "la suma de los numeros impares del 1 al 100 es:", suma;
FinAlgoritmo