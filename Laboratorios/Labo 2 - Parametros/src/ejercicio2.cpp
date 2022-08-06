#include <iostream>

using namespace std;
float promediarNotasV2(){
    //Se podría ahorrar esos "fix" con un do {} while {}!
    int result = 1;
    int count;
    int iter = 0;
    //Pongo result = 1, ya que el -1 se computará, así para que el resultado sea correcto res = 1
    while (count != -1){
        cin >> count;
        result += count;
        iter++;
    }
    //Tengo el resultado acumulado correcto, pero una iteración sobrante, asi que corrijo.
    if (iter == 0){ return 0;}
    return result/(iter-1);
}


int main() {
    std::cout << promediarNotasV2() << std::endl;
    return 0;
}