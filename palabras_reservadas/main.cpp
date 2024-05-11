#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    // crear un arreglo de palabras reservadas de c++
    // pedir una palabra al usuario y verificar si es una palabra reservada

    string palabras_reservadas[] = {"return", "if", "else", "int", "float", "double", "char", "void", "main"};
    string palabra;
    int tamanio_arreglo = sizeof(palabras_reservadas) / sizeof(palabras_reservadas[0]);
    cout << "Introduce una palabra: ";
    getline(cin, palabra);
    
    for (int i = 0; i < tamanio_arreglo; i++)
    {
        if(strcmp(palabras_reservadas[i].c_str(), palabra.c_str()) == 0)
        {
            cout << "La palabra es una palabra reservada" << endl;
            
        }else{
            cout << "La palabra no es una palabra reservada" << endl;

        }
    }
    
    return 0;
}