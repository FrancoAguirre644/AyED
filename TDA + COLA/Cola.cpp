#include "Cola.h"
#include <cstddef>

void push(Nodo &frente, Nodo &fin, int valor) {
    Nodo nuevo_nodo = new (struct nodoEstructura);
    nuevo_nodo->valor = valor;
    nuevo_nodo->siguiente = NULL;

    if(frente == NULL) {
        frente = nuevo_nodo;
    } else {
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;
}

void pop(Nodo &frente, Nodo &fin, int &valor) {
    Nodo aux = frente;
    valor = aux->valor;

    if(frente == fin) {
        fin = NULL;
        frente = NULL;
    } else {
        frente = frente->siguiente;
    }

    delete aux;
}
