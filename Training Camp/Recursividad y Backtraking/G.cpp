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

bool camino(vct<vct<int>>& trazo,int n,int x,int y){
	for(int i=0;i<x;i++){
		if(trazo[i][y]==1)return false;
	}

	int i=x,j=y;
	while(i>=0 and j>=0){
		if(trazo[i][j]==1) return false;
		i--;j--;
	}
	
	i=x,j=y;
	while(i>=0 and j<n){
		if(trazo[i][j])return false;
		i--;j++;
	}
	return true;
}

int contSol(int n,vct<vct<int>>& trazo,int i){
	if(i==n) return 1;
	int cont=0;
	fi(j,0,n,1){
		if(camino(trazo,n,i,j)){
			trazo[i][j]=1;
			cont+=contSol(n,trazo,i+1);
			trazo[i][j]=0;
		}
	}
	return cont;
}



void solve(){
	int n; cin>>n;
	vct<vct<int>> trazo(n,vi(n,0));
	cout<<contSol(n,trazo,0);

}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	int t=1;
	while(t--){
		solve();
	}

	return 0;
}