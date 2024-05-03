/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

#include <iostream>

using namespace std;

int sumatoria(int num);

int main()
{
    int num;
    cout << "Digite un numero natural hasta el que desee sumar: ";
    cin >> num;
    int suma = sumatoria(num);
    cout << "La sumatoria de todos los numeros es " << suma << endl;
    return 0;
}

int sumatoria(int num)
{
    int suma = 0;
    for (int i = 1; i <= num; i++)
    {
        suma += i;
    }
    return suma;
}