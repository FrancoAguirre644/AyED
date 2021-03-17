#include <iostream>
#include "Persona.h"

using namespace std;

/*
Un TDA es una abstracci�n matem�tica que encapsula una colecci�n de atributos accesibles solo mediante un
conjunto de operaciones v�lidas.

Abstraer consiste en clasificar los atributos de la entidad en estudio y descartar aquellos que resultan irrelevantes.

Un TDA se compone de:
* Tipo de Dato
* Axiomas
* Operaciones
* PreCondiciones y PostCondiciones

Componentes (Tipo de Dato)

* Representaci�n de un tipo.
* Los datos de un TDA se llaman atributos.

Componentes (Axiomas)

Los axiomas son proposiciones l�gicas que deben cumplirse siempre. Son aceptadas sin requerir una demostraci�n previa.

Componentes (Operaciones)

* Las operaciones son tambi�n llamadas primitivas y es el �nico v�nculo entre el usuario y el TDA. No existe ninguna otra
forma de interactuar con ellos.
* Debe ser un conjunto tal que permita el correcto desempe�o del TDA para el contexto en el que fue concebido.
* La cantidad de operaciones debe ser lo menor posible para disminuir la �superficie de contacto�, es decir los
puntos de dependencia del TDA.
Siempre el primer par�metro de una operaci�n es una instancia del TDA.
* Operaciones obligatorias -> constructor, destructor, getters y setters.


*/

int main()
{
    Persona p1 = constructor("Franco", "Aguirre", 42589637, 21);
    Persona p2 = constructor("Emilio", "Ravenna", 42589638, 54);
    Persona p3 = constructor("Mario", "Santos", 42589637, 36);
    Persona p4 = constructor("Gabriel", "Medina", 42589637, 41);

    mostrar(p1);
    mostrar(p2);
    mostrar(p3);
    mostrar(p4);

    setNombre(p1, "Pablo");
    setApellido(p1, "Lamponne");
    setDNI(p1,26985712);
    setEdad(p1,37);

    mostrar(p1);

    destructor(p1);
    destructor(p2);
    destructor(p3);
    destructor(p4);

    return 0;
}
