#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

struct sucursal {
    char nombre[50];
    char direccion[50];
    char telefono[20];
    bool activo;
};

typedef struct sucursal *Sucursal;

struct nodoEstructura {
    Sucursal s;
    struct nodoEstructura * siguiente;
};

typedef struct nodoEstructura *Nodo;

Sucursal constructor(char nombre[50], char direccion[50], char telefono[20]);

void mostrar(Sucursal s);

void push(Nodo &pila, Sucursal s);

void pop(Nodo &pila, Sucursal &s);

bool empty_stack(Nodo &pila);

int size_stack(Nodo &pila);

#endif // PILA_H_INCLUDED
