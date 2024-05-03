Proceso transposicion
	Definir matriz1, trans Como Entero;
	Dimension matriz1[3,3], trans[3,3];
	Definir i,j Como Entero;
	
	Para i <- 0 Hasta 2 Hacer
		Para j <- 0 Hasta 2 Hacer
			Escribir "Matriz 1";
			Escribir "Ingresa un numero";
			Leer matriz1[i,j];
		FinPara
		Escribir "";
	FinPara
	
	Para i <- 0 Hasta 2 Hacer;
        Para j <- 0 Hasta 2 Hacer;
            trans[i,j] <- matriz1[j,i];
        Fin Para
    Fin Para
	
    Escribir "Matriz transpuesta:";
    Para i <- 0 Hasta 2 Hacer;
        Para j <- 0 Hasta 2 Hacer;
            Escribir trans[i,j];
            Escribir " ";
        Fin Para
        Escribir "";
    Fin Para
FinProceso