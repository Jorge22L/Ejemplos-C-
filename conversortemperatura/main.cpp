#include <iostream>
using namespace std;

int main()
{
    // Convertir de celsius a fahrenheit o viceversa
    // El usuario debe elegir que convertir
    // tengo que hacer un menu
    // pedir los datos de las temperaturas
    // calcular usando las formulas
    // solo trabajo que números que pueden ser decimales

    float celsius, fahrenheit;
    int opcion = 0;

    cout << "Seleccione la operación de conversión" << endl;
    cout << "1. De Celsius a Fahrenheit" << endl;
    cout << "2. De Fahrenheit a Celsius" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Introduzca la temperatura en Celsius" << endl;
        cin >> celsius;
        fahrenheit = (celsius * 1.8) + 32;
        cout << "La temperatura en Fahrenheit es: " << fahrenheit << endl;
        break;

    case 2:
        cout << "Introduzca la temperatura en Fahrenheit" << endl;
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) / (1.8);
        cout << "La temperatura en Celsius es: " << celsius << endl;
        break;

    default:
        cout << "Opcion no valida" << endl;
        break;
    }
    return 0;
}