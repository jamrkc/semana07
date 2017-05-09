#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    //Pedir el nombre del archivo
    
    int n;
    string narchivo;
    cout<< "Ingrese el nombre del archivo" << ":" << endl;
    cin >> narchivo;
    ofstream archivo(narchivo);
    
    
    
    
    //Pedir la cantidad de numeros a generar
    
    //archivo<<rand<< endl;
    
    //Pedir el Limite del Rango y validar que no sea mayor a RAND_MAX
       cout<<"Ingrese numero n :" << endl;
       cin>> n;
       for (int i= 0 ; i < n; i++)
       {
           archivo<<"numero" << i + 1 << ":" <<rand() % 10 << endl;
       }
   
    //Generar numeros aleatorios que deberan ser grabados en el archivo(FUNCION)
   
 
    
    //Cerrar el archivo
    archivo.close();
    
    return 0;
}