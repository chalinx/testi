#include <iostream>
#include <vector>
#include <climits>

using namespace std;

const int INF = INT_MAX;

void floydWarshall(vector<vector<int>>& dist, vector<vector<int>>& cam, int n) {
    for (int s = 0; s < n; ++s) {
        for (int t = 0; t < n; ++t) {
            if (dist[s][t] < INF)
                cam[s][t] = t;         
        }
    }

    for (int k = 0; k < n; ++k) {
        for (int s = 0; s < n; ++s) {
            if (dist[s][k] != INF) {
                for (int t = 0; t < n; ++t) {
                    if (dist[k][t] != INF) {
                        int d = dist[s][k] + dist[k][t];
                        if (d < dist[s][t]) {
                            dist[s][t] = d;
                            cam[s][t] = cam[s][k];
                        }
                    }
                }
            }
        }
    }
}

void imprimir(vector<vector<int>>& dist, vector<vector<int>>& cam, int n) {
    for (int s = 0; s < n; ++s) {
        for (int t = 0; t < n; ++t) {
            if (s != t) {
                if (dist[s][t] == INF) 
                    cout << "no hay camino del nodo " << s << " al " << t << endl;        
                else {
                    cout << "el camino más corto del nodo " << s << " al nodo " << t << " es " << dist[s][t] << " recorriendo ";
                    
                    for (int i = s; i != t; i = cam[i][t])  cout << i << "->";
          
                    cout << t << endl;
                }
            }
        }
    }
}

int main() {
    int n = 4;

    vector<vector<int>> dist = {
        {INF,  3,   INF,  8},
        {5, INF,  INF, INF},
        {10, INF, INF, INF},
        {INF, -2, INF, INF}
    };

    vector<vector<int>> cam(n, vector<int>(n, -1));

    floydWarshall(dist, cam, n);
    imprimir(dist, cam, n);

    return 0;
}
