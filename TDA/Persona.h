#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

struct persona {
    char nombre[20];
    char apellido[20];
    int dni;
    int edad;
};

typedef struct persona *Persona;

Persona constructor(char nombre[20], char apellido [20], int dni, int edad);

char *getNombre(Persona p);
void setNombre(Persona p, char nombre[20]);

char *getApellido(Persona p);
void setApellido(Persona p, char apellido[20]);

int getDNI(Persona p);
void setDNI(Persona p, int dni);

int getEdad(Persona p);
void setEdad(Persona p, int edad);

void mostrar(Persona p);

void destructor(Persona p);

#endif // PERSONA_H_INCLUDED
