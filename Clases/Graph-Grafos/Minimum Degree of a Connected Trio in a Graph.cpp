#include <vector>
#include <algorithm>
using namespace std;

int minTrioDegree(int n, vector<vector<int>>& edges) {
    vector<vector<bool>> adj(n + 1, vector<bool>(n + 1, false));
    vector<int> degree(n + 1, 0);
    int minDegree = INT_MAX;

    // Construir matriz de adyacencia y contar grados
    for (auto& e : edges) {
        adj[e[0]][e[1]] = adj[e[1]][e[0]] = true;
        degree[e[0]]++;
        degree[e[1]]++;
    }

    // Buscar trios conectados y calcular su grado
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            for (int k = j + 1; k <= n; ++k) {
                if (adj[i][j] && adj[j][k] && adj[i][k]) {
                    // Si i, j, k forman un trío, calcular el grado
                    int trioDegree = degree[i] + degree[j] + degree[k] - 6; // Restar aristas internas
                    minDegree = min(minDegree, trioDegree);
                }
            }
        }
    }

    return minDegree == INT_MAX ? -1 : minDegree;
}
