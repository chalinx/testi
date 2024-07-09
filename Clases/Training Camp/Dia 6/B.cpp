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
    
	int n,k; cin>>n>> k;
    ll maxi=-1e9;
    string r; cin>>r;
    ll dx=0,dy=0;
        
    fi(i,0,n,1) {
        if (r[i]=='U')dy--;
        if (r[i]=='D')dy++;
        if (r[i]=='L')dx--;
        if (r[i]=='R')dx++;
        maxi = max(maxi,abs(dx)+abs(dy));
    }
  
        dx*= (k - 1);
        dy*= (k - 1);
        
    fi(i,0,n,1) {
        if (r[i]=='U')dy--;
        if (r[i]=='D')dy++;
        if (r[i]=='L')dx--;
        if (r[i]=='R')dx++;
        maxi=max(maxi,abs(dx)+abs(dy));
    }
        cout<<maxi<<endl;
}


int main(){

fast
	int t; cin>>t;
	while(t--){
		solve();
	}

	return 0;
}