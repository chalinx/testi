#include <iostream>
#include <unordered_map>
#include <queue>
#include <vector>
#include <string>

// Estructura para representar un nodo del árbol de Huffman
struct Node {
    char symbol;
    int freq;
    Node* left;
    Node* right;

    Node(char s, int f) : symbol(s), freq(f), left(nullptr), right(nullptr) {}
};

// Comparador de nodos para la cola de prioridad
struct NodeComparator {
    bool operator()(const Node* a, const Node* b) {
        return a->freq > b->freq;
    }
};

// Función para construir el árbol de Huffman
Node* buildHuffmanTree(std::unordered_map<char, int>& frequencies) {
    std::priority_queue<Node*, std::vector<Node*>, NodeComparator> pq;

    // Agregar nodos hoja a la cola de prioridad
    for (auto& pair : frequencies) {
        pq.push(new Node(pair.first, pair.second));
    }

    // Construir el árbol de Huffman
    while (pq.size() > 1) {
        Node* left = pq.top();
        pq.pop();
        Node* right = pq.top();
        pq.pop();

        Node* parent = new Node('$', left->freq + right->freq);
        parent->left = left;
        parent->right = right;

        pq.push(parent);
    }

    return pq.top();
}

// Función para generar los códigos de Huffman
void generateCodes(Node* root, std::string code, std::unordered_map<char, std::string>& codes) {
    if (!root) {
        return;
    }

    if (!root->left && !root->right) {
        codes[root->symbol] = code;
    }

    generateCodes(root->left, code + "0", codes);
    generateCodes(root->right, code + "1", codes);
}

int main() {
    #ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
    std::unordered_map<char, int> frequencies;
    std::string input;

    // Solicitar al usuario ingresar una cadena de palabras
    std::cout << "Ingrese una cadena de palabras: ";
    std::getline(std::cin, input);

    // Calcular las frecuencias de los símbolos
    for (char c : input) {
        frequencies[c]++;
    }

    // Construir el árbol de Huffman
    Node* root = buildHuffmanTree(frequencies);

    // Generar los códigos de Huffman
    std::unordered_map<char, std::string> codes;
    generateCodes(root, "", codes);

    // Imprimir los códigos de Huffman
    std::cout << "Códigos de Huffman:" << std::endl;
    for (auto& pair : codes) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}