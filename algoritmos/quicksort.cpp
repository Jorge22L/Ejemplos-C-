//Ejemplo de algoritmo de ordenamiento quicksort
#include <iostream>
using namespace std;

//función para intercambio de elementos
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/*Función de ordenamiento quicksort
Esta funcion toma el último elemento como pivote
lo coloca en su posición correcta y los divide en dos grupos
colocando a todos los menores que el a la izquierda y los mayores
a la derecha*/
int partition(int arr[], int low, int high)
{
    int pivote = arr[high]; //pivote
    int i = (low - 1);     //indice de elemento menor

    for(int j = low; j <= high - 1; j++)
    {
        //Si el elemento actual es menor o igual al pivote
        if(arr[j] <= pivote)
        {
            i++; //incrementa el índice del elemento menor
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

//Función de ordenamiento quicksort
//arr[] --> arreglo de elementos a ordenar
//low --> indice del primer elemento
//high --> indice del último elemento
void quicksort(int arr[], int low, int high)
{
    if(low < high)
    {
        //pi es el índice de partición
        // arr[p] está en el lugar correcto
        int pi = partition(arr, low, high);

        //Ordenar separadamente los elementos antes y después de la partición
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

//función para imprimir el arreglo
void printArray(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Programa principal
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    cout << "Arreglo ordenado: \n";
    printArray(arr, n);

    return 0;
}