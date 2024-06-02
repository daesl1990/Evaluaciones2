//ejercicio 2


#include <iostream>
using namespace std;

int main() {
    double numero;

    cout << "Introduce un numero: ";
    cin >> numero;

    double resultado = (numero - 25) * (numero - 25);

    cout << "El cuadrado del numero disminuido en 25 es: " << resultado << endl;

    return 0;
}
