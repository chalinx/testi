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

bool compare(pair<char,int> &a,pair<char,int> &b){
	if(a.second%2==0 and b.second%2==1) return a.second>b.second;
	if(a.second%2==1 and b.second%2==0) return a.second<b.second; 
	return a.second<b.second;
}

void solve(){
	
	string q; cin>>q;
	map<char,int>w;
	fi(i,0,q.size(),1){
		w[q[i]]++;
	}

	vector<pair<char,int>> r(all(w));

	sort(all(r),compare);

	int cont=0;
	for(auto i : r){
		if(i.second%2==1)cont++;
		if(cont==2){
			cout<<"NO SOLUTION";return;
		}
	}
	
	int i=0,cont2=1,j=0;
	string q2(q.size(),'1');
	while(i!=r.size()){
		if(cont2<=(r[i].second)/2){
		 q2[j]=(r[i].first);
		 q2[q.size()-1-j]=r[i].first;
		 cont2++;
		 j++;
		}
		else {
			i++;
			cont2=1;
		}
	}
	cout<<q2;
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