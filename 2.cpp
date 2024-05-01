//Desarrollar un programa que imprima los números impares en orden descendente que hay entre 1 y 100.

//sin copilot
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int suma = 0;
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 !=0)
        {
            suma += i;
        } 
    }
    cout << "la suma de los numeros impares del 1 al 100 es:" << suma;
    return 0;
}