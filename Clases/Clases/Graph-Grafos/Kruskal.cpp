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

class DSU{

	int *parent;
	int *rank;

public: DSU(int n){
	parent= new int[n];
	rank= new int[n];

	for(int i=0;i<n;i++) {
		parent[i]=-1;
		rank[i]=1;
	}
}

	int find(int i){
		if(parent[i]==-1) return i;

		return parent[i]=find(parent[i]);
	}

	void unite(int x,int y){
		int s1=find(x);
		int s2=find(y);

		if(s1!=s2){
			if(rank[s1]<rank[s2]){
				parent[s1]=s2;
				rank[s2]+=rank[s1];
			}
			else {
				parent[s2]=s1;
				rank[s1]+=rank[s2];
			}
		}

	}
};

class Graph{

	vector<vector<int>> edgelist;
	int V;

public:
	Graph(int V){
		this->V=V;
	}

	void addEdge(int x,int y,int w){
		edgelist.push_back({w,x,y});
	}

	int kruskal_mst(){

		sort(edgelist.begin(),edgelist.end());

		DSU s(V);

		int ans=0;

		for(auto edge: edgelist){
			int w=edge[0];
			int x=edge[1];
			int y=edge[2];


			if(s.find(x)!=s.find(y)){
			s.unite(x,y);
			ans+=w;
			}
		}

		return ans;




	}



};


void solve(){
	
	Graph g(4);

	g.addEdge(0,1,1);
	g.addEdge(1,3,3);
	g.addEdge(3,2,4);
	g.addEdge(2,0,2);
	g.addEdge(0,3,2);
	g.addEdge(1,2,2);

	cout<<g.kruskal_mst()<<endl;
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