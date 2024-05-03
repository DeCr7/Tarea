Proceso promedioEstudiantes
    Definir nota, suma, promedio, i Como Real;
    suma <- 0;
    Para i <- 1 Hasta 10 Hacer
        Escribir "Digite la nota del estudiante ", i, ": ";
        Leer nota;
        suma <- suma + nota;
    FinPara
    promedio <- suma / 10;
    Escribir "El promedio de los 10 estudiantes es ", promedio;
FinProceso