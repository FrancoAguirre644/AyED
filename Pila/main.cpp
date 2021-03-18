#include <iostream>
#include "Pila.h"

using namespace std;

/*

Una pila (stack en inglés) es una lista ordinal o estructura de datos en la que el modo de acceso a sus elementos
es de tipo LIFO (del inglés Last In First Out, último en entrar, primero en salir) que permite almacenar
y recuperar datos. Esta estructura se aplica en multitud de ocasiones en el área de informática debido a su simplicidad
y ordenación implícita de la propia estructura.
Para el manejo de los datos se cuenta con dos operaciones básicas: apilar (push), que coloca un objeto en la pila,
y su operación inversa, retirar (o desapilar, pop), que retira el último elemento apilado.

Si hiciéramos analogía con objetos cotidianos, Por una operación apilar (Push) equivaldría a colocar un plato sobre una
pila de platos, y una operación desapilar (Pop) a retirarlo.

*/

int main()
{
    Nodo pila = NULL;

    Sucursal s1 = constructor("Starbucks", "Florida 1 Galeria", "42359687");
    Sucursal s2 = constructor("KFC", "Alto Avellaneda", "42359677");
    Sucursal s3 = constructor("Mc Donals", "Av. Hipolito Yrigoyen 4475", "42759677");

    Sucursal aux;

    push(pila, s1);
    push(pila, s2);
    push(pila, s3);

    cout<<(empty_stack(pila) ? "THE STACK IS EMPTY" : "THE STACK IS NOT EMPTY")<<endl;

    cout<<"THE SIZE IS: "<<size_stack(pila)<<endl;

    while(pila != NULL) {
        pop(pila, aux);
        mostrar(aux);
    }

    cout<<(empty_stack(pila) ? "THE STACK IS EMPTY" : "THE STACK IS NOT EMPTY")<<endl;

    cout<<"THE SIZE IS: "<<size_stack(pila)<<endl;

    return 0;
}
