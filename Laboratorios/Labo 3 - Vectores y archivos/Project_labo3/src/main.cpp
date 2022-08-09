#include "generador.h"
#include "vectores.h"

using namespace std;

int main() {
    // funcion para generar automaticamente los archivos numericos
    // generarDatosLaboratorio(); // descomentar para crear automaticamente los archivos necesarios en la parte de entrada-salida. Una vez creados, se puede volver a comentar
    holaModuloVectores(); // función definida en vectores.cpp

    vector<int> v(4); // <0,0,0,0>
    v[0] = 7; // <7,0,0,0>
    v[1] = 14; // <7,14,0,0>
    v[2] = 28; // <7,14,1,0>
    v[3] = 63;

    cout << divide(v,7) << endl;
    cout << mayor(v) << endl;
    mostrarVector(reverso(v));
    mostrarVector(rotar(v,1));
    mostrarVector(factoresPrimos(100));










    return 0;
}
