#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

struct estructuraNodo {
	int valor;
	struct estructuraNodo* izq;
	struct estructuraNodo* der;
};

typedef estructuraNodo* Nodo;

void insertarNodo(Nodo &raiz, int valor) {
	if(raiz == NULL) {
		Nodo nuevo_nodo = new (struct estructuraNodo);
		nuevo_nodo->valor = valor;
		nuevo_nodo->izq = NULL;
		nuevo_nodo->der = NULL;
		raiz = nuevo_nodo;
	} else {
		if(raiz->valor > valor) {
			insertarNodo(raiz->izq, valor);
		} else if(raiz->valor < valor) {
			insertarNodo(raiz->der, valor);
		}
	}
}

void preOrden(Nodo &raiz) {
	if(raiz != NULL) {
		cout<< raiz->valor << ", ";
		preOrden(raiz->izq);
		preOrden(raiz->der);
	}
}

void inOrden(Nodo &raiz) {
	if(raiz != NULL) {
		inOrden(raiz->izq);
		cout<< raiz->valor << ", ";
		inOrden(raiz->der);
	}
}

void postOrden(Nodo &raiz) {
	if(raiz != NULL) {
		postOrden(raiz->izq);
		postOrden(raiz->der);
		cout<< raiz->valor << ", ";
	}
}

bool buscar(Nodo &raiz, int valor) {
	if(raiz != NULL) {
		if(raiz->valor == valor) {
			return true;
		} else if(raiz->valor > valor) {
			buscar(raiz->izq, valor);
		} else if(raiz->valor < valor) {
			buscar(raiz->der, valor);
		}
	} else {
		return false;
	}
} 

int main(int argc, char** argv) {
	
	Nodo arbol = NULL;
	
	int numeros[] = { 10, 50, 90, 85, 75, 80, 5, 40, 45, 60 };
	int size = (sizeof(numeros)/sizeof(*numeros));
	
	for(int i=0;i<size;i++) {
		insertarNodo(arbol, numeros[i]);
	}
		
	preOrden(arbol);
	cout<<endl<<"-----------------------------------------------"<<endl;
	inOrden(arbol);
	cout<<endl<<"-----------------------------------------------"<<endl;
	postOrden(arbol);
	cout<<endl<<"-----------------------------------------------"<<endl;
	
	cout<<(buscar(arbol, 50) ? "Valor encontrado" : "Valor no encontrado")<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<(buscar(arbol, 14) ? "Valor encontrado" : "Valor no encontrado")<<endl;
	
	return 0;
}
