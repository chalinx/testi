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
	vi r(n);
	queue<int> w;
	fi(i,0,n,1) {
		cin>>r[i];
		w.push(r[i]);
	}
	int sum=0,cont=0;
	fi(i,0,n,1){
		sum+=r[i];
		cont++;
		if(sum>m){
			sum-=w.front();w.pop();
			cont--;			
		}

	}
	cout<<cont;	
}

int main(){

fast
	int t=1;
	while(t--){
		solve();
	}

	return 0;
}