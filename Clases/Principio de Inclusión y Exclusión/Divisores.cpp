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
	
	vi r={2,3,5,7,11,13,17,19,23,29};

	int n; cin>>n;

	vi primes={2,3,5,7,11,13,17,19,23,29};

	int ans=0;

	int m=r.size();
	fi(i,1,(1<<m),1){
		int lcm=1;
		fi(j,0,m,1){
			if((i>>j)&1)
				lcm*=primes[j];
		}

	if(__builtin_popcount(i)%2==0)
		ans-=(n/lcm);
	else 
		ans+=(n/lcm);

	}

	cout<<ans;
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