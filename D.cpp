#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class arista {
public:
    int inicio, destino, peso;
};

class Graph {
public:
    int V, E;
    vector<arista> aristas;

    Graph(int V, int E) {
        this->V = V;
        this->E = E;
    }

    void unirArist(int u, int v, int w) {
        arista arist = { u, v, w };
        aristas.push_back(arist);
    }

    int find(vector<int>& parent, int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent, parent[i]);
    }

    void Union(vector<int>& padre, vector<int>& q, int x, int y) {
        int nodx = find(padre, x);
        int nody = find(padre, y);

        if (q[nodx] < q[nody])
            padre[nodx] = nody;
        else if (q[nodx] > q[nody])
            padre[nody] = nodx;
        else {
            padre[nody] = nodx;
            q[nodx]++;
        }
    }

    void boruvkaMST() {
        vector<int> padre(V);
        vector<int> q(V, 0);
        vector<int> gen(V, -1);

        for (int i = 0; i < V; i++)
            padre[i] = i;

        int numTrees = V;
        int MSTpeso = 0;

        while (numTrees > 1) {
            for (int i = 0; i < V; i++)
                gen[i] = -1;

            for (int i = 0; i < E; i++) {
                int set1 = find(padre, aristas[i].inicio);
                int set2 = find(padre, aristas[i].destino);

                if (set1 != set2) {
                    if (gen[set1] == -1 || aristas[gen[set1]].peso > aristas[i].peso)
                        gen[set1] = i;

                    if (gen[set2] == -1 || aristas[gen[set2]].peso > aristas[i].peso)
                        gen[set2] = i;
                }
            }

            for (int i = 0; i < V; i++) {
                if (gen[i] != -1) {
                    int set1 = find(padre, aristas[gen[i]].inicio);
                    int set2 = find(padre, aristas[gen[i]].destino);

                    if (set1 != set2) {
                        MSTpeso += aristas[gen[i]].peso;
                        cout << "arista " << aristas[gen[i]].inicio << " - " << aristas[gen[i]].destino
                            << " incluir\n";
                        Union(padre, q, set1, set2);
                        numTrees--;
                    }
                }
            }
        }

        cout << "el peso del mst es  " << MSTpeso << endl;
    }
};

int main() {
    int V = 4; 
    int E = 5; 
    Graph graph(V, E);

    graph.unirArist(0, 1, 10);
    graph.unirArist(0, 2, 6);
    graph.unirArist(0, 3, 5);
    
    graph.unirArist(1, 3, 15);
    graph.unirArist(2, 3, 4);

    graph.boruvkaMST();

    return 0;
}

