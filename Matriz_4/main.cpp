#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));

    int ancho,alto, numero;

    cout << "Ingresa el ancho de la matriz: ";
    cin >>alto;
    cout << "Ingresa el alto de la matriz: ";
    cin >>ancho;

    for (int i=0; i<ancho; i++){
        for(int j=0; j<alto;j++){
            numero = rand () % 1000;
            cout << numero << " ";
        }
        cout << endl;
    }
}
