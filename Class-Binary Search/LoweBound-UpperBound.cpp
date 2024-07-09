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

int Lower_bound(vi arr,int key){
	int s=0;
	int e=arr.size()-1;
	int ans=-1;
	while(s<=e){
		int mid=(s+e)/2;

		if(arr[mid]==key){
			ans=mid;
			e=mid-1;
		}
		else if(arr[mid]>key)
			e=mid-1;
		else
			s=mid+1;
	}
	return ans;
}

int Upper_bound(vi arr,int key){
	int s=0;
	int e=arr.size()-1;
	int ans=-1;
	while(s<=e){
		int mid=(s+e)/2;

		if(arr[mid]==key){
			ans=mid;
			s=mid+1;
		}
		else if(arr[mid]>key)
			e=mid-1;
		else
			s=mid+1;
	}
	return ans;
}





int main(){


	
	vi arr={0,1,1,2,3,3,3,3,4,5,5,5,10};
	int n=arr.size();
	cout<<"Lower Bound: ";
	cout<<Lower_bound(arr,3)<<endl;
	cout<<"Upper Bound: ";
	cout<<Upper_bound(arr,3)<<endl;

	cout<<"total de "<<3<<" :" <<Upper_bound(arr,3)-Lower_bound(arr,3)+1<<endl;


	//SLT


	return 0;
}

