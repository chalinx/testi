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

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	
	int n;
	cin>>n;

	vi r(n);
	vi q(n);
	fi(i,0,n,1){
		cin>>r[i];
		cin>>q[i];
	}

	vi aux(101);
	vi aux2(101);
	fi(i,0,n,1){
		aux[r[i]]++;
		aux2[q[i]]++;
	}
	int cont=0;
	fi(i,0,101,1){
		cont+=aux[i]*aux2[i];
	}

	cout<<cont;


	return 0;
}



