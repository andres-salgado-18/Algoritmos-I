#include <iostream>

using namespace std;

void division(int dividendo, int divisor, int &cociente, int &resto){
    cociente = 0;
    while (dividendo >= divisor){
        dividendo = dividendo - divisor;
        cociente++;
    }
    resto = dividendo;

}

int main(){
    int dividendo, divisor, cociente, resto;
    cin >> dividendo >> divisor;
    division(dividendo, divisor, cociente, resto);
    cout << "Cociente: " << cociente << endl;
    cout << "Resto: " << resto << endl;
    return 0;
}
