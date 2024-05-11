#include <iostream>
using namespace std;

int main()
{
    int opcion = 0;
    while (opcion == 0)
    {
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cin >> opcion;
        if(opcion != 1 && opcion != 2)
        {
            cout << "Opcion no valida" << endl;
            opcion = 0;
        }
        switch (opcion)
        {
        case 1:
            cout << "Suma" << endl;
            break;
        case 2:
            cout << "Resta" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    }
    
    return 0;
}
