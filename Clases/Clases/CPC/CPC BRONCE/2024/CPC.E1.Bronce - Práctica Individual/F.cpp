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

void permutation(string &q,int ini,int fin){
	if(ini==fin) cout<<q<<endl;
	else{
		fi(i,ini,fin+1,1){
			swap(q[i],q[ini]);
			permutation(q,ini+1,fin);
			swap(q[i],q[ini]);
		}
	}
}

void solve(){
	int n ; cin>>n;
	string q;
	fi(i,1,n+1,1){
		q.pb(i+'0');
	}
	permutation(q,0,q.size()-1);
	
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