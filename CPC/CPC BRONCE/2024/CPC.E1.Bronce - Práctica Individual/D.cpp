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

bool compare(int &a,int &b){
	return a>b;
}
void solve(){
	int n,q; cin>>n>>q;
	vi r(n);
	int sum=0;
	fi(i,0,n,1)
		cin>>r[i];
	
	sort(all(r),compare);
	fi(i,0,n,1){
		sum+=r[i];
		r[i]=sum;
	}
	int b;
	while(q--){
		cin>>b;
		auto upper=lower_bound(all(r),b);
		if(upper!=r.end())
			cout<<(upper-r.begin())+1;
		else 
			cout<<-1;
		cout<<endl;
	}	

}


int main(){


fast
	int t; cin>>t;
	while(t--){
		solve();
	}

	return 0;
}