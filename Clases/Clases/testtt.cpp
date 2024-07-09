#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct Grafo {
    int V;
    int** matrixadj;

    Grafo(int v) {
        this->V = v;
        matrixadj = new int* [v];
        for (int i = 0; i < v; i++) {
            matrixadj[i] = new int[v];
            for (int j = 0; j < v; j++) {
                matrixadj[i][j] = 0;
            }
        }
    }

    ~Grafo() {
        for (int i = 0; i < V; i++) {
            delete[] matrixadj[i];
        }
        delete[] matrixadj;
    }

    void arista(int src, int dest) {
        matrixadj[src][dest] = 1;
        matrixadj[dest][src] = 1;
    }
};

void dfs(int ini, Grafo* grafo) {
    vector<bool> visitado(grafo->V, false);
    stack<int> s;
    s.push(ini);

    cout << "dfs inicia desde el nodo " << ini << endl;
    cout << "recorrido del dfs: ";

    while (!s.empty()) {
        int w = s.top();
        s.pop();

        if (!visitado[w]) {
            cout << w << " ";
            visitado[w] = true;

            for (int i = grafo->V - 1; i >= 0; i--) {
                if (grafo->matrixadj[w][i] == 1 && !visitado[i]) {
                    s.push(i);
                }
            }
        }
    }
    cout << endl;
}

int main() {
    int V = 9;
    Grafo* G = new Grafo(V);

    G->arista(0, 1);
    G->arista(0, 6);
    G->arista(1, 5);
    G->arista(2, 8);
    G->arista(0, 3);
    G->arista(0, 2);
    G->arista(3, 2);
    G->arista(3, 7);
    G->arista(1, 7);

    dfs(0, G);

    delete G;

    return 0;
}
