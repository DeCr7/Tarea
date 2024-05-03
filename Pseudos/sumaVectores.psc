Proceso sumaVectores
    Definir elemento1, elemento2, suma1, suma2, suma3 Como Entero;
    Definir i Como Entero;
    suma1 <- 0;
    suma2 <- 0;
    suma3 <- 0;
    Escribir "Ingrese los 3 elementos del primer arreglo";
    Para i <- 1 Hasta 3 Hacer
        Escribir "Ingrese elemento ", i, ": ";
        Leer elemento1;
        suma1 <- suma1 + elemento1;
    FinPara
    Escribir "Ingrese los 3 elementos del segundo arreglo";
    Para i <- 1 Hasta 3 Hacer
        Escribir "Ingrese elemento ", i, ": ";
        Leer elemento2;
        suma2 <- suma2 + elemento2;
    FinPara
    suma3 <- suma1 + suma2;
    Escribir "La suma de los dos arreglos es: ", suma3;
FinProceso