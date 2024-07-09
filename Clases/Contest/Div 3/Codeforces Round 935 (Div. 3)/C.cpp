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
	string q; cin>>q;
	vi p(n);
	int cont=0,cont2=0;
	
	fi(i,0,n,1)
		if(q[i]=='1')cont++;

	fi(i,0,n,1){
		int m=(i+1)%2==0?((i+1)/2)+1;(i+1)/2;
		int r=(n-i+1)%2==0?((n-i+1)/2)+1:(n-i+1)/2;
		if(cont>=m and cont2>=n) {
			
		} 

		if(q[i]=='0')cont2++;
		if(q[i]=='1')cont--;
	}

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