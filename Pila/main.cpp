#include <iostream>
#include "Pila.h"

using namespace std;

/*

Una pila (stack en ingl�s) es una lista ordinal o estructura de datos en la que el modo de acceso a sus elementos
es de tipo LIFO (del ingl�s Last In First Out, �ltimo en entrar, primero en salir) que permite almacenar
y recuperar datos. Esta estructura se aplica en multitud de ocasiones en el �rea de inform�tica debido a su simplicidad
y ordenaci�n impl�cita de la propia estructura.
Para el manejo de los datos se cuenta con dos operaciones b�sicas: apilar (push), que coloca un objeto en la pila,
y su operaci�n inversa, retirar (o desapilar, pop), que retira el �ltimo elemento apilado.

Si hici�ramos analog�a con objetos cotidianos, Por una operaci�n apilar (Push) equivaldr�a a colocar un plato sobre una
pila de platos, y una operaci�n desapilar (Pop) a retirarlo.

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
