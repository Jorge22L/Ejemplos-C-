//Ejemplo algoritmo Shell Sort
#include <iostream>
using namespace std;

//Función para realizar el ordenamiento Shell Sort
void shellSort(int arr[], int n)
{
    //Iniciamos con un gap (separación) grande y lo reducimos en cada iteración
    for(int gap = n/2; gap > 0; gap /= 2)
    {
        //Se realiza un insertion sort para la separación
        // los primeros gap elementos ya estan ordenados
        for(int i = gap; i<n; i++)
        {
            //Se guarda arr[i] en una variable temporal
            // se hace un espacio en la posición i
            int temp = arr[i];

            //Se desplazan los elementos anteriores al gap
            // hasta encontrar la ubicación correcta para arr[i]
            int j;
            for(j = i; j >= gap && arr[j-gap] > temp; j -= gap)
            {
                arr[j] = arr[j-gap];
            }

            //Colocar el elemento temporal en la ubicación correcta
            // el valor original de arr[j] es guardado en temp
            arr[j] = temp;
        }
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
    int arr[] = {12,34,54,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Arreglo original: \n";
    printArray(arr, n);
    cout<<"Arreglo ordenado: \n";
    shellSort(arr, n);
    printArray(arr, n);

    return 0;
}