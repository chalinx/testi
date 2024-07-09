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

int tol(int n){
	int cont =0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0)cont++;
	}
	return cont;
}
void solve(){
		
	int n; cin>>n;

	
	int w=sqrt(n);
	if(tol(n)==1)cout<<1;
	else if(w*w==n)cout<<2*(tol(n)-1);
	else cout<<2*(tol(n)-1)+1;
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