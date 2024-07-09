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

class Graph{
private:
	int V;
	list<int> *l;
public:
	Graph(int v){
		V=v;
		l=new list<int>[V];
	}

	void addEdge(int i,int j,bool unir=true){

		l[i].push_back(j);
		if(unir){
			l[j].push_back(i);
		}
	}

	void bfs(int source){
		queue<int> q;
		bool *visitado=new bool[V]{0};

		q.push(source);
		visitado[source]=true;

		while(!q.empty()){
			int f=q.front();
			cout<<f<<endl;
			q.pop();
			for(auto nbr: l[f]){
				if(!visitado[nbr]){
					q.push(nbr);
					visitado[nbr]=true;
				}
			}
		}

	}

	void dfsHelper(int node,bool*visitado){
		visitado[node]=true;
		cout<<node<<endl;

		for(int nbr: l[node])
			if(!visitado[nbr])
				dfsHelper(nbr,visitado);
		

		return;
	}

	void dfs(int source){

		bool *visitado=new bool[V]{0};
		dfsHelper(source,visitado);



	}

};




void solve(){
	
	Graph g(7);

	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,5);
	g.addEdge(5,6);
	g.addEdge(4,5);
	g.addEdge(0,4);
	g.addEdge(3,4);

	g.dfs(1);


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