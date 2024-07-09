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
	vct<bool> primo(n+1,true); 
    primo[0]=primo[1]=false;
    int cont=0;

    for(int i=2;i*i<=n;i++) {
        if (primo[i]==true){
            fi(j,i*i,n+1,i)
                primo[j]=false;
        }
    }

    fi(i,2,n+1,1) {
        if (primo[i])
            cont++;
    }

    cout<<cont; 
}


int main(){


fast
	int t=1;
	while(t--){
		solve();
	}

	return 0;
}