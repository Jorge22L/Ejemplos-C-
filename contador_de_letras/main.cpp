#include<iostream>
#include<string>

using namespace std;

int main()
{
    //Contar cuantas veces tiene la letra a una frase
    string frase;
    int contador = 0;

    cout << "Introduce una frase: ";
    getline(cin, frase);
    cout<< "La frase es: " << frase << endl;
    

    for (char letra : frase)
    {
        if(isalpha(letra))
        {
            if (letra == 'a')
            {
                contador++;
            }
        }
    }

    cout << "La frase tiene " << contador << " letras a" << endl;
    
    return 0;
}