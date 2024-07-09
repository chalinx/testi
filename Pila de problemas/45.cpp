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
	
	stack<int> r;
	stack<int> ord;

	while(r.size()){
		int n; cin>>n;
		if(n==1){
			int w;cin>>w;r.push(w);
			while(r.size()){
				int q=r.top();
				int d=ord.top():
				if(ord.size()==0)r.
			}
		}
		else if(n==2)w.pop();

		else {
			int min=MAX_INT;
			fi(i,0,n,1){
				int t=r.top();
				if(min<t) 
			}
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
	}

	return 0;
}