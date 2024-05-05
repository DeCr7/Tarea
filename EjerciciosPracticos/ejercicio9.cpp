/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>

using namespace std;

void multiMatrices();

int main()
{
    multiMatrices();
    return 0;
}

void multiMatrices()
{
    int matriz1[3][3];
    int matriz2[3][3];
    int matriz3[3][3];

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < 3; ++i) /*fila*/
    {
        for (int j = 0; j < 3; ++j) /*columna*/
        {
            cout << "Ingrese el elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz1[i][j];
        }
    }
    cout << endl;

    cout << "Matriz 1" << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < 3; ++i) /*fila*/
    {
        for (int j = 0; j < 3; ++j) /*columna*/
        {
            cout << "Ingrese el elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz2[i][j];
        }
    }
    cout << endl;

    cout << "Matriz 2" << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            matriz3[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }

    cout << "La matriz resultante es:" << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << matriz3[i][j] << " ";
        }
        cout << endl;
    }
}