#include <iostream>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

struct nodoEstructura {
	int valor;
	struct nodoEstructura* siguiente;
};

typedef struct nodoEstructura * Nodo;

void insertar_nodo(Nodo &, int);
void eliminar_nodo(Nodo &);
void mostrar_lista(Nodo &);
bool esta_vacia(Nodo &);

void insertar_nodo(Nodo &lista, int valor) {
	Nodo nuevo_nodo = new (struct nodoEstructura);
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

void eliminar_nodo(Nodo &lista) {
	Nodo aux = lista;
	if(!esta_vacia(aux)) {
		lista = aux->siguiente;
		delete aux;		
	}
}

void mostrar_lista(Nodo &lista) {
	Nodo aux = lista;
	
	while(!esta_vacia(aux)) {
		cout<<aux->valor<<", ";
		aux = aux->siguiente;
	}
	
}

int largo(Nodo &lista) {
	Nodo aux = lista;
	int largo = 0;
	
	while(!esta_vacia(aux)) {
		aux = aux->siguiente;
		largo++;
	}
	
	return largo;
}

bool esta_vacia(Nodo &lista) {
	return (lista == NULL);
}

int main(int argc, char** argv) {
	
	Nodo lista = NULL;
	int valores[10];
	
	for(int i=0;i<(sizeof(valores)/sizeof(*valores));i++) {
		valores[i] = rand() % 100;
	}
	
	for(int i=0;i<(sizeof(valores)/sizeof(*valores));i++) {
		insertar_nodo(lista, valores[i]);
	}
	
	mostrar_lista(lista);
	
	cout<<endl<<endl<<(esta_vacia(lista) ? "LA LISTA ESTA VACIA" : "LA LISTA NO ESTA VACIA ")<<endl;
	
	cout<<"EL LARGO DE LA LISTA ES: " << largo(lista) <<endl;
	
	while(!esta_vacia(lista)) {
		eliminar_nodo(lista);
	}
	
	cout<<"EL LARGO DE LA LISTA ES: " << largo(lista) <<endl;
	
	cout<<(esta_vacia(lista) ? "LA LISTA ESTA VACIA" : "LA LISTA NO ESTA VACIA ")<<endl;
	
	return 0;
}
