/* Escribir un programa que dé como resultado
la frecuencia con la que aparece cada una de las letras adyacenter, de un texto
introducido por teclado. No se hará diferencia entre mayúsculas y minúsculas.*/

#include <iostream>
#include <string>
#include <cctype> //Para usar funciones como tolower()

using namespace std;

int main()
{
    const int LETRAS_ALFABETO = 26;
    int frecuencia[LETRAS_ALFABETO][LETRAS_ALFABETO] = {0}; //inicializar la matriz

    string texto;
    cout << "Introduce un texto: ";
    getline(cin, texto);

    //Convertir el texto a minúsculas
    for(char &c: texto)
    {
        c = tolower(c);
    }

    //Contar la frecuencia de cada letra
    for(size_t i = 0; i < texto.length() - 1; i++)
    {
        char actual = texto[i];
        char siguiente = texto[i + 1];
        if(isalpha(actual) && isalpha(siguiente)){
            int fila = actual - 'a';
            int columna = siguiente - 'a';
            frecuencia[fila][columna]++;
        }
    }

    //Mostrar la frecuencia de cada letra
    cout<< "Tabla de frencuencia de letras adyacentes: " << endl;
    for(char c = 'a'; c <= 'z'; c++)
    {
        cout << c << " ";
    }
    cout << endl;

    for(int i = 0; i < LETRAS_ALFABETO; i++)
    {
        for(int j = 0; j < LETRAS_ALFABETO; j++)
        {
            cout << frecuencia[i][j] << " ";
            if(frecuencia[i][j] < 10)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}