#include <iostream>
#include <string>
#include <regex>
#include <vector>

using namespace std;

int main() {
    vector<string> lista = {" ","abc ","abc", " abc"};

    regex patron("^a\\w*");

    for (auto elemento : lista) {
        if (regex_match(elemento, patron)) {
            cout << "'" << elemento << "' coincide con el patrón." << endl;
        } else {
            cout << "'" << elemento << "' no coincide con el patrón." << endl;
        }
    }

    return 0;
}
