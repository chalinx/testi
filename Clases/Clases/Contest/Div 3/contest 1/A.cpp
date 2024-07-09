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
		int q,a=0,b=0; cin>>q;
		string r; cin>>r;
		fi(i,0,q,1){
			if(r[i]=='B') {
				a=i;
				break;
			}
		}
	
		for(int i=q-1;i>=0;i--){
			if(r[i]=='B') {
				b=i;
			break;
			}
		}
		
		cout<<b-a+1<<endl;
	}

	return 0;
}



