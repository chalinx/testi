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


void solve(){

	int n; cin>>n;
	int r[n];
	fi(i,0,n,1)cin>>r[i];

	int b=-1,cont=0;
	fi(i,0,n,1){
		if(r[i]==0){
			cont++;continue;
		}
		b=(b&r[i]);
		if(b==0){
			cont++;
			b=r[i++];
		}
	}
 
	if(cont!=0)cout<<cont;
	else cout<<cont+1;
	cout<<endl;
}




int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	
	int n; cin>>n;
	while(n--){
		solve();
	}
	return 0;
}



