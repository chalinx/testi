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
	string s,f; cin>>s>>f;
	int cont1=0,cont2=0,cont3=0;
	fi(i,0,n,1){
		if(s[i]=='1')cont1++;
		if(f[i]=='1')cont2++;
		if(s[i]=='1' and f[i]=='1')cont3++;

	}

	if(cont1>=cont2)cout<<cont1-cont3;
	else cout<<cont2-cont3;
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