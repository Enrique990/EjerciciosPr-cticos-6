/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
✓ Cantidad de alumnos aprobados
✓ Cantidad de alumnos reprobados
✓ Promedio general del grupo*/

//sin copilot

#include<iostream>
using namespace std;

float nota, suma=0, promedio;
int aprobados, reprobados;

int main()
{
    for(int i=1; i<=10; i++)
    {
        cout<<"Ingrese la nota del estudiante "<<i<<": ";
        cin>>nota;
        suma+=nota;
        if (nota <70)
        {
            reprobados += 1; 
        }else aprobados += 1;
    }
    promedio=suma/10;
    cout<<"El promedio general de la seccion es: "<<promedio<<endl;
    cout<<"La cantidad de alumnos aprobados son: "<<aprobados<<endl;
    cout<<"La cantidad de alumnos reprobados son: "<<reprobados<<endl;
    return 0;
}