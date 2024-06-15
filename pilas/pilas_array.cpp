//Implementación de pilas usando arreglos
#include <iostream>
#define MAX 1000

using namespace std;

class Stack{
    int top;

    public:
    int a[MAX]; // Arreglo para almacenar elementos de la pila

    Stack()
    {
        top = -1;
    }

    bool push(int x); // Función para insertar elementos en la pila
    int pop(); // Función para eliminar elementos de la pila
    int peek(); // Función para ver el elemento superior de la pila
    bool isEmpty(); // Función para verificar si la pila está vacía
};

bool Stack::push(int x)
{
    if(top >= (MAX - 1)){
        cout << "Desbordamiento de Pila" << endl;
        return false;
    }
    else{
        a[++top] = x;
        cout << x << " insertado en la pila" << endl;
        return true;
    }
}

int Stack::pop()
{
    if(top < 0)
    {
        cout << "Pila vacia" << endl;
        return 0;
    }
    else{
        int x = a[top--];
        return x;
    }
}

int Stack::peek()
{
    if(top < 0)
    {
        cout << "Pila vacia" << endl;
        return 0;
    }
    else{
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

int main()
{
    Stack pila;
    pila.push(10);
    pila.push(20);
    pila.push(30);
    
    cout<< pila.pop()<< " quitado de la pila" << endl;
    cout<< pila.peek()<< " elemento superior de la pila" << endl;

    cout << "Pila vacia: " << (pila.isEmpty() ? "true" : "false") << endl;
    return 0;
}