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
#define sz(a) a.size()
#define mstr(r) for(auto i:r)cout<<i<<" ";
#define pll pair<ll,ll>
#define pii pair<int,int>

using namespace std;

int conv(char q){
	return q-48;
}

void solve(){
	
	string r; cin>>r;
	int n=sz(r);
	int x1,x2=-1;
	bool band=true;
	fi(i,0,n,1){
		if(r[i]=='4'){
			if(band) x1=i,band=false;
		}
		else if(conv(r[i])>=5){x2=i;break;}
		else band=true;
	}

	if(x2==-1)cout<<r;
	else if(band==false and x2!=-1){
		if(x1==0){
			cout<<1;
			fi(i,0,n,1)cout<<0;
		}
		else{
			fi(i,0,x1-1,1)cout<<r[i];cout<<conv(r[x1-1])+1;
			fi(i,x1,n,1)cout<<0;
		}
	}
	else{
		if(x2==0){
			cout<<1;
			fi(i,0,n,1)cout<<0;
		}
		else{
			fi(i,0,x2-1,1)cout<<r[i];cout<<conv(r[x2-1])+1;
			fi(i,x2,n,1)cout<<0;
		}
	}
	
	cout<<endl;
}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	string r="12345";
	r='0'+r;
	cout<<r;


	return 0;
}