/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100.*/

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i * i;
    }
    cout << "The sum of the squares of the numbers between 1 and 100 is " << sum << endl;
    return 0;
}