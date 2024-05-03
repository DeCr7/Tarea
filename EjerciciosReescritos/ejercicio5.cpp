/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo*/

#include <iostream>
#include <iomanip>

using namespace std;

void calcularPromedio(float notas[], int n, int& aprobados, int& reprobados, float& promedio);

int main()
{
    const int n = 10;
    float notas[n];
    int aprobados, reprobados;
    float promedio;
    for (int i = 0; i < n; i++)
    {
        cout << "Digite la nota del estudiante " << i+1 << ": ";
        cin >> notas[i];
    }
    calcularPromedio(notas, n, aprobados, reprobados, promedio);
    cout << "La cantidad de alumnos aprobados es de " << aprobados << endl;
    cout << "La cantidad de alumnos reprobados es de " << reprobados << endl;
    cout << "El promedio de los 10 estudiantes es " << fixed << setprecision(2) << promedio << endl;
    return 0;
}

void calcularPromedio(float notas[], int n, int& aprobados, int& reprobados, float& promedio){
    float suma=0;
    for (int i = 0; i < n; i++)
    {
        suma += notas[i];
        if (notas[i] >= 70)
        {
            aprobados += 1;
        }
        else
        {
            reprobados += 1;
        }
    }
    promedio=suma/n;
}