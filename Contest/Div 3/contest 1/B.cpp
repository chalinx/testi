#include <iostream>
#include <vector>
#include <string>

using namespace std;

string construirCadena(const vector<int>& traza) {
    string s = "";
    vector<int> count(26, 0); // Frecuencia de cada letra
    for (int ai : traza) {
        for (int j = 0; j < 26; ++j) {
            if (count[j] == ai) {
                // Encontramos la letra a añadir
                s += char('a' + j);
                count[j]++;
                break;
            }
        }
    }
    return s;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> traza(n);
        for (int i = 0; i < n; ++i) {
            cin >> traza[i];
        }
        cout << construirCadena(traza) << endl;
    }
    return 0;
}
