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


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	int x1,v1,x2,v2;

	cin>>x1>>v1>>x2>>v2;
	int m=x1-x2;
	int n=v2-v1;
	if(x1==x2)cout<<"YES";
	else if(x1!=x2&&v1==v2)cout<<"NO";
	else if(m/n<0 or m%n!=0)cout<<"NO";
	else cout<<"YES";

	return 0;
}



