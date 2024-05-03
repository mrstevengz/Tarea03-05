/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.*/

#include <iostream>
using namespace std;

void numNaturales();

int main(int argc, char const *argv[])
{
   numNaturales();
    return 0;
}

void numNaturales(){
    int n;
    cout << "Escriba un numero natural: ";
    cin >> n;

    int suma = 0;
    for (int i = 1; i <= n; i++)
    {
        suma += i; 
    }
    cout << "La suma de los numeros naturales es: " << suma << endl;
}

