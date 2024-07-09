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

int powerFunction(int a,int b){
	if(b==0)return 1;
	return a*powerFunction(a,b-1);
}

int fastPower(int a,int b){
	if(b==0)return 1;
	int p=fastPower(a,b/2);
	if(b%2==1)return a*p*p; 
	return p*p;
}
	



int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	cout<<powerFunction(2,8)<<endl;
	cout<<fastPower(2,10)<<endl;	
	return 0;
}



