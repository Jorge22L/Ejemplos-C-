//Ejemplo de algoritmo Heap Sort
#include <iostream>
using namespace std;

// Función para reajustar el subarbol en la raiz dada
// n es el tamaño del heap
void heapify(int arr[], int n, int i)
{
    int largest = i; // Inicializar largest como la raiz
    int left = 2 * i + 1; // Indice del hijo (rama) izquierda
    int right = 2 * i + 2; // Indice del hijo (rama) derecha

    // Si el hijo izquierdo es mayor que la raiz
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }

    // Si el hijo derecho es mayor que la raiz
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    // Si largest no es la raiz
    if (largest != i){
        swap(arr[i], arr[largest]);

        //Recursivamente reajustar el heap
        heapify(arr, n, largest);
    }   
}

// Función principal para hacer el ordenamiento
void heapSort(int arr[], int n)
{
    // Construir el heap (reorganizar el arreglo)
    for(int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    //Uno por uno extraer un elemento del heap
    for(int i = n - 1; i >= 0; i--)
    {
        //Movemos la raiz al final
        swap(arr[0], arr[i]);

        //llamar a max heapify para el heap reducido
        heapify(arr, i, 0);
    }
}

//Función para imprimir el arreglo de tamaño n
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

// Código principal
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Arreglo original: \n";
    printArray(arr, n);

    heapSort(arr, n);

    cout << "Arreglo ordenado: \n";
    printArray(arr, n);

    return 0;
}