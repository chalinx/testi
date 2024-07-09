#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <string>
using namespace std;

struct Nodo {
    char c;
    unsigned freq;
    Nodo *izquierdo, *derecho;

    Nodo(char c, unsigned freq) {
        this->c = c;
        this->freq = freq;
        izquierdo = derecho = nullptr;
    }
};

struct Comparar {
    bool operator()(Nodo* l, Nodo* r) {
        return (l->freq > r->freq);
    }
};

void almacenarCodigos(Nodo* raiz, string str, map<char, string>& codigos) {
    if (!raiz)
        return;

    if (raiz->c != '$')
        codigos[raiz->c] = str;

    almacenarCodigos(raiz->izquierdo, str + "0", codigos);
    almacenarCodigos(raiz->derecho, str + "1", codigos);
}

int main() {
    #ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif

    string texto;
    getline(cin, texto);

    map<char, int> frecuencias;
    for (char c : texto) {
        frecuencias[c]++;
    }

    priority_queue<Nodo*, vector<Nodo*>, Comparar> minHeap;

    for (auto& pair : frecuencias) {
        minHeap.push(new Nodo(pair.first, pair.second));
    }

    while (minHeap.size() > 1) {
        Nodo* izquierdo = minHeap.top(); minHeap.pop();
        Nodo* derecho = minHeap.top(); minHeap.pop();

        Nodo* top = new Nodo('$', izquierdo->freq + derecho->freq);
        top->izquierdo = izquierdo;
        top->derecho = derecho;

        minHeap.push(top);
    }

    map<char, string> codigos;
    almacenarCodigos(minHeap.top(), "", codigos);

    cout<<"Codigo de Huffman"<<endl;
    for(auto i :codigos){
        cout<<i.first<<": "<<i.second<<endl;
    }
    

    return 0;
}
