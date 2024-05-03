/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/

#include <iostream>
using namespace std;

void multiVectores(int arr1[], int arr2[], int n);

int main()
{
    int arr1[3] = {0};
    int arr2[3] = {0};
    int n = sizeof(arr1)/sizeof(arr1[0]);

    cout << "Enter the elements of the first vector: ";
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    cout << "Enter the elements of the second vector: ";
    for (int i = 0; i < n; i++)
        cin >> arr2[i];

    multiVectores(arr1, arr2, n);

    return 0;
}

void multiVectores(int arr1[], int arr2[], int n)
{
    int result = 0;

    for (int i = 0; i < n; i++)
        result += arr1[i] * arr2[i];

    cout << "The dot product of the two vectors is: " << result << endl;
}