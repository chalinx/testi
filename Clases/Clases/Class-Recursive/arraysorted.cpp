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

bool arraysorted(int arr[],int i,int n){
	if(i==n-1)return true;
	if(arr[i]<arr[i+1]&&arraysorted(arr,i+1,n))return true;
	return false;
}

bool arraysorted2(int arr[],int n){
	if(n==1 or n==0) return true;
	if(arr[0]<arr[1] and arraysorted2(arr+1,n-1))return true;
	return false;
}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	int arr[6]={1,2,3,4,5,6};
	int n= sizeof(arr)/sizeof(arr[0]);
	cout<<arraysorted2(arr,n);

	return 0;
}



