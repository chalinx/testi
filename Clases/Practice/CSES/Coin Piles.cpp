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
	int n,m; cin>>n>>m;

	int sum=(n+m);

	if((n==0 and m!=0) or (n!=0 and m==0))cout<<"NO";
	else if(n==0 and m==0) cout<<"YES";
	else if((sum)%3==0) {
		if(n>=m and n/2<=m) cout<<"YES";
		else if(m>=n and m/2<=n) cout<<"YES";
		else cout<<"NO";
	}
	else cout<<"NO";

	cout<<endl;

}


int main(){

fast
	int t; cin>>t;
	while(t--){
		solve();
	}

	return 0;
}