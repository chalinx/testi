#include <iostream>
#include <vector>
#include <map>

#define pii pair<int,int>
using namespace std;

vector<pii> mezclarmoda(vector<int>& v,int ini,int med,
	int fin,vector<pii> modizq,vector<pii> modder) {
    
    map<int, int> frecuencias;

    for (int i=ini;i<=fin;i++) frecuencias[v[i]]++;
    

    // Determinar la máxima frecuencia
    int maxFreq = 0;
    for (auto f:frecuencias) {
        if (f.second>maxFreq) {
            maxFreq = f.second;
        }
    }

    // Recoger todos los elementos que tengan esa máxima frecuencia
    vector<pii> modas;
    for (auto& f : frecuencias) {
        if (f.second == maxFreq) {
            modas.push_back({f.first, f.second});
        }
    }

    return modas;
}

vector<pii> dividirmoda(vector<int>& v, int ini, int fin) {
    if (ini==fin) return {{v[ini], 1}}
    

    int med=(ini+fin)/2;
    vector<pii> modiz = dividirmoda(v, ini, med);
    vector<pii> modder = dividirmoda(v, med + 1, fin);

    return mezclarmoda(v, ini, med, fin, modiz, modder);
}

int main() {
	#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
    vector<int> v = {1, 1, 2, 2, 3, 3};
    vector<pii> mods = dividirmoda(v, 0, v.size() - 1);

    cout << "Las modas del vector son:" << endl;
    for (auto& mod : mods) {
        cout << mod.first << " con " << mod.second << " repeticiones" << endl;
    }
    return 0;
}
