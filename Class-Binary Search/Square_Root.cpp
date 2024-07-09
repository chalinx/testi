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

float squere_root(int N,int P){
	int l=0;
	int r=N;
	float ans=0;
	int mid;
	// BS
	while(l<=r){
		mid=(l+r)/2;
		if(mid*mid==N) 
			return mid;
		else if(mid*mid>N)
			r=mid-1;
		else {
			ans=mid;
			l=mid+1;
		}
	}

	//lineal
	float inc=0.1;
	fi(i,0,P,1){
		while(ans*ans<=N) //hasta q sea igual o menor
			ans+=inc;
		// volvemos a una posicion anterior
		ans-=inc;
		inc=inc/10.0;
		
	}

	return ans;

}



int main(){


cout<<squere_root(10,3);


	return 0;
}

