#include <iostream>

using namespace std;

int triplicaPorValor(int x){
    return x*3;
}

void triplicaPorReferencia(int& x){
    x = x*3;
}


int main() {
    int x = 10;
    int y = 15;
    triplicaPorReferencia(y);
    cout << triplicaPorValor(x) << y << endl;
    return 0;
}
