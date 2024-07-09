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

int merge(vi &arr,int s,int r){

	int i=s;
	int med=(s+r)/2;
	int j=med+1;
	vi temp;
	int cont=0;
	while(i<=med and j<=r){
		if(arr[i]<arr[j])temp.pb(arr[i++]);
		else {
			cont+=med-i+1;
			temp.pb(arr[j++]);
		}
	}

	while(i<=med) temp.pb(arr[i++]);
	while(j<=r)temp.pb(arr[j++]);

	j=0;
	fi(i,s,r+1,1)
		arr[i]=temp[j++];

	return cont;
}

int inverCount(vi &arr,int i,int f){
	if(i>=f)return 0;
	int med=(i+f)/2;
	int c1=inverCount(arr,i,med);
	int c2=inverCount(arr,med+1,f);
	int cn=merge(arr,i,f);
	return c1+c2+cn;
}


void solve(){
	vi r={3,4,1,2,5,3};
	cout<<inverCount(r,0,r.size()-1);
}

/*Conteo de Inversiones
Dado un arreglo que contiene enteros, necesitas 
contar el número total de inversiones.
Inversión Dos elementos a[i] y a[j] forman una inversión
 si a[i] > a[j] e i < j.*/
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