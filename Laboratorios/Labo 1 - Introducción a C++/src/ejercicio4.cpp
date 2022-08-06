#include <iostream>
using namespace std;

bool esPrimo(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    cout << esPrimo(50) << endl;
    return 0;
}
