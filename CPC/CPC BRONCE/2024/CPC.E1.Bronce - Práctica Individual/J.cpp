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
	vector<vector<int>>r;
	int a;
	fi(i,0,n,1){
		cin>>a;
		if(a==4){
			vector<int> w={4};
			r.pb(w);
		}
		else{
			int w=0;
			fi(j,0,r.size(),1){
				bool encontrado=binary_search(all(r[j]),a);
				if(!encontrado) {
					r[j].pb(a);
					break;
				}
			}
		}
	}
	/*
	vi q(6)={4,8,15,16,23};
	int cont=0;
	fi(i,0,r.size(),1){
		if(r[i].size()==6 and r[i])
		if(r[i]!=q)cont+=r[i].size();
	}
	*/
	fi(i,0,r.size(),1){
		fi(j,0,r[i].size(),1){
			cout<<r[i][j]<<" ";
		}
		cout<<endl;
	}
	
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