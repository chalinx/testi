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

ll modu=1e9+7;

using namespace std;
ll fast_expo(ll a, ll n, ll mod) {
    ll res=1;
    a=a%mod; 
    while(n>0) {
        if(n%2==1)
            res=(res*a)%mod; 
        a=(a*a)%mod; 
        n/=2;
    }
    return res;
}

void solve(){
	ll a,k; cin>>a>>k;

	int val=fast(a,k+1,modu);

	ll s=(val-1)/(a-1);
	cout<<s%modu;
}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	cout<<1;
	return 0;
}