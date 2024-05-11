//Pograma para calcular indice de masa corporal
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    /*Formula IMC = peso / (estatura)^2
    Pedir datos al usuario
    peso -> puede ser decimal
    estatura -> puede ser decimal
    resultado -> es decimal

    Para indicar el estado de salud de la persona
    menor a 18.5 -> Bajo peso
    entre 18.5 y 24.9 -> Peso normal
    entre 25 y 29.9 -> Sobre peso
    entre 30 y 34.9 -> Obesidad grado 1
    entre 35 y 39.9 -> Obesidad grado 2
    mayor a 40 -> Obesidad grado 3
    */

    float peso, estatura, resultado;
    cout<<"Bienvenido al calculador de IMC"<<endl;
    cout<<"Ingresa tu peso en kg: ";
    cin>>peso;
    cout<<"Ingresa tu estatura en m: ";
    cin>>estatura;
    resultado = peso / (estatura * estatura);
    cout<< "Su indice de masa corporal es: "<<resultado<<endl;
    if(resultado < 18.5){
        cout<< "Usted se encuentra Bajo de peso"<<endl;
    }
    else if(resultado >= 18.5 && resultado <= 24.9){
        cout<< "Usted se encuentra en peso normal"<<endl;
    }
    else if(resultado >= 25 && resultado <= 29.9){
        cout<< "Usted se encuentra en sobrepeso"<<endl;
    }
    else if(resultado >= 30 && resultado <= 34.9){
        cout<< "Usted se encuentra en obesidad grado 1"<<endl;
    }
    else if(resultado >= 35 && resultado <= 39.9){
        cout<< "Usted se encuentra en obesidad grado 2"<<endl;
    }
    else if(resultado >= 40){
        cout<< "Usted se encuentra en obesidad grado 3"<<endl;
    }

    return 0;
}