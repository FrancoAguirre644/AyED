#include <iostream>
#include "Cola.h"

using namespace std;

int main()
{
    Nodo frente = NULL;
    Nodo fin = NULL;
    int valor;

    push(frente, fin, 5);
    push(frente, fin, 6);
    push(frente, fin, 7);

    while(frente != NULL) {
        pop(frente, fin, valor);
        cout<<"VALOR: "<<valor<<endl;
    }

    return 0;
}
