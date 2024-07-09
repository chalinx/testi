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
	map<string,int> r;
	string q;
	fi(i,0,n,1){
		cin>>q;
		sort(all(q));
		r[q]++;
	}
	ll tol=0;
	for(auto i:r){
		ll n=i.second;
		tol+=n*(n-1)/2;
	}
	cout<<tol;

}


int main(){

fast
	int t=1;
	while(t--){
		solve();
	}

	return 0;
}