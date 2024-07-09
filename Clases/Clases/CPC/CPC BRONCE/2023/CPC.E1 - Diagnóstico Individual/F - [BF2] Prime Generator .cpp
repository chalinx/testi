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


vector<bool> criba(int n){

	vector<bool> primo(n+1,true);
	primo[0]=primo[1]=false;
	for(ll i =2;i*i<=n;i++){
		if(primo[i]==true){
			for(ll j=i*i;j<=n;j+=i){
				primo[j]=false;
			}
		}
	}
	return primo;
}

bool primo(ll n){
	if(n<2) return false; 
	for(ll i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	int n; cin>>n;
	int a,b;
	while(n--){
		cin>>a>>b;
		fl(i,a,b+1,1)
			if(primo(i))cout<<i<<endl;

		cout<<endl;
	}
	return 0;
}



