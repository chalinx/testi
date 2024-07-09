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
	string q;
fi(i,1,n+1,1){
	cout<<"Case "<<i<<": ";
	bool band=true;
	cin>>q;
	fi(i,0,q.size()/2&&band,1){
		if(q[i]!=q[q.size()-1-i]){
			cout<<"No"<<endl;
			band=false;
		}
	}
	if(band)cout<<"Yes"<<endl;
}
	return 0;
}



