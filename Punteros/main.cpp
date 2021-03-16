#include <iostream>
#define N 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

// Prototipo de funciones

void ejercicio_1();
void ejercicio_2();
void ejercicio_3();
void ejercicio_4();
void ejercicio_5();
void ejercicio_6();
void ejercicio_7();
void ejercicio_8();
void ejercicio_9();
void ejercicio_10();

void ejercicio_1(){
    int *p1;
    int *p2;
    //podia haber hecho "int *p1 = new int;" directamente en la primera línea
    p1 = new int; //Reservo memoria para almacenar un entero en el puntero p1
    cout << "en  p1 = new int; ...  p1 = " << p1 << endl;  // Imprimo la posicion de memoria de p1
    *p1 = 15; //luego de reservar memoria guardo un int
    cout << "en  *p1 = 15; ...   *p1 = " << *p1 << " --- y p1 = " << p1 << endl;
    p2 = p1; //p2 apunta a la misma posición que apunta p1
    cout << "en  p2=p1 ...   p1 = " << p1 << " p2 = " << p2 << endl;

    cout << endl << "Pre delete p1 --- *p2 = " << *p2 << endl;
    delete p1;//libero la posición  de memoria a la que apuntaba p1 (y por lo tanto p2 tampoco encotrará algo en la sdireción a la que apunta)

    cout << "Post delete p1 (*p2 tendra basura)--- *p2 = " << *p2 << endl;
}

void ejercicio_2(){
    int num, *p;

     num = 20; //Guardo un entero (dóde hay memoria reservada para ese entero)
     p = &num; //p apunta a la posición de memoria dóde se guarda el contenido de num

    cout << "Numero mostrado con *p = " << *p <<endl
         << "Numero mostrado con num = "<<num<<endl
         << "Direccion de memoria del numero mostrada con &p = " << &p <<endl
         << "Direccion de memoria del numero mostrada con p = " << p <<endl
         << "Direccion de memoria del numero mostrada con &num = "<<&num<< endl;
         
         /* "&p" imprime la dirección en la memoria principal donde se almacena el puntero, en comparación
          con la "p" que imprime el contenido almacenado en esa dirección de memoria, que en su caso es
          la dirección de la variable "num" */
}

void ejercicio_3(){
    int num, *p;

    cout << "Ingrese un numero: ";
    cin>>num; //Guardo un entero (dóde hay memoria reservada para ese entero)
    p = &num; //p apunta a la posición de memoria dóde se guarda el contenido de num

    if(*p%2==0){ // Si el valor del puntero es par
        cout << "El numero: "<< *p << " es par "<<endl; // imprimo el valor del puntero
        cout << "Direccion de memoria del numero: " << p << endl; // imprimo la posicion de memeoria adonde apunta
    }else{ // Si el valor del puntero no es par
        cout << "El numero: "<< *p << " es impar "<<endl; // imprimo el valor del puntero
        cout << "Direccion de memoria del numero: " << p << endl; // imprimo la posicion de memeoria adonde apunta
    }
}

void ejercicio_5() {
    int arreglo[]={1,23,17,4,-5,100};
    int *ptr;
    int i;
    ptr=&arreglo[0];
    for(i=0;i<6;i++)
    {                                    												//linea  (0) (1) (2) (3) (4)  (5)
    cout <<"linea ("<<i<<") "<<arreglo[i]<<" ";	// Valor en la posicion de "i"					// 1, 23, 17, 4, -5, 100
    cout <<" "<<*ptr+i<<" "; // // Valor del puntero (1) + "i"                 					// 1,  2,  3, 4,  5,   6
    cout <<" "<<*(ptr+i)<<" ";  // Accede al valor en la memoria del puntero + "i"              // 1, 23, 17, 4, -5, 100
    cout <<" "<<*ptr<<" ";  // Imprime el valor del puntero                   					// 1,  1,  1, 1,  1,   1
    cout <<" "<<i<<" "; // Imprime el valor del iterador "i"                        			// 0,  1,  2, 3,  4,   5
    cout<<endl;
    }
}

