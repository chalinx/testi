#include <iostream>
#include <vector>

using namespace std;

struct Provision {
    string nombre;
    int peso;
    int valor;
};

vector<int> X; 
vector<int> optBits; 
int optValue = 0;

bool espacio(vector<Provision>& items, int cap) {
    int sum = 0;
    for (int i = 0; i < items.size(); i++) {
        sum += X[i] * items[i].peso;
    }
    return sum <= cap;
}

void valor_opt(vector<Provision>& items) {
    int sum = 0;
    for (int i = 0; i < items.size(); i++) {
        sum += X[i] * items[i].valor;
    }
    if (sum > optValue) {
        optValue = sum;
        optBits = X;
    }
}

void knapsack(vector<Provision>& items, int level, int cap) {
    if (level == items.size()) {
        if (espacio(items, cap)) {
            valor_opt(items);
        }
    } else {
        X[level] = 1;
        if (espacio(items, cap)) {
            knapsack(items, level + 1, cap);
        }
        X[level] = 0;
        knapsack(items, level + 1, cap);
    }
}

int main() {
    int cap = 15;
    //nombre, peso, valor
    vector<Provision> items = {
        {"cobre", 15, 20},
        {"bronce", 12, 30},
        {"plata", 10, 40},
        {"oro", 5, 50}
    };

    X.resize(items.size(), -1);
    optBits.resize(items.size(), -1);

    knapsack(items, 0, cap);

    cout << "Mejor valor: " << optValue << endl;
    cout << "Items seleccionados: " << endl;
    for (int i = 0; i < items.size(); i++) {
        if (optBits[i]) {
            cout << items[i].nombre << endl;
        }
    }

    return 0;
}
