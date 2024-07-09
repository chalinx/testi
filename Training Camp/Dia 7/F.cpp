#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1e7 + 1;
vector<int> esPrimo(MAXN, 1), primos;

void criba() {
    esPrimo[0] = esPrimo[1] = 0;
    for (int i = 2; i * i < MAXN; ++i) {
        if (esPrimo[i]) {
            for (int j = i * i; j < MAXN; j += i)
                esPrimo[j] = 0;
        }
    }
    for (int i = 2; i < MAXN; ++i)
        if (esPrimo[i])
            primos.push_back(i);
}

void factoriza(int n) {
    for (int p : primos) {
        if (p * p > n) break;
        while (n % p == 0) {
            cout << p << " ";
            n /= p;
        }
    }
    if (n > 1) cout << n; // Si n es un primo mayor que sqrt(n)
    cout << "\n";
}

int main() {
    criba(); // Precomputar los números primos
    int q, n;
    cin >> q;
    while (q--) {
        cin >> n;
        factoriza(n);
    }
    return 0;
}
