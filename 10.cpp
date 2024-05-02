/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

//sin copilot

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int matriz1[3][3];
    int matriz2[3][3];
    int resultado[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Matriz 1" << endl;
            cout << "Ingresa un numero, fila " << i+1 << ", columna " << j+1 << ":"<< endl;
            cin >> matriz1[i][j];
        }

    }
for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz1[i][j];
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz1[j][i];
        }
        cout << endl;
    }
return 0;
}