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


	
	int n,m;cin>>n;

	while(n--){
		cin>>m;
		int m5=m%5==0?m:((m/5+1)*5);
		if(m<38)cout<<m;
		else if(m5-m<3)cout<<m5;
		else cout<<m;
		cout<<endl;
	}



	return 0;
}



