//Escriba el programa para calcular la suma de los cuadrados de los números entre 1 y 100.

//sin copilot

#include<iostream>
#include<cmath>
using namespace std;

int suma = 0;

int main(int argc, char const *argv[])
{
    for (int i = 0; i <= 100; i++)
    {
        suma += pow(i,2);
    }
    cout<<"La suma de los cuadrados de los numeros del 1 al 100 es:"<<suma;
    return 0;
}