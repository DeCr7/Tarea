/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

#include <iostream>

using namespace std;

void sumatoria(int num, int &suma);

main()
{
    int num, suma = 0;
    cout << "Digite un numero natural hasta el que desee sumar: ";
    cin >> num;
    sumatoria(num, suma);
    printf("La sumatoria de todos los numeros es %i", suma);
    return 0;
}

void sumatoria(int num, int &suma)
{
    suma = 0;
    for (int i = 1; i <= num; i++)
    {
        suma += i;
    }
}