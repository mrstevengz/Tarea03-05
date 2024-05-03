/*Diseña un programa que solicite al usuario ingresar dos matrices y
luego realice la multiplicación de matrices. Asegúrate de que las
dimensiones de las matrices sean compatibles para la multiplicación y
muestra la matriz resultante.*/

#include <iostream>
using namespace std;

void matriztranspuesta();

int main(int argc, char const *argv[])
{
    matriztranspuesta();
    return 0;
}

void matriztranspuesta(){
    int n, m;
    cout << "Ingresa las filas y columnas de la matriz ";
    cin >> n >> m;

    int matrix[n][m];
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Matriz transpuesta: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}