#include <iostream>
    //int fil;
    //int columna;
    //int Matriz[3][3] //definimos el tamanio de la matriz
using namespace std;

int main()
{
    int matriz [3][3];

    //este for controla el ingreso de datos en la matriz
    for (int i=0; i<3;i++) //controla las filas
    {
        for (int j=0; j<3; j++)
        {
            cout <<"Ingresa un numero: ";
            cin >>matriz[i][j];
        }
    }
    //se imprime en la pantalla
    for (int i=0; i<3;i++) //controla las filas
    {
        for (int j=0; j<3; j++)
        {
            cout <<matriz [i][j] << " ";
        }
        cout << endl;
    }

    //se encuentra la diagonal
    for (int i=0; i<3;i++) //controla las filas
    {
        for (int j=0; j<3; j++)
        {
            if (i==j)
            {
                cout <<matriz[i][j] << endl;
            }
        }
    }

    return 0;
}
