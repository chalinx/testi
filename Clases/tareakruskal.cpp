#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class arista {
public:
    int ini, fin, peso;
    arista(int o, int d, int p) :ini(o), fin(d), peso(p) {}
};

class subgrafos {
public:
    int nodpadre;
    int tam;
    subgrafos(int p = 0, int r = 0) :nodpadre(p), tam(r) {}
};

int buscar(subgrafos* w, int i) {
    if (w[i].nodpadre != i) {
        w[i].nodpadre = buscar(w, w[i].nodpadre);
    }
    return w[i].nodpadre;
}

void unir(subgrafos* w, int x, int y) {
    int aux1 = buscar(w, x);
    int aux2 = buscar(w, y);

    if (w[aux1].tam < w[aux2].tam) w[aux1].nodpadre = aux2;

    else if (w[aux1].tam > w[aux2].tam) w[aux2].nodpadre = aux1;

    else {
        w[aux2].nodpadre = aux1;
        w[aux1].tam++;
    }
}

bool comp(arista a, arista b) {
    return a.peso < b.peso;
}

class kruskal {
public:
    int numv;
    vector<arista> aristas;

    kruskal(int vertices) : numv(vertices) {}

    void uniarist(int ini, int fin, int peso) {
        aristas.emplace_back(ini, fin, peso);
    }

    void buscarsubarbol() {
        sort(aristas.begin(), aristas.end(), comp);

        vector<arista> res;
        res.reserve(numv - 1);

        subgrafos* w = new subgrafos[numv];
        for (int v = 0; v < numv; ++v) w[v] = subgrafos(v, 0);

        for (auto i : aristas) {
            int x = buscar(w, i.ini);
            int y = buscar(w, i.fin);
            if (x != y) {
                res.push_back(i);
                unir(w, x, y);
            }
        }

        cout << "MST de kruskal: " << endl;
        cout << "T={";
        for (int i = 0; i < res.size(); i++) {
            cout << res[i].ini << "-" << res[i].fin << ":" << res[i].peso << ",";
        }
        cout << "}";
        cout << endl;
        delete[] w;
    }
};

int main() {
    int numv = 8;
    kruskal kruskal(numv);

    kruskal.uniarist(0, 6, 53);
    kruskal.uniarist(0, 1, 32);
    kruskal.uniarist(0, 2, 29);
    kruskal.uniarist(4, 3, 34);
    kruskal.uniarist(5, 3, 18);
    kruskal.uniarist(7, 4, 46);
    kruskal.uniarist(5, 4, 40);
    kruskal.uniarist(0, 5, 60);
    kruskal.uniarist(6, 4, 51);
    kruskal.uniarist(7, 0, 31);
    kruskal.uniarist(7, 6, 25);
    kruskal.uniarist(7, 1, 21);

    kruskal.buscarsubarbol();

    return 0;
}
