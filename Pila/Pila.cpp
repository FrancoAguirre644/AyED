#include "Pila.h"
#include <iostream>
#include <string.h>

using namespace std;

void push(Nodo &pila, Sucursal s) {
    Nodo nuevo_nodo = new (struct nodoEstructura);
    nuevo_nodo->s = s;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

void pop(Nodo &pila, Sucursal &s) {
    Nodo aux = pila;
    s = aux->s;
    pila = aux->siguiente;
    delete aux;
}

bool empty_stack(Nodo &pila) {
    return (pila == NULL);
}

int size_stack(Nodo &pila) {
    int counter = 0;
    Nodo aux = pila;

    while(!empty_stack(aux)) {
        aux = aux->siguiente;
        counter++;
    }

    return counter;
}
