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
	int n,k; cin>>n>>k;
	
	vi r(n);
	fi(i,0,n,1)cin>>r[i];
	int maxi=r[k-1];
	int j=k-1;
	vi w;

	fi(i,0,n,1){
		if(maxi<r[i])w.pb(i);
		if(sz(w)==2)break;
	}
	maxi=0;
	//cout<<sz(w)<<endl;
	if(sz(w)==1) {
		if(j>w[0])
			maxi=(w[0]!=0)?max(w[0]-1,j-w[0]):j-1;
		else
			maxi=w[0]-1;
	}
	else{
		if(j>w[0] and j<w[1])
			maxi=(w[0]!=0)?max(w[0]-1,j-w[0]):j-1;
		

		if(j>w[0] and j>w[1])
			maxi=(w[0]!=0)?max(w[0]-1,w[1]-w[0]):w[1]-1;
		
		if(j<w[0])
			maxi=w[0]-1;

		
	}
	cout<<maxi<<endl;

	


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