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
	int val=2023;
	vi r={2023,289,119,17,7,1};
	int q;
	bool aux=true;
	fi(i,0,n,1){
		cin>>q;
		if(val%q!=0 and aux){cout<<"NO";aux=false;}
		val=val/q;	
	}
	
	if(aux){
		cout<<"YES"<<endl;
		int i=0;
		while(k){
			if(val%r[i]==0){val/=r[i];cout<<r[i]<<" ";k--;}
			else i++;
		}
	}

	cout<<endl;
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