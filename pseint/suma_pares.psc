Algoritmo suma_pares
	Definir suma, i Como Entero;
	suma <- 0;
	Para i<-100 Hasta 200 Con Paso 1 Hacer
		Si i MOD 2 = 0 Entonces
			suma <- suma + i;
		FinSi
	FinPara
	Escribir "la suma de los numeros pares entre 100 y 200 es: ", suma;
FinAlgoritmo