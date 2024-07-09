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
	string r; cin>>r;
	if(n==1 or n==2) cout<<"YES";
	else{
		string aux;aux.push_back(r[0]);
		int j=0;
		fi(i,1,n,1){
			if(r[i]!=aux[j]){
				aux.push_back(r[i]);
				j++;
			}
		}
		unordered_map<char,int> w;
		fi(i,0,aux.size(),1){
			w[aux[i]]++;
		}

		for(auto i:w){
			if(i.second==2){
				cout<<"NO"; return;
			}
		}
		cout<<"YES";
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
		solve();cout<<endl;
	}

	return 0;
}