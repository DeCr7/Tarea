Proceso sumaPares
    Definir suma, i Como Entero;
    suma <- 0;
    Para i <- 100 Hasta 200 Hacer
        Si i MOD 2 = 0 Entonces
            suma <- suma + i;
        FinSi
    FinPara
    Escribir "La suma de los numeros pares entre 100 y 200 es ", suma;
FinProceso