#include <iostream>

using namespace std;

int main()
{
    int matriz1[2][2] = {{1,2},{3,4}};
    int matriz2[2][2];

    //copiando matriz 1 y 2
    for (int i=0; i<3;i++) //controla las filas
    {
        for (int j=0; j<3; j++)
        {
            matriz2[i][j] = matriz1 [i][j];
        }
    }

    for (int i=0; i<3;i++) //controla las filas
    {
        for (int j=0; j<3; j++)
        {
            cout <<matriz2[i][j];
        }
    }

    return 0;
}
