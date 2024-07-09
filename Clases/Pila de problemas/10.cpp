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
	int n; cin>>n;
	vi r(n);
	fi(i,0,n,1) cin>>r[i];
	int mini;
	if(2*r[0]>r[1] or 2*r[sz(r)-1]>r[sz(r)-2]){cout<<"NO"<<endl;return;}
	fi(i,1,n-1,1){
		if(r[i-1]!=0){
			if(r[i]>=2*r[i-1] and r[i+1]>=r[i-1]){
				r[i]-=2*r[i-1];
				r[i+1]-=r[i-1];
				r[i-1]=0;
			}
			else {cout<<"NO"<<endl;return;}
		}
	}
	if(r[sz(r)-1]!=0 or r[sz(r)-2])cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;

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