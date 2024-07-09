#include <vector>
#include <iostream>
using namespace std;

int findCenter(vector<vector<int>>& edges) {
    // El centro estará en ambas aristas, 
    //comparamos un nodo de la primera arista
    // con los nodos de la segunda arista.
    int u1 = edges[0][0], u2 = edges[0][1];
    int v1 = edges[1][0], v2 = edges[1][1];
    
    // Si u1 es igual a v1 o v2, entonces u1 es el centro. De lo contrario, u2 es el centro.
    if (u1 == v1 || u1 == v2) return u1;
    else return u2;
}

int main() {
    vector<vector<int>> edges = {{1,2}, {2,3}, {4,2}};
    cout << "The center of the star graph is: " << findCenter(edges) << endl;
    return 0;
}
