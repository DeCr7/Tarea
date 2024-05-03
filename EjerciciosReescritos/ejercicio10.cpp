/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include <iostream>

using namespace std;

void transposeMatrix();

int main()
{
    transposeMatrix();
    return 0;
}

void transposeMatrix(){
    int matrix1[3][3];
    int matrix2[3][3];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < 3; ++i) // row
    {
        for (int j = 0; j < 3; ++j) // column
        {
            cout << "Enter the element (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            matrix2[j][i] = matrix1[i][j];
        }
    }

    cout << "The transposed matrix is:" << endl;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
}