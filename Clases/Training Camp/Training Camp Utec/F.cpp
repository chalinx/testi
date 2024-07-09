#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int Q;
    cin >> Q;

    multiset<long long> bolas;
    long long sumaAcumulada = 0;

    for(int i = 0; i < Q; i++){
        int tipo;
        cin >> tipo;
        if(tipo == 1){
            long long x;
            cin >> x;
            // Ajustamos x por la suma acumulada antes de insertarlo
            bolas.insert(x - sumaAcumulada);
        } else if(tipo == 2){
            long long x;
            cin >> x;
            // Actualizamos la suma acumulada
            sumaAcumulada += x;
        } else if(tipo == 3){
            // Sacamos el menor valor, ajustamos por la suma acumulada y lo imprimimos
            auto it = bolas.begin();
            long long val = *it + sumaAcumulada;
            cout << val << "\n";
            bolas.erase(it);
        }
    }

    return 0;
}
