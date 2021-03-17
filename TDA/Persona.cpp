#include "Persona.h"
#include <iostream>
#include <string.h>

using namespace std;

Persona constructor(char nombre[20], char apellido [20], int dni, int edad) {
    Persona p = new (struct persona);
    strcpy(p->nombre, nombre);
    strcpy(p->apellido, apellido);
    p->dni = dni;
    p->edad = edad;

    return p;
}

char *getNombre(Persona p) {
    return p->nombre;
}

void setNombre(Persona p, char nombre[20]) {
    strcpy(p->nombre, nombre);
}

char *getApellido(Persona p) {
    return p->apellido;
}

void setApellido(Persona p, char apellido[20]) {
    strcpy(p->apellido, apellido);
}

int getDNI(Persona p) {
    return p->dni;
}

void setDNI(Persona p, int dni) {
    p->dni = dni;
}

int getEdad(Persona p) {
    return p->edad;
}

void setEdad(Persona p, int edad) {
    p->edad = edad;
}

void mostrar(Persona p) {
    cout<<"--------------------------"<<endl;
    cout<<"Nombre: "<<p->nombre<<endl;
    cout<<"Apellido: "<<p->apellido<<endl;
    cout<<"DNI: "<<p->dni<<endl;
    cout<<"Edad: "<<p->edad<<endl;
    cout<<"--------------------------"<<endl;
}

void destructor(Persona p) {
    delete p;
}
