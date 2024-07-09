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


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	int n; cin>>n;
	while(n--){
		int m; cin>>m;
		multimap<int,string> r;
		int a;string b;
		while(m--){
			cin>>a>>b;
			r.insert(make_pair(a,b));
		}
		int c;
		a=c=0;
		int cont=0;

		for(auto i:r){
				if(i.second[0]=='1'&&!a){
					a=1;cont+=i.first;
				}
				if(i.second[1]=='1'&&!c){
					c=1; cont+=i.first;
				}
				if(i.second[0]=='1'&&i.second[1]=='1')
					cont=min(cont,i.first);
			}

		if(a&c) cout<<cont;
		else cout<<-1;
		cout<<endl;

		
	}

	return 0;
}



