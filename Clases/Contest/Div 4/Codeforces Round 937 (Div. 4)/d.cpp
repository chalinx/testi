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



void generar(int n,int sum,vi &r){

	if(n==0){
		if(sum!=0 and sum!=1) r.push_back(sum);
		return;
	}

	generar(n-1,10*sum,r);
	generar(n-1,10*sum+1,r);
	
}

void solve(){
	int n; cin>>n;
	vi r;
	generar(5,0,r);
	r.push_back(1e5);
	if(binary_search(all(r),n)){cout<<"YES";return;}
	fi(i,0,sz(r),1){
		while(n%r[i]==0)n/=r[i];
		if(n==1){cout<<"YES";return;}
	}

	cout<<"NO";

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