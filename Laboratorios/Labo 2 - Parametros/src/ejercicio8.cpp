#include <iostream>
using namespace std;

void collatz(int n, int& cantPasos){
    cantPasos = 1;
    while (n != 1){
        cantPasos++;
        if (n % 2 == 0){
            n = n / 2;
        }
        else{
            n = 3*n + 1;
        }
        cout << n << " ";

    }
    cout << " " << endl;
    cout << cantPasos << endl;

}

int main(){
    int pasos;
    int n;
    cin >> n;
    collatz(n, pasos);

    return 0;
}
