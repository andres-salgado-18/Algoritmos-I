#include <iostream>

using namespace std;
int promediarNotas(){

    int i = 1;
    int result = 0;
    int count;
    while (i <= 10){
        cout << "Ingrese nota: " << endl;
        cin >> count;
        result += count;
        i++;
    }
    return result/10;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    cout << promediarNotas() << endl;
    return 0;
}
