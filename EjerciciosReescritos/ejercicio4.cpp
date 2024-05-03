/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>
#include <iomanip>

using namespace std;

float calcularPromedio();

int main()
{
    float promedio = calcularPromedio();
    cout << "El promedio de los 10 estudiantes es " << fixed << setprecision(2) << promedio << endl;
    return 0;
}

float calcularPromedio(){
    float nota;
    float suma=0;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Digite la nota del estudiante " << i << ": ";
        cin >> nota;
        suma += nota;
    }
    return suma/10;
}