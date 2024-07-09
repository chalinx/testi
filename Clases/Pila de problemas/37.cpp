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

void solve(){
	int n,m; cin>>n>>m;
	vector<string>r(n);
	fi(i,0,n,1){
		cin>>r[i];
	}

	if((r[0][0]==r[n-1][m-1])){cout<<"YES"<<endl;return;}
	else{
		bool band=false;
		if(r[0][0]=='W'){
			fi(i,0,n,1){
				if(r[i][m-1]=='W'){band=true;break;}
			}
			if(band){
				fi(i,0,m,1){
					if(r[n-1][i]=='W'){cout<<"YES"<<endl;return;}
				}
			}
		}
		else{
			band=false;
			fi(i,0,n,1){
				if(r[i][m-1]=='B'){band=true;break;}
			}
			if(band){
				fi(i,0,m,1){
					if(r[n-1][i]=='B'){cout<<"YES"<<endl;return;}
				}
			}
		}
		band=false;
		if(r[n-1][m-1]=='W'){
			fi(i,0,n,1){
				if(r[i][0]=='W'){band=true;break;}
			}
			if(band){
				fi(i,0,m,1){
					if(r[0][i]=='W'){cout<<"YES"<<endl;return;}
				}
			}
		}
		else{
			band=false;
			fi(i,0,n,1){
				if(r[i][0]=='B'){band=true;break;}
			}
			if(band){
				fi(i,0,m,1){
					if(r[0][i]=='B'){cout<<"YES"<<endl;return;}
				}
			}
		}


		
	}

	cout<<"NO"<<endl;


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