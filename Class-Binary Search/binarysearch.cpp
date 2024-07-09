
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


int bs(int arr[],int n,int key){
	int l=0;
	int r=n-1;
	int mid;
	while(l<=r){
		mid=(l+r)/2;
		if(arr[mid]==key) 
			return mid;
		else if(key>arr[mid]) 
			l=mid+1;
		else 
			r=mid-1; 
	}
	return -1;
}

int rbs(int arr[],int val,int l,int r){
	if(l>r) return-1;
	int mid=(l+r)/2;
	if(val==arr[mid]) return mid;
	else if(val<=arr[mid]) return rbs(arr,val,l,mid-1);
	else return rbs(arr,val,mid+1,r); 
}

int main(){

	
int arr[]={1,2,3,4,5,6};
	int tam=sizeof(arr)/sizeof(int);
	cout<<"Bs de forma iterativa: "<<endl;
	cout<<bs(arr,tam,5)<<endl;
	cout<<"Bs de forma recursiva: "<<endl;
	cout<<rbs(arr,5,0,tam)<<endl;



	return 0;
}


