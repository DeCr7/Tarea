/*Desarrollar un programa que imprima los números impares en orden
descendente que hay entre 1 y 100.*/

#include <iostream>

using namespace std;

void mostrarImpares();

main()
{
    mostrarImpares();
    return 0;
}

void mostrarImpares()
{
    for (int i = 100; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            printf("%i\n", i);
        }
    }
}