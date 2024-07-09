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
	int n; cin>>n;
	while(n--){
		int a,b,k; cin>>a>>b>>k;
		set<int> ai,bi,ci;
		int q1,q2;
		fi(i,0,a,1) {
			cin>>q1;
			ai.insert(q1);		
		}
		fi(i,0,b,1) {
			cin>>q2;
			bi.insert(q2);
		}
		if(ai.size()<3 || bi.size()<3){
			cout<<"No";
			return 0;
		}
		else{
			a=*ai.begin();
			b=*bi.begin();
			
		}
	}	

	return 0;
}



