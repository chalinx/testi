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

void solve() {
	string a,b; cin>>a>>b;
    if (a.find(b)!= string::npos){
    	cout<<"good";return;
    }
  	string r=b;

    for(int i=0;i<4;i++){
    	r.erase(i,1);
    	if(a.find(r)!=string::npos){
    		cout<<"almost good";return;
    	}
    	r=b;
    }
    
   	cout<<"none";	
	
}

int main() {
	#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
	
	int t; cin>>t;
	while(t--){
		solve();cout<<endl;
	}

    return 0;
}
