#include <iostream>
#include <vector>
#include <map>

#define mpii map<int,int>
using namespace std;

mpii mezclarmod(mpii izq, mpii der, vector<int>& modas, int& maxfreq) {
    mpii aux = izq;
    for (auto i : der) {
        aux[i.first] += i.second;
    }

    modas.clear();  
    maxfreq = 0; 

    for (auto i : aux) {
        if (i.second > maxfreq) {
            maxfreq = i.second;
            modas = {i.first};  
        } else if (i.second == maxfreq) {
            modas.push_back(i.first); 
        }
    }

    return aux;
}

mpii dividirmod(vector<int> arr, int ini, int fin, vector<int>& modas, int& maxFreq) {
    mpii freq;
    if (ini >= fin) {
        freq[arr[ini]] = 1;
        return freq;
    }
    int med = (ini + fin) / 2;
    mpii freqizq = dividirmod(arr, ini, med, modas, maxFreq);
    mpii freqder = dividirmod(arr, med + 1, fin, modas, maxFreq);

    return mezclarmod(freqizq, freqder, modas, maxFreq);
}

int main() {
    vector<int> v = {3, 1, 2, 3, 5, 4, 6};
    vector<int> modas;
    int maxFreq = 0;

    mpii freq = dividirmod(v,0,v.size()-1,modas,maxFreq);

    cout<<"Modas: ";
    for (int moda : modas) {
        cout << moda << " ";
    }
    cout << "con frecuencia: " <<maxFreq<<endl;

    return 0;
}
