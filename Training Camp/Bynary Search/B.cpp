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
	string q1,q2; cin>>q1>>q2;

	fi(i,0,q1.size(),1){
		q1[i]=tolower(q1[i]);
		q2[i]=tolower(q2[i]);
		if((tolower(q1[i])=='b' or tolower(q1[i])=='p') and
			(tolower(q2[i])=='b' or tolower(q2[i])=='p'))
			 q1[i]=q2[i]='b';
		if((tolower(q1[i])=='e' or tolower(q1[i])=='i') and
			(tolower(q2[i])=='e' or tolower(q2[i])=='i'))
			 q1[i]=q2[i]='e';
	}
	if(q1.compare(q2)==0)cout<<"Yes";
	else cout<<"No";
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