
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

int rs(vi arr,int key){

	int n=arr.size();
	int l=0;
	int r=n-1;

	while(l<=r){
		int mid=(l+r)/2;
		if(arr[mid]==key)return mid;

		else if(arr[l]<=arr[mid]){   //primera linea
			if(arr[l]<=key&&key<=arr[mid]) r=mid-1;
			else l=mid+1;
		}
		else{						//segunda linea
			if(arr[mid]<=arr[r]){
				if(arr[mid]<=key&&key<=arr[r]) l=mid+1;
				else r=mid-1;
			}
		}

	}

	return -1;
}



int main(){

	vi arr={5,6,7,8,1,2,3,4};

	cout<<rs(arr,3);
	




	return 0;
}

