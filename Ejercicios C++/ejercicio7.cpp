/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/

#include <iostream>
using namespace std;

void sumaVectores();

int main(int argc, char const *argv[])
{
    sumaVectores();
    return 0;
}


void sumaVectores()
{
    int n;
    int vector1[n];
    int vector2[n];
    int vectorf[n];

    cout << "Ingrese la longitud de los vectores: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor del vector 1 en la posicion " << i + 1 << ": ";
        cin >> vector1[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el valor del vector 2 en la posicion " << i + 1 << ": ";
        cin >> vector2[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        vectorf[i] = vector1[i] + vector2[i];
    }

    cout << "La suma de los vectores es: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << vectorf[i] << " ";
    }


}

