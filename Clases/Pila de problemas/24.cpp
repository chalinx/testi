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
	string q,r; cin>>q>>r;

	char w1=q[sz(q)-1];
	char w2=r[sz(r)-1];

	if(w1=='S' and w1>w2)cout<<"<";
	else if(w2=='S' and w2>w1)cout<<">";
	else if(w1=='L' and w1<w2)cout<<">";
	else if(w2=='L' and w2<w1)cout<<"<";
	else{
		int cont1=sz(q)-1;
		int cont2=sz(r)-1;
		if((cont1>cont2 and w1=='L'))cout<<">";
		else if((cont1<cont2 and w1=='L'))cout<<"<";
		else if((cont1>cont2 and w1=='S'))cout<<"<";
		else if((cont1<cont2 and w1=='S'))cout<<">";
		else if(w1==w2 and cont1==cont2)cout<<"=";

	}

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