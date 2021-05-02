#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

struct nodoEstructura {
    int valor;
    struct nodoEstructura *siguiente;
};

typedef struct nodoEstructura *Nodo;

void push(Nodo &frente, Nodo &fin, int valor);

void pop(Nodo &frente, Nodo &fin, int &valor);

#endif // COLA_H_INCLUDED
