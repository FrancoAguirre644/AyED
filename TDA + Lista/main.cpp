#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    Nodo lista = NULL;
    int numeros [] = { 58, 11, 14 ,36, 86, 12, 57, 22, 66, 99, 15, 70 };
    int valor;

    for(int i=0;i<(sizeof(numeros)/sizeof(*numeros));i++) {
        insertar_nodo(lista, numeros[i]);
    }

    cout<<"EL LARGO DE LA LISTA ES: "<<size_lista(lista)<<endl;

    while(lista != NULL) {
        eliminar_nodo(lista, valor);
        cout<<valor<<endl;
    }

    return 0;
}
