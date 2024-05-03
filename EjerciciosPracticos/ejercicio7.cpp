/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/

#include <iostream>

using namespace std;

void sumaVectores();

main()
{
    sumaVectores();
    return 0;
}

void sumaVectores(){
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
        resultado[i] = arreglo1[i] + arreglo2[i];
    }

    cout << "La suma de los dos arreglos es:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << resultado[i] << " ";
    }
}