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


int main(){


fast
	int n; cin>>n;
	fi(i,1,n+1,1){
		cout<<"Case "<<i<<": ";
		int m; cin>>m;
		int cont=0;
		while(m--){
			int q; cin>>q;
			if(q>0) cont+=q;
		}
		cout<<cont<<endl;
	
	}	

	return 0;
}



