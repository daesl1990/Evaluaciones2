//ejercicio 1


#include <iostream>
using namespace std;

int main() {
    double numero; // Variable para almacenar el n�mero ingresado

    cout << "Introduce un numero: ";
    cin >> numero;

    double mitad = numero / 2; // Calculamos la mitad del n�mero
    double quinta_parte = numero / 5; // Calculamos la quinta parte del n�mero
    double resultado = mitad + quinta_parte; // Sumamos la mitad y la quinta parte

    cout << "La mitad de " << numero << " mas su quinta parte es: " << resultado << endl;

    return 0;
}

