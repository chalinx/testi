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
#define sz(i) i.size()
using namespace std;

int countSubarr(vi &nums, int target){
	int cont=0; // contador de subarr que cumplen la condicion
	int sum=0;
	int start=0;

	fi(end,0,sz(nums),1){
		sum+=nums[end]; //añadimos el elemento actual a la suma

		//ajustamos la ventana mientras las uma exceda el objetivo
		while(sum>target and start<=end){
			sum-=nums[start]; //restamos el elemento en start de la suma
			start++;
		}

		//si la suma es igual al objetivo, incrementamos el contador 
		if(sum==target) cont++;
	}

	return cont;
}


void solve(){
	
	vi arr={1,2,3,7,5};

 	cout<<countSubarr(arr,12);

 	

}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	int t=1;
	while(t--){
		solve();
	}

	return 0;
}