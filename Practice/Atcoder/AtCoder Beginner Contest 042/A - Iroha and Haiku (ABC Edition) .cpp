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
	int a,b,c; cin>>a>>b>>c;
	if(((a==5 and b==5) and c==7) ||
		((a==5 and c==5) and b==7)||
		((b==5 and c==5 ) and a==7)) cout<<"YES";
	else cout<<"NO";
}


int main(){

fast
	int t=1;
	while(t--){
		solve();
	}

	return 0;
}