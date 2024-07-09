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
    vector<pair<int, int>> *l;
    int V;

public:
    Graph(int n) {
        V = n;
        l = new vector<pair<int, int>>[n];
    }

    void addEdge(int x, int y, int w) {
        l[x].push_back({y, w});
        l[y].push_back({x, w});
    }

    int prim_mst() {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
        bool *visitado = new bool[V] {0};
        int ans = 0;

        Q.push({0, 0}); // {weight, node}

        while (!Q.empty()) {
            auto best = Q.top();
            Q.pop();

            int to = best.second;
            int weight = best.first;

            if (visitado[to]) continue;

            ans += weight;
            visitado[to] = 1;

            for (auto x : l[to]) {
                if (!visitado[x.first]) {
                    Q.push({x.second, x.first});
                }
            }
        }

        delete[] visitado; // Liberar la memoria
        return ans;
    }
};

void solve() {
    int n, m;
    cin >> n >> m;

    Graph g(n);

    for (int i = 0; i < m; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        g.addEdge(x - 1, y - 1, w);
    }

    cout << g.prim_mst() << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/Competitiva/input.txt", "r", stdin);
    freopen("D:/Competitiva/output.txt", "w", stdout);
#endif
    fast
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
