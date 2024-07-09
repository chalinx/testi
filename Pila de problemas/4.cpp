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


bool mism(char q){

	switch(q){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':return true;
	} 
	return false;
}


void solve(){
	string q,r; cin>>q>>r;
	string aux="aeiou";

	if(sz(q)!=sz(r)){cout<<"No";return;}

	fi(i,0,sz(q),1){
		if(mism(q[i])!=mism(r[i])){cout<<"No";return;}
	}

	cout<<"Yes";

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