/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo*/

#include <iostream>

using namespace std;

void calculo();

main()
{
    calculo();
    return 0;
}

void calculo(){
    float nota;
    float suma=0;
    float promedio;
    int aprobado=0;
    int reprobado=0;
    for (float i = 1; i <= 8; i++)
    {
        cout << "Digite la nota del estudiante: ";
        cin >> nota;
        suma += nota;
        if (nota >= 70)
        {
            aprobado += 1;
        }
        else
        {
            reprobado += 1;
        }
    }
    promedio=suma/8;
    printf("La cantidad de alumnos aprobados es de %.i\n", aprobado);
    printf("La cantidad de alumnos reprobados es de %.i\n", reprobado);
    printf("El promedio de los 10 estudiantes es %.2f\n", promedio);
}