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
const ll mod=1e9+7;

ll expomod(ll a, ll x,ll modu) {
    a %= modu; 
    ll res = 1; 
    while (x) {
        if (x&1) 
            res= (res*a)%modu;
        a=(a*a)%modu;
        x>>=1;
    }
    return res%modu;
}

void solve(){
	
	int n,k; cin>>n>>k;

	vi r(n);
	fi(i,0,n,1)cin>>r[i];

	vct<ll> pre(n+1,0);

	
	ll maxi=r[0];
	ll mini=0;
	ll res=r[0];
	fi(i,1,n+1,1){
		pre[i]=pre[i-1]+r[i-1];
		res=max(res,pre[i]-mini);
		mini=min(mini,pre[i]);
	}
	maxi=res;
	if(maxi<0)maxi=0;
	else maxi=maxi*(expomod(2,k,mod)-1);
	
	cout<<((maxi+pre[sz(pre)-1]+mod)%mod+mod)%mod<<endl;

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