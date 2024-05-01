/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

//sin copilot
#include<iostream>
using namespace std;

int n, suma = 0;

int main(int argc, char const *argv[])
{
    cout << "digite un numero cualquiera: ";
    cin >> n;

    for (int i = 0; i <= n ;i++)
    {
        suma = suma + i;
    }
    cout << "la suma de los numeros del 1 al " << n << " es: " << suma;
    
    return 0;
}