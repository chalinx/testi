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

bool compare(char &a,char &b){
	return a>b;
}

void solve(){
 string s; cin>>s;
    int n; cin>>n;
    vector<int> a(27);
    int mx=-1;
    fi(i,1,27,1) {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    int sum=0;
    fi(i,0,s.size(),1){
        int idx=int(s[i]-96);
        sum+=(a[idx]*(i+1));
    }
    fi(i,s.size()+1,n+s.size()+1,1) sum+=mx*i;
    cout<<sum<<endl;


}


int main(){

fast
	int t=1;
	while(t--){
		solve();
	}

	return 0;
}