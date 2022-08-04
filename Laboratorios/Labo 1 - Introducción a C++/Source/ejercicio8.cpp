#include <iostream>

using namespace std;

int factorial(int n){
    int result = 1;
    for (int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}

int combinatorio(int n, int k){
    int result = factorial(n)/(factorial(k)* factorial(n-k));
    return result;
}

//FALTA HACER CON LA IGUALDAD RECURSIVA

int main() {

    cout << combinatorio(4,2) << endl;
    return 0;
}
