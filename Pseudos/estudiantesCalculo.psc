Proceso estudiantesCalculo
    Definir nota, suma, promedio Como Real;
    Definir aprobado, reprobado, i Como Entero;
    suma <- 0;
    aprobado <- 0;
    reprobado <- 0;
    Para i <- 1 Hasta 8 Hacer
        Escribir "Digite la nota del estudiante ", i, ": ";
        Leer nota;
        suma <- suma + nota;
        Si nota >= 70 Entonces
            aprobado <- aprobado + 1;
        Sino
            reprobado <- reprobado + 1;
        FinSi
    FinPara
    promedio <- suma/8;
    Escribir "La cantidad de alumnos aprobados es de ", aprobado;
    Escribir "La cantidad de alumnos reprobados es de ", reprobado;
    Escribir "El promedio de los 8 estudiantes es ", promedio;
FinProceso