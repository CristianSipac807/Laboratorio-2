#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero[100][100], filas, columnas;

    cout <<"Ingrese el numero de filas: ";
    cin >>filas;
    cout <<"Ingrese el numero de columnas: ";
    cin>>columnas;
    cout << "\n";

    //almacenando elementos en la matriz
    for (int i=0; i<filas;i++) //controla las filas
    {
        for (int j=0; j<columnas; j++)
        {
            cout<<"Digite un numero en la posicion "<< i << j << ":"; //se le mostrara en que posicion se aguarda el numero
            cin >> numero [i][j];
        }
    }
    cout << "\n";

    //mostrando la matriz
    for (int i=0; i<filas;i++)
    {
        for(int j=0; j<columnas; j++)
            {
                cout << numero[i][j] << " ";
            }
            cout<< "\n";
    }
    return 0;
}
