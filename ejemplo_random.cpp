#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // Limite Maximo
    cout << "Limite Maximo de Randon :" << RAND_MAX << endl << endl;
    
    // Generar 10 numeros randoms
    for (int i=0; i < 10; i++)
    {
    cout<<"numero" << i << ":" <<rand() << endl;
    }
    
    // Gemerar 10 numeros randoms entre el rango de 0 a 99
    for (int i=0; i < 10; i++)
    {
    cout<<"numero" << i + 1 << ":" <<rand() % 100 << endl;
    }
     // Gemerar 10 numeros randoms entre el rango de 0 a 1
    for (int i=0; i < 10; i++)
    {
    cout<<"numero" << i + 1 << ":" <<rand() / float(RAND_MAX)  << endl;
    }
    // Gemerar 10 numeros randoms entre el rango de 9 a 25
    for (int i=0; i < 10; i++)
    {
    cout<<"numero" << i + 1 << ":" << rand() % 9 << rand() % 25  << endl;
    }
    
    return 0;
}