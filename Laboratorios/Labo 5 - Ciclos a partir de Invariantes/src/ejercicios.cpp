#include "ejercicios.h"



// Ejercicio 1

//INVARIANTE I ≡ 1 <= i < |s| ^ res = true <-> (∃k : Z) 1 <= k < i ^ s[k] > s[k - 1] ^ s[k] > s[k + 1]
bool existePico(vector<int> v){
    for(int i = 1; i < v.size()-1;i++){
        if((v[i] > v[i-1]) && (v[i] > v[i+1])){
            return true;
        }
    }
	return false;
}

// Ejercicio 2
// Aplico Algoritmo de Euclides!
// Invariante I ≡ 0 < a <= m ^ 0 < b <= n ^ mdc(a,b) = mcd(m,n)
int mcd(int m, int n){
    int a = m;
    int b = n;
    while (b != 0){
        int remainder = a%b;
        a = b;
        b = remainder;
    }
	return a;
}

// Ejercicio 3
// INVARIANTE I ≡ l-1 <= i <= r ^ l <= res <= r ^ ((∀k:Z) i < k < r --> s[k] >= s[res]
int indiceMinSubsec(vector<int> v, int l, int r){
    int min = r;
    for (int i = r; i >= l; i--){
        if(v[i] < v[min]){
            min = i;
        }
    }

	return min;
}

// Ejercicio 4
void ordenar1(vector<int>& v){
    vector<int> v2 = v;
    for (int i = 0; i < v.size(); i++){
        int min = indiceMinSubsec(v2,0,v2.size()-1);
        v[i] = v2[min];
        v2.erase(v2.begin()+min);
    }
}

// Ejercicio 5
int apariciones(int n, vector<int> v){
    int result = 0;
    for (int i = 0; i < v.size(); i++){
        if(v[i] == n){
            result++;
        }
    }
    return result;
}
//Se puede hacer de mejor manera!
//**ACTUALIZAR**
void ordenar2(vector<int>& v) {
    vector<int> result;
    for (int i = 0; i < apariciones(0, v); i++) {
        result.push_back(0);
    }
    for (int i = 0; i < apariciones(1, v); i++) {
        result.push_back(1);
    }
    for (int i = 0; i < apariciones(2, v); i++) {
        result.push_back(2);
    }
        v = result;
    }


// Ejercicio 6
tuple<int,int> division(int n, int d){
    int cociente = 0;
    int counter = n;
    int resto;
    while(resto > d){
        counter =counter - d;
        cociente++;
    }
	return make_tuple(cociente,resto);
}
