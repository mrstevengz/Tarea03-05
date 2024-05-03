/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/

#include <iostream>
using namespace std;

int notas[10];
int suma = 0;

void promedioNotas();

int main(int argc, char const *argv[])
{
    promedioNotas();
    return 0;
}

void promedioNotas(){
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese las notas de cada estudiante: " << endl;
        cin >> notas[i];
        suma = suma + notas[i];
    }

    cout << "El promedio total es: " << suma / 10 << endl;
    }



