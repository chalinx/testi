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

void printAsc(int i,int n){

	if(i==n+1)return;
	cout<<i<<" ";
	printAsc(i+1,n);
}

void printDesc(int i,int n){
	if(i==n+1)return;
	printDesc(i+1,n);
	cout<<i<<" ";
}

int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	printAsc(1,5);
	cout<<endl;
	printDesc(1,5);
	return 0;
}



