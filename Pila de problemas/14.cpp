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
	int a,x; 
	int infi=0,sup=1e9;
	bool a1=false,a2=false;
	vi r;
	while(n--){
		cin>>a>>x;
		if(a==1) {a1=true;infi=max(infi,x);}
		else if(a==2){a2=true;sup=min(sup,x);}
		else r.pb(x);
	}

	if(a1==false and a2==true)infi=0;
	if(a1==true and a2==false)sup=1e9;
	//cout<<infi<<" "<<sup<<endl;
	ll cont=0;
	fi(i,0,sz(r),1){
		if(r[i]>=infi and r[i]<=sup)cont++;
	}
	
	if(infi<=sup)cout<<sup-infi+1-cont;
	else cout<<0;	
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