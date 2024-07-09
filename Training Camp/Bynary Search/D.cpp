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
 
 int a,b; 
 int n;
char q[101][101];


void solve(){
cin>>a>>b;
 cin>>n;
  
   for(int i=0;i<a;i++){
   	for(int j=0;j<b;j++){
   		q[i][j]='.';
   	}
   }

	while(n--){
		int q1,w1,q2,w2;
		char r; 
		cin>>q1>>w1>>q2>>w2>>r;
		for(int i=q1-1;i<q2;i++){
			for(int j=w1-1;j<w2;j++){
				q[i][j]=r;
			}
		}		
	}
 
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<q[i][j];
		}
		cout<<endl;
	}
 
 
}
 
 
int main(){
 
#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	int t; cin>>t;
	while(t--){
		solve();
	}
 
 
	return 0;
}