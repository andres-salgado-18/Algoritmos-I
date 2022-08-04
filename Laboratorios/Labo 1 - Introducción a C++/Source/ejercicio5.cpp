#include <iostream>
using namespace std;
//INICIA EN N=2, POR ESO EL INDICE I = 2
int nEsimoFib1(int n){
    int i = 2;
    int fn_2 = 0;
    int fn_1 = 1;
    while (i <= n){
        int fn_2A = fn_2;
        fn_2 = fn_1;
        fn_1 = fn_2A  + fn_1;
        i++;
    }
    return fn_1;
}
int nEsimoFib2(int n){
    int fn_2 = 0;
    int fn_1 = 1;
    for (int i = 2; i <= n; i++){
        int fn_2A = fn_2;
        fn_2 = fn_1;
        fn_1 = fn_2A  + fn_1;
    }
    return fn_1;
}

int nEsimoFib3(int n) {
    if (n == 1 || n == 0) {
        return (n);
    } else {
        return (nEsimoFib3(n - 2) + nEsimoFib3(n - 1));
    }
}
int main () {
    cout << "El resultado es: " << nEsimoFib3(4) << nEsimoFib1(5) << nEsimoFib2(6)  << endl ;
    return 0;
}
