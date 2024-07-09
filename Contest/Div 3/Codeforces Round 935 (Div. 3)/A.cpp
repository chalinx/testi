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
	
	int in,ex,un; cin>>in>>ex>>un;
	ll cont=in;
	if(3-(ex%3)>un and ex%3!=0){cout<<-1<<endl;return;}
	if(ex%3==0){
		cont+=(ex/3);
		if(un%3==0)cont+=(un/3);
		else cont+=(un/3)+1;
	}
	else{
		cont+=(ex/3)+1;
		un-=(3-(ex%3));
		if(un%3==0)cont+=(un/3);
		else cont+=(un/3)+1;
	}
	cout<<cont<<endl;

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