#include <iostream>

using namespace std;

int datosCirculo(float radio, float& diametro, float& area, float& circunferencia){
    diametro = 2*radio;
    circunferencia = 3.14159*diametro;
    area = 3.14159*radio;
    return 0;
}

int main() {
    //Manejando referencia y copia, input el radio y paso por ref los valores calculados.
    float diametro, area, radio, circunferencia;
    cout << "Radio: " << endl;
    cin >> radio;
    cout << datosCirculo(radio, diametro, area, circunferencia) << endl;
    cout << "Diametro: " << diametro << endl;
    cout << "Area: " << area << endl;
    cout << "Circunferencia: " << circunferencia << endl;

    return 0;
}
