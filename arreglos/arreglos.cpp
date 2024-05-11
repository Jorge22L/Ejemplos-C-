#include <iostream>

using namespace std;

void imprimir(int arreglo[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Elemento [" << i << "] ordenado:" << arreglo[i] << endl;
    }
}
void ordenamientoBurbuja(int arreglo[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool cambio = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                // intercambio de los elementos
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                // se sustituye el elemento
                arreglo[j + 1] = temp;
                cambio = true;
            }
        }
        // si no hubo intercambios, el arreglo ya está ordenado
        if (!cambio)
            break;

        cout<<"Los elementos del arreglo ordenados son: " << endl;
        imprimir(arreglo, n);
    }
}

int main()
{
    // declarar arreglos
    // int arreglo[] = {1,2,3,4,5};
    int arreglo[10];

    // Operación de escritura
    cout << "Por favor ingrese 5 números" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Elemento en la posicion [" << i << "]: ";
        cin >> arreglo[i];
    }

    // Operación de lectura
    cout << "Los elementos del arreglo son: " << endl;
    for (int j = 0; j < 10; j++)
    {
        cout << "Elemento en la posicion [" << j << "]: " << arreglo[j] << endl;
    }
    
    //Ordenar arreglo
    cout<<"Los elementos del arreglo ordenados son: " << endl;
    ordenamientoBurbuja(arreglo, 10);
    return 0;
}