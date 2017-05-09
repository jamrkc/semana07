#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    //Variables
    int numero = 20;
    string texto = "UTEC";
    
    //Punteros a variables
    int* ptrNumero = &numero;
    string* ptrTexto = &texto;
    
    //Imprimiendo los valores de las variables usando operador *
    cout << "El valor de numero es: " << *ptrNumero << endl;
    cout << "El valor de texto es: " << *ptrTexto << endl;
    return 0;
}