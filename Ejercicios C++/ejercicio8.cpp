/*Crea un programa que permita al usuario ingresar dos vectores de la
misma longitud y luego calcule su producto punto. Muestra el resultado
al finalizar el cálculo */

#include <iostream>
using namespace std;

void productoPunto();

int main(int argc, char const *argv[])
{
    productoPunto();
    return 0;
}


void productoPunto()
{
    int n;
    int vector1[n];
    int vector2[n];
    int productop = 0;

    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

for (int i = 0; i < n; i++){
    cout << "Ingrese los valores del vector 1: ";
    cin >> vector1[i];
}

for (int i = 0; i < n; i++){
    cout << "Ingrese los valores del vector 2: ";
    cin >> vector2[i];
}

for (int i = 0; i < n; i++) {
        productop += vector1[i] * vector2[i];
}
cout << "El producto punto de los vectores es: " << productop << endl;

}
