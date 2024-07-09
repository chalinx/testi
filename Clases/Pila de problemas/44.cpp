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

void graf(int w,int q){

	fi(i,0,q+1,1){
		for(int j=0;j<=q;j++)
			if(q+w>i+j)cout<<".";
		for(int j=0;j<=q;j++)
			if(i>=j+w)cout<<(q-j);
		for(int j=q-i+1+w;j<=q;j++) cout<<j;
		for(int j=0;j<q;j++)if(q+w>i+j)cout<<".";
		cout<<endl;
	}

	fi(i,0,q,1){
		for(int j=0;j<q;j++)
			if(j<i+1+w)cout<<".";
			else cout<<(q-j+1+w);
		for(int j=0;j<=q;j++)
			if(q>i+j+1)cout<<j+i+2*w;
			else cout<<".";
		cout<<endl;

	}


}


void solve(){
	int q; cin>>q;
	
	graf(0,q);
	



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