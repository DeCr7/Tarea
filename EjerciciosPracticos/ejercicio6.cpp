/*Hacer un programa que sume los números pares comprendidos entre
100 y 200.*/

#include <iostream>

using namespace std;

void sumaPares();

main()
{
    sumaPares();
    return 0;
}

void sumaPares(){
    int suma=0;
    for (int i = 100; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            suma+=i;
        }
    }
    printf("La suma de los numeros pares entre 100 y 200 es %i", suma);
}