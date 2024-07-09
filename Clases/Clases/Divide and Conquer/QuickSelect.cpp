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


int partition(vector<int> &a,int s,int e){

	int pivot = a[e];
	int i = s - 1;
	for(int j=s;j<e;j++){
		if(a[j] < pivot) 
			swap(a[++i],a[j]);
	}
	swap(a[i+1],a[e]);

return i + 1;
}


int quickSelect(vi a,int s,int e,int k){

	int p=partition(a,s,e);

	if(p==k-1)return a[p];

	if(p>k-1) return quickSelect(a,s,p-1,k);
	else return quickSelect(a,p+1,e,k);

}


void solve(){
	vi r={10,5,2,0,7,6,4};
		
	cout<<quickSelect(r,0,r.size()-1,3);

}


/*
Escribe una función que tome como entrada un arreglo de enteros distintos 
y devuelva el k-ésimo más pequeño del arreglo.

*/
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