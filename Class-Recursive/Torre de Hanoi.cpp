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
int sum=0;
void tower_hannoi(int n,char a,char b,char c){

	if(n==1){
		cout<<a<<"->"<<c<<endl;
		sum++;
		return;
	}
	
	tower_hannoi(n-1,a,c,b);
	cout<<a<<"->"<<c<<endl; sum++;
	tower_hannoi(n-1,b,a,c);
}



int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	tower_hannoi(3,'a','b','c');
	cout<<sum;
	return 0;
}



