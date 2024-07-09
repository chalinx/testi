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

bool comp(string &a,string &b){
	return a<b;
}
struct compar{
public:
	bool operator()
	(const string &a,const string &b)const{
		return a<b;
	}
};
void solve(){
	
	int a,b; cin>>a>>b;
	multiset<string,compar> q;
	string r;
	fi(i,0,a,1){
		cin>>r;
		q.insert(r);
	}
	for(auto i:q)
		cout<<i;
	cout<<endl;
}


int main(){
#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif

	int t=1;
	while(t--){
		solve();
	}

	return 0;
}