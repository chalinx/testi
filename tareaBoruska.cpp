#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class arista {
public:
    int inicio, destino, peso;
};

class grafo {
public:
    int v, e;
    vector<arista> aristas;

    grafo(int v, int e) {
        this->v = v;
        this->e = e;
    }

    void unirArist(int u, int v, int w) {
        arista arist = { u, v, w };
        aristas.push_back(arist);
    }

    int find(vector<int>& padre, int i) {
        if (padre[i] == i)
            return i;
        return padre[i] = find(padre, padre[i]);
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
        vector<int> padre(v);
        vector<int> q(v, 0);
        vector<int> gen(v, -1);

        for (int i = 0; i < v; i++)
            padre[i] = i;

        int numTrees = v;
        int MSTpeso = 0;

        cout << "aristas unidas son: "<<endl;

        while (numTrees > 1) {
            for (int i = 0; i < v; i++)
                gen[i] = -1;

            for (int i = 0; i < e; i++) {
                int set1 = find(padre, aristas[i].inicio);
                int set2 = find(padre, aristas[i].destino);

                if (set1 != set2) {
                    if (gen[set1] == -1 || aristas[gen[set1]].peso > aristas[i].peso)
                        gen[set1] = i;

                    if (gen[set2] == -1 || aristas[gen[set2]].peso > aristas[i].peso)
                        gen[set2] = i;
                }
            }

            for (int i = 0; i < v; i++) {
                if (gen[i] != -1) {
                    int set1 = find(padre, aristas[gen[i]].inicio);
                    int set2 = find(padre, aristas[gen[i]].destino);

                    if (set1 != set2) {
                        MSTpeso += aristas[gen[i]].peso;
                        cout << "Arista " << aristas[gen[i]].inicio << " - " << aristas[gen[i]].destino
                            << " con peso " << aristas[gen[i]].peso << endl;
                        Union(padre, q, set1, set2);
                        numTrees--;
                    }
                }
            }
        }

        cout << "El peso total del MST es " << MSTpeso << endl;
    }
};

int main() {
    int v = 8; 
    int e = 12;
   grafo graf(v, e);

    graf.unirArist(0, 6, 53);
    graf.unirArist(0, 1, 32);
    graf.unirArist(0, 2, 29);
    graf.unirArist(4, 3, 34);
    graf.unirArist(5, 3, 18);
    graf.unirArist(7, 4, 46);
    graf.unirArist(5, 4, 40);
    graf.unirArist(0, 5, 60);
    graf.unirArist(6, 4, 51);
    graf.unirArist(7, 0, 31);
    graf.unirArist(7, 6, 25);
    graf.unirArist(7, 1, 21);

    graf.boruvkaMST();

    return 0;
}
