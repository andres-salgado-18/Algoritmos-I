#include <iostream>
using namespace std;


int sumaImpares1(int n){
    int result = 0;
    for (int i = 1; i < n; i++){
        if (i % 2 != 0){
            result = result + i;
        }
    }
    return result;
}

int sumaImpares2(int n){
    int result = 0;
    int i = 1;
    while(i < n){
        if (i % 2 != 0){
            result = result + i;
        }
        i++;
    }
    return result;
}

int main() {
    cout << sumaImpares1(7) << sumaImpares2(11) << endl;
    return 0;
}
