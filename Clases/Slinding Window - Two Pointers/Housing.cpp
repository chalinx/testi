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

void housing(int *arr,int n, int k){
	int i=0;
	int j=0;
	int cs=0;
	while(j<n){
		//expandir hacia la derecha
		cs+=arr[j];j++;

		// remover elemento de la izquierda si cs>sum y i<j
		while(cs>k and i<j){
			cs-=arr[i];i++;
		}
		// comprobar si la suma de los elementos de la venta
		// es igual a k
		if(cs==k)
			cout<<i<<"-"<<j-1<<endl;

	}

	return;
}


void solve(){
	
	int plots[]={1,3,2,1,4,1,3,2,1,1};
	int n= sizeof(plots)/sizeof(int);
	int k=8;
	housing(plots,n,k);

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