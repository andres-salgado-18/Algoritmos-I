#include "ejercicios.h"

/* Para compilar */ 

using namespace std;

vector<string> split(string s, char delim){
	vector<string> v;
    s = s+delim;
    string acumuladorLocal = "";
    for(int i = 0; i < s.size(); i++){
        if (s[i] == delim){
            if (acumuladorLocal.size() == 0){
                continue;
            }
            v.push_back(acumuladorLocal);
            acumuladorLocal = "";
            continue;
        }
        acumuladorLocal += s[i];
    }
	return v;
}

string darVueltaPalabra(string s){
	string res = "";
    vector<string> v = split(s, ' ');
    for (int i = v.size()-1; i >= 0; i--){
        res += v[i];
        if (i !=0){res += " ";}
    }
	return res;
}

// Decidir si s1 es substring o subsecuencia de s2
bool subsecuencia(string s1, string s2) {
	int cont = 0;
	return cont == 0;
}

// Mismo orden relativo de conjunto de anagramas y dentro de cada vector y con repetidos
vector<vector<string> > agruparAnagramas(vector<string> v){
	vector<vector<string> > res;
	return res;
}

bool esPalindromo(string s){
	bool cumple = true;
	return cumple;
}

bool tieneRepetidos(string s){
	bool distinto = true;
	return !distinto;
}

string rotar(string s, int j){
	string res(s);
	return res;
}

// no se puede usar substring
string darVueltaK(string s, int k){
	string res(s);
	return res;
}

string abueloLaino(string s){
    string res;
    return res;
}

int cantidadDeFelicitaciones(vector<string> v){
    int res;
    return res;
}

int middleOut(string s, string t){

    return 0;
}
