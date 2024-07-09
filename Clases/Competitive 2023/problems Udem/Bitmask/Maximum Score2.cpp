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

int matrixScore(vector<vector<int>> grid) {


	for(int i=0;i<grid.size();i++){
		if(grid[i][0]==0){
			for(int j=0;j<grid[i].size();j++){
				grid[i][j]=1-grid[i][j];
			}
		}
		
	}

	int maxCol;
	for(int j=0;j<grid[0].size();j++){
		maxCol=0;
		for (int i = 0; i < grid.size(); ++i){
			if(grid[j][i]==1)
				maxCol++;
		}
	}

		
		



}



int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	
	vector<vector<int>> r= {{1,1,1,},{1,1,3}};

	for(int i =0;i<r.size();i++){	//filas
		for(int j=0;j<r[i].size();j++){ //columnas
			cout<<r[i][j];
		}
		cout<<endl;
	}



	return 0;
}



