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

 int n,m,k; cin>>n>>m>>k;

 vi b(n),c(m);
 fi(i,0,n,1)cin>>b[i];
 fi(i,0,m,1)cin>>c[i];
 sort(all(b));
 sort(all(c));
 int cont=0;
 fi(i,0,n,1){
 	int w=k-b[i];
 	if(w>0) {auto r=upper_bound(all(c),w);
 		cont+=(r-c.begin());
 	}
 }

 cout<<cont<<endl;

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