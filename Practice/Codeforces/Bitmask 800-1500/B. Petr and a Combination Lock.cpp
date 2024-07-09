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

bool suma(int i,int sum,vector<int> &r,int n){
	if(i==n){ 
		if(sum%360==0)return true;
		else return false;
	}
	return suma(i+1,sum+r[i],r,n)||
			suma(i+1,sum-r[i],r,n);
}




int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast


	int n; cin>>n;
	vector<int> r(n);
	fi(i,0,n,1)
		cin>>r[i];	

	if(suma(0,0,r,n))cout<<"YES";
	else cout<<"NO";

	return 0;
}



