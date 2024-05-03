Proceso matriz
	Definir matriz1, matriz2, resultado Como Entero;
	Dimension matriz1[3,3], matriz2[3,3], resultado[3,3];
	Definir i,j Como Entero;
	
	Para i <- 0 Hasta 2 Hacer
		Para j <- 0 Hasta 2 Hacer
			Escribir "Matriz 1";
			Escribir "Ingresa un numero";
			Leer matriz1[i,j];
		FinPara
		Escribir "";
	FinPara
	
	Para i <- 0 Hasta 2 Hacer
		Para j <- 0 Hasta 2 Hacer
			Escribir "Matriz 2";
			Escribir "Ingresa un numero";
			Leer matriz2[i,j];
		FinPara
		Escribir "";
	FinPara
	
	Escribir "El resultado de la multiplicacion es ";
	Para i <- 0 Hasta 2 Hacer
		Para j <- 0 Hasta 2 Hacer
			resultado[i,j] <- matriz1[i,j] * matriz2[i,j];
			Escribir resultado[i,j];
		FinPara
		Escribir "";
	FinPara
FinProceso