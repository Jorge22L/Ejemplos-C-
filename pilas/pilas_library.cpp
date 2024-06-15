//Pilas utilizando biblioteca de pilas
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> pila;
    pila.push(10);
    cout << "10 insertado a la pila" << endl;
    pila.push(20);
    cout << "20 insertado a la pila" << endl;
    pila.push(30);
    cout << "30 insertado a la pila" << endl;

    //Operacion top
    cout << "Elemento superior de la pila: " << pila.top() << endl;

    //Operacion pop
    pila.pop();
    cout << "Elemento superior de la pila: " << pila.top() << endl;

    //Verificación de pila
    cout << "Pila vacia: " << (pila.empty() ? "true" : "false") << endl;

    return 0;
}