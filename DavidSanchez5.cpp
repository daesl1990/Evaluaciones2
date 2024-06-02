//ejercicio 5


#include <iostream>
using namespace std;

int main() {
    double numero1, numero2;

    cout << "Introduce el primer número: ";
    cin >> numero1;

    cout << "Introduce el segundo número: ";
    cin >> numero2;

    double diferencia = numero1 - numero2; 
    double resultado = diferencia * diferencia;

    cout << "El cuadrado de la diferencia entre " << numero1 << " y " << numero2 << " es: " << resultado << endl;

    return 0;
}

