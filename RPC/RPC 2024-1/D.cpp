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


vector<vector<int>> pref(string q){
	int n=q.size();
	vector<vector<int>> w(n+1,vector<int>(4,0)); //w[4][]

	for(int i=1;i<n+1;i++){
		if(q[i-1]=='A')w[i][0]++;
		if(q[i-1]=='T')w[i][1]++;
		if(q[i-1]=='G')w[i][2]++;
		if(q[i-1]=='C')w[i][3]++;
		for(int j=0;j<4;j++)
			w[i+1][j]=w[i][j];
		
	}
	return w;
/*	for(int i=0;i<n;i++){
		for(int j =0;j<4;j++){
			cout<<w[i][j]<<" ";
		}
		cout<<endl;
	}*/

}
int ordn(int nuc) {
    switch(nuc) {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
    }
    return 0; 
}


int compare(int &a,int &b) {

    return a > b;
}



void solve(vct<vi> r){
	int a,b; cin>>a>>b;
	vector<int>w(4);
	for(int i =0;i<4;i++){
		w[i]=r[b-1][i]-r[a-1][i];
	}
	w[0]=abs(r[a-1][0]-r[b][0]);
	w[1]=abs(r[a-1][1]-r[b][1]);
	w[2]=abs(r[a-1][2]-r[b][2]);
	w[3]=abs(r[a-1][3]-r[b][3]);

	for(auto i:w)
		cout<<i;

cout<<endl;
}


int main(){
	#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	string q; cin>>q;
	vector<vector<int>>r=pref(q);
	for(int i =0;i<=r.size();i++){
		for(int j=0;j<4;j++){
			cout<<r[i][j];
		}	
		cout<<endl;
	}
	return 0;
}