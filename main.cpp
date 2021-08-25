#include <iostream>

using namespace std;

int main()
{
    int prueba=7; //se declaran antes
    int prueba2=8;
    // el * es un apuntador de indireccion, por que puede obetener la direccion de lo que se apunta
    int *ptr=&prueba; // para trabajar con apuntadores se necesita un operador que indique que es un apuntador el (*)
    int *ptr2=&prueba2; // lo que se hace con el amperson que el apuntador busque la direccion de prueba
    int *tmp=new int; //aúntador temporal
    //el apuntador necesita una direccion basicamente guarda una nueva direccion de memoria el (new int) es memoria dinamica

    //tmp=ptr2+4; no lo puede sumar a nivel de bits asi que estaria mal

    *ptr=*ptr+*ptr2; // para sumar elementos dentro
    //ptr=ptr+ptr2; // invalid

    //int **apuntador=ptr;//es un apuntador que apunta a otro apuntador y ese apuntador a un espacio en memoria

    tmp=ptr; //lo unico que si esta sobrecargado y se puede es el (=)
    ptr2=ptr;

    *tmp=18; //para asignar a un apuntador es necesario el asterisco antes no lo olvides


    //cout<<**apuntador<<endl;//para obtener el dato es con los dos (*) en el caso que sea anidacion de apuntadores
    cout<<*tmp<<endl;
    cout<<*ptr<<endl;// muestro el apuntador 1(las direcciones)
    //cout<<*ptr2<<endl;// muestro el apuntador 2(las direcciones)

    return 0;
}
//no se puede sumar, restar, division, y multiplicacion dos direcciones a menos que este sobrecargado
