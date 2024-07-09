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

bool reina(vct<vi> &tablero,int n,int x,int y){

	fi(i,0,x,1){
		if(tablero[i][y]==1)return false;
	}

	int i=x;
	int j=y;
	while(i>=0 and j>=0){
		if(tablero[i][j]==1)return false;
		i--;j--;
	}

	i=x;
	j=y;
	while(i>=0 and j<n){
		if(tablero[i][j]==1)return false;
		i--;j++;
	}

	return true;
}

int numQueen(int n,vct<vi> &tablero,int i){
	if(i==n)return 1;
	int cont=0;

	fi(j,0,n,1){
		if(reina(tablero,n,i,j)){
			tablero[i][j]=1;
			cont+=numQueen(n,tablero,i+1);
			tablero[i][j]=0;
		}
	}
	return cont;
}




void solve(){
	int n; cin>>n;
	vct<vi> r(n,vi(n,0));
	cout<<numQueen(n,r,0);

}


int main(){


fast
	int t=1;
	while(t--){
		solve();
	}

	return 0;
}