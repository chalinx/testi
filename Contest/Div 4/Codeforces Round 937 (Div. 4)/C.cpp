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
	
	string q; cin>>q;

	int h=(q[0]-48)*10+(q[1]-48);

	if(h==12){cout<<"12:"<<q[3]<<q[4]<<" PM"<<endl;return;}
	if(h==0){cout<<"12:"<<q[3]<<q[4]<<" AM"<<endl;return;}
	if(h<12){cout<<q<<" AM";}
	else{
		h-=12;
		if(h<10)
		cout<<"0"<<h<<":"<<q[3]<<q[4]<<" PM";
		else
			cout<<h<<":"<<q[3]<<q[4]<<" PM";
	}
	cout<<endl;
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