void ejercicio_6()
{
    int *punt; // Declaro un puntero
	
    int x=7;   // Declaro una variable y le asigno el valor 7

    int y=5;   // Declaro otra variable y le asigno el valor 5

    punt=&x;   // el puntero ahora apunta a la posicion de la variable x

    *punt=4;   // cambiamos el valor del puntero a 4, por lo tanto x ahora vale 4 tambien

    cout <<x<<","<<y<<endl; // Imprime 4 y 5 
}

void ejercicio_7()
{
    int *punt; // Declaro un puntero
    int x=7;   // Declaro una variable y le asigno el valor 7
    int y=5;   // Declaro otra variable y le asigno el valor 5

    punt=&x;   // El puntero ahora apunta a la posicion de memoria donde se encuentra la variable x

    x=4;	   // la variable x ahora vale 4, y por lo tanto el valor del puntero tambien es 4

    cout <<*punt<<","<<y<<endl; // Imprime 4 y 5

}

void ejercicio_8()
{
    int *punt;	// Declaro un puntero
    int x=7;	// Declaro una variable y le asigno el valor 7
    int y=5;	// Declaro otra variable y le asigno el valor 5

    punt=&x;	// El puntero ahora apunta a la posicion de memoria donde se encuentra la variable x

    x=4;		// la variable x ahora vale 4, y por lo tanto el valor del puntero tambien es 4

    punt=&y;	// El puntero ahora apunta a la posicion de memoria donde se encuentra la variable y

    cout <<*punt<<","<<x<<endl;	 // Imprime 5 y 4

}

void ejercicio_9()
{
    int *punt;	// Declaro un puntero
    int x=7;	// Declaro una variable y le asigno el valor 7
    int y=5;	// Declaro otra variable y le asigno el valor 5

    punt=&x;	// El puntero ahora apunta a la posicion de memoria donde se encuentra la variable x

    *punt=3;	// El valor del puntero es 3

    punt=&y;	// El puntero ahora apunta a la posicion de memoria donde se encuentra la variable y

    *punt=x;	// El valor del puntero ahora es x = 7

    x=9;		// El valor de la variable x ahora es 9

    *punt=x;	// El valor del puntero ahora es x = 9

    cout<<*punt<<","<<x<<endl; // Imprime 9 y 9

}

void ejercicio_10()
{
    int *punta, *puntb;	// Declaro dos punteros
    int x=7; // Declaro una variable y le asigno el valor 7
    int y=5; // Declaro una variable y le asigno el valor 5

    punta=&x; // El puntero "punta" ahora apunta a la posicion de memoria donde se encuentra la variable x

    *punta=3; // El valor del puntero "punta" es 3

    puntb=&y; // El puntero "puntb" ahora apunta a la posicion de memoria donde se encuentra la variable y

    *puntb=x; // El valor del puntero "puntb" ahora es x (3)

    x=9; // El valor de la variable X ahora es 9

    cout<<*punta<<","<<*puntb<<","<<x<<endl; // Imprime 9, 3, 9

}

int main(int argc, char** argv) {
	
	ejercicio_1();
	cout<<"----------------------------------------------------------------------"<<endl;
	ejercicio_2();
	cout<<"----------------------------------------------------------------------"<<endl;
	ejercicio_3();
	cout<<"----------------------------------------------------------------------"<<endl;
	ejercicio_5();
	cout<<"----------------------------------------------------------------------"<<endl;
	ejercicio_6();
	cout<<"----------------------------------------------------------------------"<<endl;
	ejercicio_7();
	cout<<"----------------------------------------------------------------------"<<endl;
	ejercicio_8();
	cout<<"----------------------------------------------------------------------"<<endl;
	ejercicio_9();
	cout<<"----------------------------------------------------------------------"<<endl;
	ejercicio_10();
	
	return 0;
}


