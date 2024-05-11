// Ejemplo de algoritmo Radix Sort
#include <iostream>

using namespace std;

//función para obtener el máximo valor del arreglo
int getMax(int arr[], int n)
{
    int max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

//Función para hacer el counting sort de arr[]
void countSort(int arr[], int n, int exp)
{
    int* output = new int[n]; //arreglo de salida que tendrá los números ordenados
    int count[10] = {0};

    //Almacena el conteo de ocurrencias en count[]
    for (int i = 0; i < n; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }

    //Cambia count[i] para que count[i] contenga la posición actual
    for(int i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }

    //Construye el arreglo de salida
    for(int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    //Copia el arreglo de salida en arr[]
    for(int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }

    delete[] output;
    
}

// función principal que ordena arr[] de tamaño n 
void radixsort(int arr[], int n)
{
    // Encuentra el número más grande en el arreglo
    int m = getMax(arr, n);

    //Realiza el counting sort para cada digito
    // exp es 10^i donde i es el dígito actual

    for(int exp = 1; m / exp > 0; exp *= 10)
    {
        countSort(arr, n, exp);
    }
}

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"Arreglo original: \n";
    printArray(arr, n);

    radixsort(arr, n);

    cout<<"Arreglo ordenado: \n";
    printArray(arr, n);

    return 0;
}