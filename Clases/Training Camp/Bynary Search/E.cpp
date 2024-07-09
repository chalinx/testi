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

int mcd(int a,int b) {
	int aux;
	while(b!=0){
		aux=b;
		b=a%b;
		a=aux;
	}
	return a;
}

int mcm(int a, int b) {
    return a/mcd(a,b)*b;
}

void solve(){
	
	int n; cin>>n;
	int a; cin>>a;
	int sum=a;
	int mini=a;
	fi(i,0,n-1,1){
		cin>>a;
		sum+=a;
		mini=mcd(mini,a);
	}

	cout<<mini<<" "<<sum/mini<<endl;
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