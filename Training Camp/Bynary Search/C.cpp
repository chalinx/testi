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

ll mod=1e9+7;
void solve(){
	
	int n; cin>>n;
	string q1,q2; cin>>q1>>q2;
	ll cont=1;
	for(int i =0;i<n;i++){
		if(q1[i]=='1' and q2[i]=='1')cont=(cont*2)%mod;
		if(q1[i]=='0' and q2[i]=='1')cont*=1;
		if(q1[i]=='0' and q2[i]=='0')cont*=1;
		if(q1[i]=='1' and q2[i]=='0'){
			cout<<"IMPOSSIBLE"<<endl;
			return;
		}
	}
	cout<<cont%mod<<endl;

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