#include "Lista.h"
#include <cstddef>

void insertar_nodo(Nodo &lista, int valor) {
    Nodo nuevo_nodo = new (nodoEstructura);
    nuevo_nodo->valor = valor;
    Nodo aux_1 = lista;
    Nodo aux_2;

    while((!esta_vacia(aux_1)) && (aux_1->valor < valor)) {
        aux_2 = aux_1;
        aux_1 = aux_1->siguiente;
    }

    if(lista == aux_1) {
        lista = nuevo_nodo;
    } else {
        aux_2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux_1;

}

void eliminar_nodo(Nodo &lista, int &valor) {
    Nodo aux = lista;
    if(!(esta_vacia(aux))) {
        lista = aux->siguiente;
        valor = aux->valor;
        delete aux;
    }
}

bool esta_vacia(Nodo &lista) {
    return (lista == NULL);
}

int size_lista(Nodo &lista) {
    int largo = 0;
    Nodo aux = lista;

    while(!esta_vacia(aux)) {
        largo++;
        aux = aux->siguiente;
    }

    return largo;
}
