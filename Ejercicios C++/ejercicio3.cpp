/*Escriba el programa para calcular la suma de los cuadrados de los
números entre 1 y 100 */

#include <iostream>
using namespace std;

int suma = 0;
void sumaCuadrados();

int main(int argc, char const *argv[])
{
    sumaCuadrados();
    return 0;
}

void sumaCuadrados(){
for (int i = 1; i <=100; i++)
{
    suma += i * i;
}

cout << "La suma de los cuadrados de los numeros entre 1 y 100 es: " << suma << endl;
}