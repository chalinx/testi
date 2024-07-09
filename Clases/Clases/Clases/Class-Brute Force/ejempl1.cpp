#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Class Competitiva/input.txt","r",stdin);
freopen("D:/Class Competitiva/output.txt","w",stdout);
#endif
       

    ll n, k;
    cin >> n >> k;
 
    ll l = 0, r = n, i = 1;
    while (l < r){
        ll mid = (r + l) / 2;
        ll aux = mid;
        ll cont = mid;
        while (aux /= k)
         cont += aux;
        if (cont < n)
            l = mid + 1;
        else
            r = mid;
        
    }
    cout << r << endl;
 
    return 0;
}

