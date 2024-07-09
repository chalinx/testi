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
	int n; cin>>n;
	int k=(n+1)/2;

	if((n%2==0) &&((n/2)%2) ==1 ||
		(n%2)==1&&((n+1)/2)%2==1) cout<<"NO";
	else{
		cout<<"YES"<<endl;
		if(n%2==0) {
			cout<<(n/2)<<endl;
			fi(i,1,(n/4)+1,1){
				cout<<i<<" "<<n+1-i<<" \n"[i==n/4];
			}
			cout<<(n/2)<<endl;
			fi(i,(n/4)+1,(n/2)+1,1){
				cout<<i<<" "<<n+1-i<<" \n"[i==n/2];
			}
		}
		else{
			int m=n-3;
			cout<<(n/2)<<endl;
			cout<<3<<" \n"[m==0];
			fi(i,1,(m/4)+1,1)
				cout<<i+3<<" "<<m+4-i<<" \n"[i==m/4];
			cout<<(n/2)+1<<endl;
			cout<<1<<" "<<2<<" \n"[m==0];
			fi(i,(m/4)+1,(m/2)+1,1)
				cout<<i+3<<" "<<m+4-i<<" \n"[i==m/2];
		}
	}
	

		cout<<endl;

}


int main(){


	int t=1;
	while(t--){
		solve();
	}

	return 0;
}