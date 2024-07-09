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



	int n; cin>>n;
	vector<int> arr(n,0);
	vector<int> arr2(n+1,0);
	fi(i,0,n,1){
		cin>>arr[i];
		arr2[arr[i]]++;
	}
	for(int i =0;i<n+1;i++){
		if(arr2[i]==0)cout<<i;
	}
	
	



	return 0;
}



