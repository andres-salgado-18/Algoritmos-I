#include "ejercicios.h"

using namespace std;

int main() {
    int n = 1; int hasta = 100; int paso = 10;
    ofstream fout;
    fout.open("mediciones.csv");
    fout << "n\t" << "tiempo" <<endl;
    while(n < hasta){
        vector<int> v = construir_vector(n, "asc");
        double t0=clock();
        hayDuplicados(v);
        double t1 = clock();
        double tiempo = (double(t1-t0)/CLOCKS_PER_SEC);
        fout << n << "\t" << tiempo << endl;
        n +=paso;
    }
    fout.close();
    return 0;
}