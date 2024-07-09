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

vector<int> r(3,0);
int n,m;
cin>>n;
	fi(i,0,n,1){
		cin>>m;
		if(m>0)r[0]++;
		else if(m==0)r[1]++;
		else r[2]++;
	}

cout<<fixed<<setprecision(6)<<float(r[0])/n<<endl;
cout<<fixed<<setprecision(6)<<float(r[2])/n<<endl;
cout<<fixed<<setprecision(6)<<float(r[1])/n<<endl;

	

	return 0;
}



