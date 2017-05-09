#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    int x = 10;
    cout << "El valor de x es :"<< x << endl;
    cout << "La direccion de x es :" << &x << endl;   //Direccion de la variable
    cout << "La tamaño de x es :" << sizeof(x) << endl;   //Tamaño 
    
    //Variable puntero
    int* ptrX; // Nomenclatura camello Ejemplo: nombreArchivo
               // Nomenclatura C       Ejemplo: nombre_archivo
    
    //Asignando la direccion de X al puntero ptrX           
    ptrX = &x;
    cout << "El valor de ptrX es :"<< ptrX << endl;
    cout << "La direccion de ptrX es :" << &ptrX << endl;   //Direccion de la variable
    cout << "El tamaño ptrX es :" << sizeof(ptrX) << endl;   //Tamaño 
    
    
    
    return 0;
}