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
	vi r(n+1,0);
	int a; 
	bool band;
	fi(i,0,n,1){
		cin>>a;
		band=false;
		while(a>0){
			if(a<=n){
				fi(i,1,n+1,1){
					if(i==a&&r[i]==0){
						band=true;
						r[i]=1;break;
					}
				}
			}
			if(band)break;
			a/=2;
		}
	}

	fi(i,1,n+1,1){
		if(r[i]==0){
			cout<<"NO";return;
		}
	}
	cout<<"YES";
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
		cout<<endl;
	}

	return 0;
}