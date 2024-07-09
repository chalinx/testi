#include<bits/stdc++.h>
#define ll long long int

#define all(a) a.begin(), a.end()
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define vi vector<int>
#define vll vector<ll>
#define vct vector
#define pb push_back
#define er erase
#define fi(i,a,n,w) for(int i = a; i < n; i += w)
#define fl(i,a,n,w) for(ll i = a; i < n; i += w)
#define fr first
#define se second
#define sz(a) a.size()
#define mstr(r) for(auto i : r) cout << i << " ";
#define pll pair<ll,ll>
#define pii pair<int,int>

using namespace std;

class Graph {
    int V;
    list<pair<int, int>> l;

public:
    Graph(int v) {
        this->V = v;
    }

    void addEdge(int u, int v) {
        l.push_back(make_pair(u, v));
    }

    int findSet(int i, int parent[]) {
        if (parent[i] == -1) return i;
        return findSet(parent[i], parent);
    }

    void union_set(int x, int y, int parent[]) {
        int s1 = findSet(x, parent);
        int s2 = findSet(y, parent);
        if (s1 != s2) parent[s1] = s2;
    }

    bool contains_cycle() {
        int *parent = new int[V];

        for (int i = 0; i < V; i++) parent[i] = -1;

        for (auto edge : l) {
            int i = edge.first;
            int j = edge.second;

            int s1 = findSet(i, parent);
            int s2 = findSet(j, parent);

            if (s1 != s2) {
                union_set(s1, s2, parent);
            } else {
                delete[] parent;
                return true;
            }
        }

        delete[] parent;
        return false;
    }
};

void solve() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 0);

    cout << g.contains_cycle() << endl;
}

int main() {

    fast
    int t=1;
    while (t--) {
        solve();
    }

    return 0;
}
