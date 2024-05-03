/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector*/

//sin copilot

#include <iostream>
using namespace std;

int main()
{
    int longitud = 0;
    int array1[longitud];
    int array2[longitud];
    int array3[longitud];

    cout << "Ingresa la longitud del vector: ";
    cin >> longitud;

    cout << endl
         << "Ingresando datos para el vector 1..." << endl
         << endl;
    for (int i = 0; i < longitud; i++)
    {
        cout << "Posicion [ " << i + 1 << " ] = Dime un numero: ";
        cin >> array1[i];
    }

    cout << endl
         << "Ingresando datos para el vector 2..." << endl
         << endl;
    for (int i = 0; i < longitud; i++)
    {
        cout << "Posicion [ " << i + 1 << " ] = Dime un numero: ";
        cin >> array2[i];
    }

    cout << endl
         << "Calculando resultados..." << endl;
    for (int i = 0; i < longitud; i++)
    {
        array3[i] = +(array1[i] + array2[i]);
        cout << "Posicion [ " << i + 1 << " ] = " << array3[i] << endl;
    }
}

//con copilot

/*#include <iostream>
using namespace std;

int main()
{
    int longitud = 0;
    int array1[longitud];
    int array2[longitud];
    int array3[longitud];

    cout << "Ingresa la longitud del vector: ";
    cin >> longitud;

    cout << endl
         << "Ingresando datos para el vector 1..." << endl
         << endl;
    for (int i = 0; i < longitud; i++)
    {
        cout << "Posicion [ " << i + 1 << " ] = Dime un numero: ";
        cin >> array1[i];
    }

    cout << endl
         << "Ingresando datos para el vector 2..." << endl
         << endl;
    for (int i = 0; i < longitud; i++)
    {
        cout << "Posicion [ " << i + 1 << " ] = Dime un numero: ";
        cin >> array2[i];
    }

    cout << endl
         << "Calculando resultados..." << endl;
    for (int i = 0; i < longitud; i++)
    {
        array3[i] = +(array1[i] + array2[i]);
        cout << "Posicion [ " << i + 1 << " ] = " << array3[i] << endl;
    }
}*/