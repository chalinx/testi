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
const ll mod=1e9+7;

ll exopMod(ll b, ll e, ll m) {
    ll result = 1; 
    while (e) {
        if (e & 1) 
            result = (result * b) % m;
        e/=2;
        b = (b * b) % m;
    }
    return result;
}


void solve(){
	int n; cin>>n;
	cout<<exopMod(2,n,mod);
}


int main(){


	int t=1;
	while(t--){
		solve();
	}

	return 0;
}