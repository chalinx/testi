#include <iostream>
#include <string>
#include <regex>
#include <vector>

using namespace std;

int main() {
    // Frase de ejemplo
    string frase = "Para enviar un correo electrónico a Guido, intente guido@python.org o la dirección anterior guido@google.com";

    // Patrón para identificar direcciones de correo electrónico
    regex patron_email(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");

    // Utilizar un sregex_iterator para buscar todas las coincidencias en la frase
    vector<string> correos;
    auto inicio = sregex_iterator(frase.begin(), frase.end(), patron_email);
    auto fin = sregex_iterator();

    for (auto i = inicio; i != fin; ++i) {
        smatch match = *i;
        correos.push_back(match.str());
    }

    // Imprimir todas las direcciones de correo electrónico encontradas
    cout << "Direcciones de correo encontradas:" << endl;
    for (const auto& correo : correos) {
        cout << correo << endl;
    }

    return 0;
}
