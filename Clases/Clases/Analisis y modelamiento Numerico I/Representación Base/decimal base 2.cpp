#include <iostream>
#include <vector>

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
#define sz(a) a.size()
#define mstr(r) for(auto i:r)cout<<i<<" ";
#define pll pair<ll,ll>
#define pii pair<int,int>

using namespace std;

std::vector<int> bindecimal(double r) {
    vi digbin;
    int k = 1;
    double rk = r;

    while (rk != 0) {
        if (2 * rk >= 1) {
            digbin.push_back(1);
            rk = 2 * rk - 1;
        } else {
            digbin.push_back(0);
            rk = 2 * rk;
        }
        k++;
    }

    return digbin;
}

int main() {
    #ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
    double r = 0.1; // Cambia esto por el número que quieras convertir
    vi digbin = bindecimal(r);

    for (auto i: digbin) {
        cout<<i;
    }
    std::cout << std::endl;

    return 0;
}
