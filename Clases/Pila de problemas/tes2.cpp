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
	string q; cin>>q;
	string r="edgnb";
	int aux=q.find(r);
	int cont=0;
	while(aux!=string::npos){
		cont++;
		aux=q.find(r,aux+1);
	}	

	cout<<cont;
}


int main(){


fast
	int t=1;
	while(t--){
		solve();
	}

	return 0;
}