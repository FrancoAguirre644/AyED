#include "Pila.h"
#include <iostream>
#include <string.h>

using namespace std;

Sucursal constructor(char nombre[50], char direccion[50], char telefono[20]) {
    Sucursal nueva_sucursal = new (struct sucursal);
    strcpy(nueva_sucursal->nombre, nombre);
    strcpy(nueva_sucursal->direccion, direccion);
    strcpy(nueva_sucursal->telefono, telefono);
    nueva_sucursal->activo = true;

    return nueva_sucursal;
}

void mostrar(Sucursal s) {
    cout<<"--------------------"<<endl;
    cout<<"NOMBRE:"<<s->nombre<<endl;
    cout<<"DIRECCION:"<<s->direccion<<endl;
    cout<<"TELEFONO:"<<s->telefono<<endl;
    cout<<"ACTIVO:"<<s->activo<<endl;
    cout<<"--------------------"<<endl;
}
