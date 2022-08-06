#include <iostream>
using namespace std;

int sumaDivisores1(int n){
    int result = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            result += i;
        }
    }
    return result;
}

int sumaDivisores2(int n){
    int result = 0;
    int i = 1;
    while (i <= n){
        if (n % i == 0){
            result += i;
        }
        i++;
    }

    return result;
}

int main() {
    cout << sumaDivisores1(20) << " " << sumaDivisores2(10) << endl;
    return 0;
}
