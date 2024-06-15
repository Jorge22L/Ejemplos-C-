#include<iostream>
#include<string>
using namespace std;

int main()
{
    const int FILAS = 2;
    const int COLUMNAS = 2;
    string matriz[FILAS][COLUMNAS];

    //Lectura de datos para llenar la matriz
    cout << "Ingrese los nombres en la matriz" << endl;
    for(int i = 0; i < FILAS; i++)
    {
        for(int j = 0; j < COLUMNAS; j++)
        {
            cout << "Nombre [" << i << "][" << j << "]: ";
            getline(cin, matriz[i][j]);
        }
    }

    //Impresión de la matriz
    cout << "Los nombres de la matriz son: " << endl;
    for(int i = 0; i < FILAS; i++)
    {
        for(int j = 0; j < COLUMNAS; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Modificación de la matriz
    
    int fila, columna;
    string nuevoNombre;
    cout << "Ingrese la fila y la columna que desea modificar: ";
    cin >> fila >> columna;
    cin.ignore(); //Ignorar el salto de linea
    cout << "Ingrese el nuevo nombre: ";
    getline(cin, nuevoNombre);
    matriz[fila][columna] = nuevoNombre;
    
    cout << "La nueva matriz es: " << endl;

    for(int i = 0; i < FILAS; i++)
    {
        for(int j = 0; j < COLUMNAS; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}