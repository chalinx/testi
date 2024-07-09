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

int cont=0;
vi memo;

int fibmemo(int n){
	cont++;
	if(n<=2)return 1;
	if(memo[n]!=-1)return memo[n];
	return memo[n]=fibmemo(n-1)+fibmemo(n-2);
}

void fib(int n){
	
	memo.resize(n+1,-1);

	cout<<fibmemo(n)<<endl;
	cout<<cont<<endl;
}

void fibtabu(int n){

	vi r(n+1);
	r[1]=1;
	r[2]=1;

	fi(i,3,n+1,1){
	   r[i]=r[i-1]+r[i-2];
	}
	cout<<r[n]<<endl;
}

void solve(){

	fibtabu(6);
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