//ejercicio 4


#include <iostream>
using namespace std;

int main() {
    double numero1, numero2; 

    cout << "Introduce el primer numero: ";
    cin >> numero1;

    cout << "Introduce el segundo numero: ";
    cin >> numero2;

    double suma = numero1 + numero2; 
    double resultado = suma * suma; 

    cout << "El cuadrado de la suma de " << numero1 << " y " << numero2 << " es: " << resultado << endl;

    return 0;
}

