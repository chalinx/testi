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
	
	int n,k,x; cin>>n>>k>>x;
	vi r(k,0);
	//fi(i,1,k+1,1)if(i!=x)r[i]=i;
	if((k==1 and x==1) or (n%2==1 and (k==2 and x==1))){cout<<"NO"<<endl;return;}
	
	cout<<"YES"<<endl;
	if(x==1){
			cout<<n/2<<endl;
		if(n%2==0){
			fi(i,0,n/2,1)
				cout<<2<<" \n"[i==(n/2)-1];
		}
		else {
			fi(i,0,(n/2)-1,1)
				cout<<2<<" ";
			cout<<3<<endl;
		}
	}

	else {
		cout<<n<<endl;
		fi(i,0,n,1)cout<<1<<" \n"[i==n-1];	
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