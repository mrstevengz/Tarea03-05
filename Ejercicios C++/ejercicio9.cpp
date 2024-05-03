/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>
using namespace std;

void multmatrices();

int main(int argc, char const *argv[])
{
    multmatrices();
    return 0;
}

void multmatrices(){
    int n, m, f, c;
    cout << "Ingresa las filas y columnas de la primera matriz ";
    cin >> n >> m;
    cout << "Ingresa las filas y columnas de la segunda matriz ";
    cin >> f >> c;

    int matriza[n][m];
    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matriza[i][j];
        }
    }
    int matrizb[f][c];
    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrizb[i][j];
        }
    }
    cout << "Multiplicacion de la matrices: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriza[i][j] * matrizb[i][j] << " ";
        }
        cout << endl;
    }
}
