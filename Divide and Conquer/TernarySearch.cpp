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

double f(double x){
	double y=-(x*x)+2*x;
	return y;
}

void solve(){
		
	double left=-100;
	double rigth=100;

	while(rigth-left>0.000000000000001){
		double mid1=(2*left+rigth)/3;
		double mid2=(left+2*rigth)/3;

		if(f(mid1)<f(mid2)) left=mid1;
		else rigth=mid2;
	}

	cout<<setprecision(15)<<fixed;
	cout<<left<<" "<<rigth<<endl;

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