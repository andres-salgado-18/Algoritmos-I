#include "ejercicios.h"

vector<vector<int>> productoVectorial(vector<int> u, vector<int> v){
    vector<vector<int>> res(u.size(), vector<int>(v.size())); //COPIADO DE LA TEORIA DEL LABO
    for (int i = 0; i < u.size(); i++){
        for(int j = 0; j < v.size(); j++){
            res[i][j] = u[i]*v[j];
        }
    }
	return res;
}

void trasponer(vector<vector<int>> &m) {
    vector<vector<int>> original = m;
    for (int i = 0; i < original.size(); i++){
        for(int j = 0; j < original[1].size(); j++){
            m[i][j] = original[j][i];
        }
    }

}

vector<vector<int> > multiplicar(vector<vector<int> > m1, vector<vector<int> > m2){
	//COMPLETAR
    vector<vector<int>> res(m1.size(), vector<int>(m2[0].size()));
	for(int i = 0; i< m1.size(); i++){
        for(int j = 0 ; j < m2[0].size(); j++){
            int result = 0;
            for (int k = 0; k < m2.size(); k++){
                result += m1[i][k]*m2[k][j];
            }
            res[i][j] = result;
        }
    }
    return res;
}
int promedioVecinos(vector<vector<int>> m, int i, int j){
    int result = 0;
    int vecinos = 0;
    for(int k = i-1; k <= i+1; k++){
        for(int l = j-1; l <= j+1; l++){
            if((0 <= k && k < m.size())  && (0 <= l && l < m[k].size())){
            result += m[k][l];
            vecinos++;
            }
        }
    }
    return result/vecinos;
}

vector<vector<int> > promediar(vector<vector<int> > m){
	//COMPLETAR
	vector<vector<int>>  res(m.size() , vector<int>(m[0].size()));
	for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[0].size(); j++){
            res[i][j] = promedioVecinos(m,i,j);
        }
    }
    return res;
}
bool esPico(vector<vector<int>> m, int i, int j){
    bool pico = true;
    for (int k = i-1; k <= i+1; k++){
        for (int l = j-1; l <= j+1; l++){
            if ((k != i || l != j) && (k >= 0 && k < m.size()) && (l >= 0 && l < m[i].size())){
                pico = pico && m[i][j] > m[k][l]; //SIGUIENDO ESPECIFICACIÓN

            }
        }
    }
    return pico;
}


int contarPicos(vector<vector<int> > m){
	int res = 0;
    for (int i = 0; i < m.size(); i++){
        for(int j = 0; j < m[0].size(); j++){
            if(esPico(m,i,j)){
                res++;
            }
        }
    }
	return res;
}
bool esTriangularInferior(vector<vector<int>> m){
    for (int i = 0; i < m.size(); i++){
        for( int j = 0; j < m[0].size(); j++){
            if (i < j && m[i][j] != 0){
                return false;
            }
        }
    }
    return true;
}
bool esTriangularSuperior(vector<vector<int>> m){
    for (int i = 0; i < m.size(); i++){
        for( int j = 0; j < m[0].size(); j++){
            if (i > j && m[i][j] != 0){
                return false;
            }
        }
    }
    return true;
}

bool esTriangular(vector<vector<int> > m){
	return esTriangularInferior(m) || esTriangularSuperior(m);
}

bool hayAmenaza(vector<vector<int> > m){
	//COMPLETAR
	return true;
}

int diferenciaDiagonales(vector<vector<int> > m) {
    int sumDiagonal1 = 0;
    int sumDiagonal2 = 0;
    for (int i = 0; i < m.size(); i++){
      sumDiagonal1 += m[i][i];
      sumDiagonal2 += m[i][m.size()-1-i]; //Se ve que vale esta diagonal!
    }
    int result = abs(sumDiagonal1-sumDiagonal2);
    return result;
}