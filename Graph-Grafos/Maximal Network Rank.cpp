#include <vector>
#include <algorithm>
using namespace std;

int maximalNetworkRank(int n, vector<vector<int>>& roads) {
    vector<int> roadCount(n, 0);
    vector<vector<bool>> isConnected(n, vector<bool>(n, false));
    
    // Contar carreteras para cada ciudad y marcar ciudades conectadas
    for (const auto& road : roads) {
        roadCount[road[0]]++;
        roadCount[road[1]]++;
        isConnected[road[0]][road[1]] = isConnected[road[1]][road[0]] = true;
    }
    
    int maxRank = 0;
    // Calcular el rango máximo de red
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int rank = roadCount[i] + roadCount[j];
            if (isConnected[i][j]) {
                rank--; // Restar 1 si las ciudades i y j están directamente conectadas
            }
            maxRank = max(maxRank, rank);
        }
    }
    
    return maxRank;
}


int maximalNetworkRank(int n, vector<vector<int>>& roads) {
    vector<int> degree(n, 0); // Grado (número de conexiones) de cada nodo
    unordered_map<int, unordered_map<int, bool>> directConnection;

    // Contar conexiones y marcar conexiones directas
    for (const auto& road : roads) {
        degree[road[0]]++;
        degree[road[1]]++;
        directConnection[road[0]][road[1]] = directConnection[road[1]][road[0]] = true;
    }

    int maxRank = 0;
    // Calcular el rango de red para todas las parejas de nodos
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int rank = degree[i] + degree[j];
            if (directConnection[i][j]) {
                rank--; // Ajustar si i y j están directamente conectados
            }
            maxRank = max(maxRank, rank);
        }
    }

    return maxRank;
}
