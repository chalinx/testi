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

ll po(ll b){
	return b*b;
}
void solve(){
	ll a,b; cin>>a>>b;		
	ll cont=0;
	
		if(a%2==0 and b%2==0){
			if(a<=b){
				cont=po(b-1)+a;
			}
			else{
				cont=po(a)-b+1;
			}
		}
		else if(a%2==0 and b%2==1){
			if(a<=b){
				cont=po(b)-a+1;
			}
			else{
				cont=po(a)-b+1;
			}
		}
		else if(a%2==1 and b%2==0){
			if(a<=b){
				cont=po(b-1)+a;
			}
			else{
				cont=po(a-1)+b;
			}
		}
		else{
			if(a<=b){
				cont=po(b)-a+1;
			}
			else{
				cont=po(a-1)+b;
			}
		}
	

	cout<<cont<<endl;
}


int main(){

	int t; cin>>t;
	while(t--){
		solve();
	}

	return 0;
}