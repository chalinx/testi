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
	string x,y; cin>>x>>y;


	if((x=="100" and y<="99")){cout<<"Yes";return;}

	else if(x>y){cout<<"Yes";return;}
	else{
		reverse(all(x));
		if(x>y){cout<<"Yes";return;}
		reverse(all(y));
		if(x>y){cout<<"Yes";return;}
	}	
	if(x==y and x=="100"){cout<<"No";return;}
	cout<<"No";

}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	 int t; cin>>t;
  while(t--){
    solve();cout<<endl;
  }

	return 0;
}