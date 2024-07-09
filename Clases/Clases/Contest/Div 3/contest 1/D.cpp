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
	while(n--){
		int r; cin>>r;
		vector<int> w(r);
		fi(i,0,r,1)
			cin>>w[i];
		vector<int>w2;
		int cont=1;
		fi(i,0,r,1){
			if(w[i]!=w[i+1])w2.push_back(cont);
			cont++;
		}

		int t; cin>>t;
		int a,b;
		while(t--){
			cin>>a>>b;
			auto lower=lower_bound(all(w2),a);
			auto upper=lower_bound(all(w2),b);
			cout<<(lower-w2.begin())<<" "<<(upper-w2.be<<endl;
		}
	
			
	}



	return 0;
}



