// Importacion bibliotecas basicas c++
#include <stdlib.h>
#include <iostream>
using namespace std;

// metodo main , es metodo principal dle programa , es el primero en correr
int main(int argc, char const *argv[])
{
    //declaracion variable float 
    float x,y,r;

    // cout  crea un output en c++
    cout << "ingresa un numero" << endl;

    // escritura de una variable en c++ >> significa que va a escribir a esa variable
    cin >>x;

    cout << "ingresa otro numero" << endl;

    cin >>y;

    r= x+y;

    // en cout "<<" se usa para escribir otra variable o argumentos
    cout << "El valor total de la suma es" << r << endl;

    return 0;
}

