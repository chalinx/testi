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
	int x,n; cin>>x>>n;
	set<int> r{0,x};
	multiset<int> t{x};
	int q;
	int mayor=0;
	fi(i,0,n,1){
		mayor=0;
		cin>>q;
		auto maxi=r.lower_bound(q);
		auto pre=prev(maxi);
		t.insert(*maxi-q);t.insert(q-*pre);
		t.erase((t.find(*maxi-*pre)));	
		cout<<*prev(t.end())<<" ";
		r.insert(q);
	}	

	

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