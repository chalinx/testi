

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


using namespace std;


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Class Competitiva/input.txt", "r", stdin);
freopen("D:/Class Competitiva/output.txt", "w", stdout);
#endif

	int n; cin>>n;
	vct<bool> is(n*n+1,false);
	for(auto q:is)cout<<q<<" ";

	cout<<endl;

	fi(i,1,n+1,1)is[i*i]=true;
	for(auto q:is)cout<<q<<" ";
	return 0;
}

