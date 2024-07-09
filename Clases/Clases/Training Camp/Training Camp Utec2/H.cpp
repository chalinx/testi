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
	vector<string>r(n);

	fi(i,0,n,1)cin>>r[i];

	int cont1=0;
	fi(i,0,n,1){
		fi(j,0,n,1){
			if(r[i][j]=='#')cont1++;
		}
	}

	bool band=false;
	int cont=0;
	fi(i,1,n,1){
		fi(j,1,n,1){
			if(r[i][j]=='#' and r[i-1][j]=='#' and
				r[i+1][j]=='#' and r[i][j-1]=='#' and r[i][j+1]){
				cont+=5;j+=2;i+=2;
			}
		}
	}

	if(cont==cont1)cout<<"YES";
	else cout<<"NO";

}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	int t=1;
	while(t--){
		solve();
	}

	return 0;
}