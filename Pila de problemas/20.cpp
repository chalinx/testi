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

int mcd(int a, int b) {
    while(b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}
void solve(){
	int a,b; cin>>a>>b;

	
	if(mcd(a,b)==1 or (a==0 and b==0))cout<<1<<endl;
	else{
		cout<<2<<endl;
		if(mcd(a-1,b)==1)cout<<a-1<<" "<<b;
		else if(mcd(a+1,b)==1)cout<<a+1<<" "<<b;
		else if(mcd(a,b-1)==1)cout<<a<<" "<<b-1;
		else if(mcd(a,b+1)==1)cout<<a<<" "<<b+1;
		else if(mcd(a-1,b-1)==1)cout<<a-1<<" "<<b-1;
		else if(mcd(a+1,b+1)==1)cout<<a+1<<" "<<b+1;
		cout<<endl;
	}

	cout<<a<<" "<<b<<endl;



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