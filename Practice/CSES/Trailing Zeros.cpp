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

int cont0(int n){
	int cont=-1;
	while(n){
		n/=10;
		cont++;
	}
	return 2*cont;
}

void solve(){
	int n ; cin>>n;
	int cont=0;
	fi(i,1,n+1,1){
		if(i%10==0)cont+=cont0(i);
		else if(i%10==2 or i%10==5)cont++;
	}
	cout<<cont/2;
}


int main(){

 #ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	solve();
	return 0;
}