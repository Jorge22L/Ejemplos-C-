#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    // Area de un circulo
    // Area = pi * radio^2
    float radio, area;
    cout<<"Ingrese el radio del circulo: ";
    cin >> radio;
    area = M_PI * radio * radio;
    cout << "El area del circulo es: " << area << endl;
    
    return 0;
}