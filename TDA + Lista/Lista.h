#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

struct nodoEstructura {
    int valor;
    struct nodoEstructura *siguiente;
};

typedef struct nodoEstructura * Nodo;

void insertar_nodo(Nodo &, int);

void eliminar_nodo(Nodo &, int &);

bool esta_vacia(Nodo &);

int size_lista(Nodo &);


#endif // LISTA_H_INCLUDED
