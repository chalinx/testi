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

void solve(){
	int n; cin>>n;
	vi r(n);
	fi(i,0,n,1) cin>>r[i];
	if(r[0]!=r[1]&&r[0]==r[2]){
		cout<<2;return;
	}
	else if(r[1]!=r[0]&&r[1]==r[2]){
		cout<<1;return;
	}
	int comp=r[0];
	fi(i,0,n,1){
		if(r[i]!=comp){
			cout<<i+1;return;
		}
	}
	
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
		cout<<endl;
	}

	return 0;
}