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

void solve(){
  int n; cin >> n;
  vi r(n);
  ll sum=0;
  fi(i,0,n,1) {
       cin>>r[i];
       sum+=r[i];
  }

   ll prom=sum/n;
   ll cont = 0;
     fi(i,0,n,1){
        if (r[i] > prom) {
            cont+=r[i]-prom;
        }
    }
        cout<<cont<< endl;

}


int main(){
#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}