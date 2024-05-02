/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo.
*/

//sin copilot

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;
    int vector1[longitud];
    int vector2[longitud];
    int producto = 0;

    for (int i = 0; i < longitud; i++)
    {
        cout << "ingrese el valor del vector 1 en la posicion "<<i<<": ";
        cin >> vector1[i];
    }
    for (int i = 0; i < longitud; i++)
    {
        cout << "ingrese el valor del vector 2 en la posicion "<<i<<": ";
        cin >> vector2[i];
    }
    for (int i = 0; i < longitud; i++)
    {
        producto += vector1[i]*vector2[i];
    }
    cout << "el producto de los dos vectores es: "<<producto;
    return 0;
}