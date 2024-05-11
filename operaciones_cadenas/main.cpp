#include<iostream>

using namespace std;

int main()
{
    string palabra1 = "Hola";
    string palabra2 = "Mundo gente";
    string email = "misupercorreoMaster@ns.miserver.com";

    //concatenando
    string frase = palabra1 + " " + palabra2;

    //accediendo a las posiciones de caracteres de cadena
    char primeraLetra = palabra1[0];
    char ultimaLetra = palabra1[palabra1.length()-1];

    //comparando cadenas
    if(palabra1 == palabra2)
    {
        cout << "Son iguales" << endl;
    }
    else
    {
        cout << "No son iguales" << endl;
    }

    //Busqueda
    size_t posicion = email.find("@");
    cout << "La posicion es: " << posicion << endl;
    cout << "Nombre usuario correo: "<<email.substr(0, posicion) << endl;
    cout<<"El dominio es: " << email.substr(posicion+1) << endl;

    //Validar cadenas vacías
    email = "\n";

    if(email.empty())
    {
        cout << "La cadena esta vacia" << endl;
    }
    else
    {
        cout << "La cadena no esta vacia" << endl;
    }
    //Reemplazar
    //cout<<"El nuevo dominio es: " << email.replace(posicion+1, email.length()-posicion-1, "alla.com") << endl;
    return 0;

}