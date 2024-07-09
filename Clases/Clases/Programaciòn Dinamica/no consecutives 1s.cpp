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

int fun(int index,int n,int previous_one){

	if(index==n+1)return 1;

	int cont=0;

	cont+=fun(index+1,n,0);

	if(previous_one==0){
		cont+=fun(index+1,n,1);
	}

	return cont;
}

int countb(int n){
	if(n==0)return 1;
	if(n==1)return 2;
	return countb(n-1)+countb(n-2);
}


void solve(){
	
	cout<<fun(1,3,0)<<endl;
	cout<<countb(3)<<endl;

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