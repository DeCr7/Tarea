/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/

#include <iostream>

using namespace std;

void sumatoria();

main()
{
    sumatoria();
    return 0;
}

void sumatoria(){
    int suma;
    for (int i = 1; i <= 100; i++)
    {
        suma += i*i;
    }
    printf("La sumatoria de los cuadrados de los numeros entre 1 y 100 es %i", suma);
}