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
	int n ; cin>>n;
	string q; cin>>q;
	int cont=0;
	fi(i,0,n,1)
		if(q[i]=='1')cont++;

	if(cont%2==0){
		if(cont==2){
			fi(i,0,n-1,1){
				if(q[i]=='1' and q[i]==q[i+1]){
					cout<<"NO"<<endl;return;
				}
			}
		}
		cout<<"YES";
	}
	
	else
		cout<<"NO";

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