//ejercicio 2


#include <iostream>
using namespace std;

int main() {
    double x, y, z;

    cout << "Introduce el valor de x: ";
    cin >> x;

    cout << "Introduce el valor de y: ";
    cin >> y;

    cout << "Introduce el valor de z: ";
    cin >> z;

    double cuadrado_x = x * x; 
    double cuadrado_y = y * y; 
    double cubo_z = z * z * z; 
    double resultado = cuadrado_x + cuadrado_y + cubo_z;

    cout << "El resultado es: " << resultado << endl;

    return 0;
}

