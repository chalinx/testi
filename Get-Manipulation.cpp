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


int Get_manipulation(int n,int i){
	int mask=(1<<i);// el i es la posicion del bit
	return n&mask?1:0;
}

void Set_manipulation(int &n, int i){
	int mask=(1<<i);
	n=(n|mask);
}

void clear_manipulation(int &n,int i){
	int mask=~(1<<i);
	n=(n&mask);
}

int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	 int n=5;
	cout<< Get_manipulation(n,0);
	Get_manipulation(n,0);
	cout<<n;



	return 0;
}



