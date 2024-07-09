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

void solve(){
	int n; cin>>n;
	vi r(n);

	fi(i,0,n,1)cin>>r[i];

	int cont=0,maxi=0;
	int w;
	fi(i,0,n-2,1){
		w=r[i+2]-r[i+1]-r[i];
		if(!w)cont++;
		else cont=0;
		maxi=max(maxi,cont);
	}
	if(n!=1) cout<<maxi+2;
	else cout<<1;
}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	int t=1;
	while(t--){
		solve();
	}

	return 0;
}