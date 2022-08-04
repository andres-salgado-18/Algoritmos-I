#include <iostream>
using namespace std;

int sumar(int x, int y){
    if (x > y){
        return x + y;
    }
    else{
        return x*y;
    }
}
int main () {
    cout << "El resultado es: " << sumar(10,14) << endl ;
    return 0;
}
