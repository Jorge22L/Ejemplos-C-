//Ejemplo de colas usando biblioteca
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> cola;

    cola.push(10);
    cout << "10 insertado a la cola" << endl;
    cola.push(20);
    cout << "20 insertado a la cola" << endl;
    cola.push(30);
    cout << "30 insertado a la cola" << endl;
    cola.push(40);
    cout << "40 insertado a la cola" << endl;

    //Operacion front
    cout << "Elemento superior de la cola: " << cola.front() << endl;

    //Operacion back
    cout << "Elemento inferior de la cola: " << cola.back() << endl;

    //Operacion pop (remueve elemento)
    cout<< "Eliminando elemento de cola"<<endl;
    cola.pop();
    cout << "Elemento superior de la cola: " << cola.front() << endl;
    cout << "Elemento inferior de la cola: " << cola.back() << endl;

    //Verificación de cola
    cout << "Cola vacia: " << (cola.empty() ? "true" : "false") << endl;

    
    return 0;
}