#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

class dijkstra {
public:
    int numv;
    vector<pair<int, int>>* adj;
    dijkstra(int vertices) : numv(vertices) {
        adj = new vector<pair<int, int>>[numv];
    }

    ~dijkstra() {
        delete[] adj;
    }

    void uniarist(int ini, int fin, int peso) {
        adj[ini].emplace_back(fin, peso);
        adj[fin].emplace_back(ini, peso); 
    }

    void buscarsubarbol(int start) {
        vector<int> dist(numv, INT_MAX);
        vector<int> parent(numv, -1);
        vector<bool> visited(numv, false);

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.emplace(0, start);
        dist[start] = 0;

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            if (visited[u]) continue;
            visited[u] = true;

            for (const auto& [v, peso] : adj[u]) {
                if (!visited[v] && dist[u] + peso < dist[v]) {
                    dist[v] = dist[u] + peso;
                    pq.emplace(dist[v], v);
                    parent[v] = u;
                }
            }
        }

        cout << "SPT de Dijkstra:" << endl;
        cout << "T={";
        for (int i = 0; i < numv; ++i) {
            if (parent[i] != -1) {
                cout << 0 << "-" << i << ":" << dist[i] << ",";
            }
        }
        cout << "}" << endl;
    }
};

int main() {
    int numv = 6;
    dijkstra djk(numv);

    djk.uniarist(0, 1, 41);
    djk.uniarist(1, 2, 51);
    djk.uniarist(2, 3, 50);
    djk.uniarist(4, 3, 36);
    djk.uniarist(3, 5, 38);
    djk.uniarist(3, 0, 45);
    djk.uniarist(0, 5, 29);
    djk.uniarist(5, 4, 21);
    djk.uniarist(1, 4, 32);
    djk.uniarist(4, 2, 32);
    djk.uniarist(5, 1, 24);

    int inicio = 0;
    djk.buscarsubarbol(inicio);

    return 0;
}
