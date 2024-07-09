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
	int n,d; cin>>n>>d;
	string q; cin>>q;
	vi r;
	fi(i,0,n,1){
		if(q[i]!='0')r.pb(i+1);
	}
	
	bool band=true;
	int dd=1,cont=0;
	int repe=-1;
	while(dd!=n){
		 dd+=d;
		auto upper=upper_bound(all(r),dd);
		int j=(upper-r.begin())-1;
		dd=r[j];
		if(repe==j){
			band=false; break;
		}
		repe=j;
		cont++;
	}

	if(band)cout<<cont;
	else cout<<-1;

	cout<<endl;

}


int main(){


fast
	int t=1;
	while(t--){
		solve();
	}

	return 0;
}