#include<bits/stdc++.h>
#define ll long long int

#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define vi vector<int>
#define vll vector<ll>
#define vct vector
#define pb push_back
#define er erase
#define fi(i,a,n,w) for(int i =a;i<n;i+=w)
#define fl(i,a,n,w) for(ll i=a;i<n;i+=w)
#define fr first
#define se second
#define pll pair<ll,ll>
#define pii pair<int,int>

using namespace std;



int emparejar(int n){
	if(n==1 or n==2)return n;
	return emparejar(n-1)+(n-1)*emparejar(n-2);
}

void printAllPairings(vector<int>& pairings, int curr, int n) {
    if (curr > n) {
        // Imprimir una solución
        for (int i = 1; i <= n; ++i) {
            if (pairings[i] == 0) {
                cout << i;
            } 
            else if (i < pairings[i]) {
                cout << "{" << i << ", " << pairings[i] << "} ";
            }
          	

        }

        cout << endl;
        return;
    }
    
    if (pairings[curr] != 0) {
        // Si el amigo actual ya está emparejado, pasar al siguiente
        printAllPairings(pairings, curr + 1, n);
    } 
    else {
        // Opción 1: Ir solo
        pairings[curr] = 0; // Marcar como solo
        printAllPairings(pairings, curr + 1, n);
        
        // Opción 2: Intentar formar pareja con cualquier otro amigo que aún no tenga pareja
        for (int i = curr + 1; i <= n; ++i) {
            if (pairings[i] == 0) {
                pairings[curr] = i;
                pairings[i] = curr;
                printAllPairings(pairings, curr + 1, n);
                pairings[i] = 0; // Deshacer la pareja
            }
        }
        pairings[curr] = 0; // Deshacer la marca de solo
    }
}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	cout<<emparejar(3)<<endl;
	vector<int> pairings(3 + 1, 0); // Vector para mantener el seguimiento de las parejas
    printAllPairings(pairings, 1, 3);
	return 0;
}
