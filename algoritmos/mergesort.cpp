//Ejemplo de algoritmo Merge Sort
#include <iostream>
using namespace std;

//Función para combinar dos subarreglos ordenados
// Primer subarreglo: arr[l..m]
// Segundo subarreglo: arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1; // Tamaño del primer subarreglo
    int n2 = r - m;    // Tamaño del segundo subarreglo 

    // Crear dos arreglos temporales
    int* L = new int[n1];
    int* R = new int[n2];

    // Copiar datos a los arreglos temporales L[] y R[]
    for(int i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }
    
    // Fusionar los arreglos temporales L[] y R[] en arr[l..r]
    int i = 0; // Indice del primer subarreglo
    int j = 0; // Indice del segundo subarreglo
    int k = l; // Indice inicial del subarreglo fusionado

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
        
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
    
}

//Función para realizar el ordenamiento Merge Sort
// arr[] --> arreglo de elementos a ordenar
// l --> indice del primer elemento
// r --> indice del último elemento
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Igual que (l+r)/2 pero evita desbordamiento de enteros
        int m = l + (r - l) / 2;

        //Ordenar primer mitad y segunda mitad
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
    
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Arreglo original: \n";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout<<"Arreglo ordenado: \n";
    printArray(arr, n);

    return 0;
}