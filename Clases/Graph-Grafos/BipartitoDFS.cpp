#include<bits/stdc++.h>
#define ll long long int

#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
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

bool dfs_helper(vector<int> graph[], int node, int visitado[], int parent, int color) {
   
    visitado[node] = color;

    for (auto nbr : graph[node]) {
        if (visitado[nbr] == 0) {
            bool subprob = dfs_helper(graph, nbr, visitado, node, 3 - color);
            if (!subprob)
                return false;
        } else if (nbr != parent && color == visitado[nbr]) {
            return false;
        }
    }
    return true;
}

bool dfs(vector<int> graph[], int N) {
    int visitado[N] = {0};
    int color = 1;
    bool ans = dfs_helper(graph, 0, visitado, -1, color);

    for (int i = 0; i < N; i++)
        cout << i << " - Color " << visitado[i] << endl;

    return ans;
}

void solve() {
    int N, M; 
    cin >> N >> M;

    vector<int> graph[N];
    while (M--) {
        int x, y; 
        cin >> x >> y;

        graph[x].pb(y);
        graph[y].pb(x);
    }

    if (dfs(graph, N))
        cout << "Si es Bipartito";
    else 
        cout << "No lo es";
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
