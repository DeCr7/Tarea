/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include <iostream>

using namespace std;

void transposicion();

main()
{
    transposicion();
    return 0;
}

void transposicion(){
    int matriz1[3][3];
    int matriz2[3][3];

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < 3; ++i) /*fila*/
    {
        for (int j = 0; j < 3; ++j) /*columna*/
        {
            cout << "Ingrese el elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz1[i][j];
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            matriz2[j][i] = matriz1[i][j];
        }
    }

    cout << "La matriz transpuesta es:" << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }
}