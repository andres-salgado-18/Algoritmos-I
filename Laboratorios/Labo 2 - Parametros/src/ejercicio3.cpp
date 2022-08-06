#include <iostream>

using namespace std;

int aprobar(){
    int i = true;
    int aprobados = 0;
    int desaprobados = 0;
    int count;
    int totalAl = 0;
    while (i){
        cin >> count;
        if (count == -1){
            i = false;
        }else {
            if (count > 6){
                aprobados++;
            }
            else{
                desaprobados++;
            }
            totalAl++;
        }
    }
    if (totalAl < 6){
        cout << "Deben ser más de 6 notas" << endl;
        return 0;
    }else{
        cout << "Aprobados: " << aprobados << endl;
        cout << "Desaprobados: " << desaprobados << endl;

        if ((float(aprobados) / float(totalAl)) > 2/3){
            cout << "Se puede incrementar el numero de plazas" << endl;
        }
        return 1;
    }

}

int main() {
    cout << aprobar() << endl;
    return 0;
}