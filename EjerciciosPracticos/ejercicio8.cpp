/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.*/

#include <iostream>

using namespace std;

void multiVectores();

main()
{
    multiVectores();
    return 0;
}

void multiVectores(){
    int arreglo1[3];
    int arreglo2[3];
    int resultado[3];

    cout << "Ingrese los 3 elementos del primer arreglo\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese elemento: ";
        cin >> arreglo1[i];
    }

    cout << "Ingrese los 3 elementos del segundo arreglo\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Ingrese elemento: ";
        cin >> arreglo2[i];
    }

    for (int i = 0; i < 3; ++i) {
        resultado[i] = arreglo1[i] * arreglo2[i];
    }

    cout << "La suma de los dos arreglos es:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << resultado[i] << " ";
    }
}