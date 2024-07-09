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

}


int main(){
ifstream cinn("hanya.in");
	int t; cinn>>t;
	while(t--){
		int n; cinn>>n;
	ll a;
	bool band=false,band2=false;
	fi(i,0,n,1){
		cinn>>a;
		if(a<0)band=true;
		if(a>0)band2=true;

	}
	if(band and band2) cout<<2;
	else cout<<1;
cout<<endl;
	}

cinn.close();
	return 0;
}