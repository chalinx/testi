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

vector<int> binario(int x) {
    
    vi bin;
    int k = 0;
    int Nk = x;
    while (Nk > 0) {
        int rk = Nk % 2;
        bin.pb(rk);
        Nk = Nk / 2;
        k++;
    }

    return bin;
}
void solve(){
    


}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
    int t; cin>>t;
    vi r=binario(t);
    
    fi(i,0,sz(r),1)
        cout<<r[i];

    return 0;
}