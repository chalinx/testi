#include <iostream>
#include <vector>

#define pii pair<int,int>
using namespace std;


pii mezclarmoda(vector<int> v,int ini,int fin, pii modizq, pii modder) {
    int valizq = modizq.first; 
    int valder = modder.first; 
    int freqizq = 0,freqder = 0;
    
    for(int i=ini;i<=fin;i++) {
        if (v[i]==valizq) freqizq++;
        if (v[i]==valder) freqder++;
    }
    
    if (freqizq>freqder) return {valizq,freqizq};
    else return {valder,freqder};
}

pii dividirmoda(vector<int> v,int ini,int fin) {
    
    if (ini==fin) return {v[ini], 1}; 
    
    int med=(ini+fin)/2;
    pii modiz=dividirmoda(v,ini,med);
    pii modder=dividirmoda(v,med+1,fin);
    
    pii aux=mezclarmoda(v,ini,fin,modiz,modder);
    cout<<aux.first<<" "<<aux.second<<endl;
    return aux;
}

int main() {
    #ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
    vector<int> v = {1,2,1,3,3,1,1};
    pii mod = dividirmoda(v, 0, v.size() - 1);
    cout << "La moda del vector es "<<mod.first<<" con "<<mod.second<<" repeticiones"<< endl;
    return 0;
}
