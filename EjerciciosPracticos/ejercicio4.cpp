/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>

using namespace std;

void calcularPromedio();

main()
{
    calcularPromedio();
    return 0;
}

void calcularPromedio(){
    float nota;
    float suma=0;
    float promedio;
    for (float i = 1; i <= 10; i++)
    {
        cout << "Digite la nota del estudiante: ";
        cin >> nota;
        suma += nota;
    }
    promedio=suma/10;
    printf("El promedio de los 10 estudiantes es %.2f", promedio);
}