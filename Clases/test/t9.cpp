#include <iostream>
#include <string>
#include <regex>
#include <vector>

using namespace std;

int main() {
    // Definir el patrón para direcciones de correo electrónico más robusto
    regex email_pattern(R"(\b[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}\b)");

    // Frase de ejemplo que contiene posibles direcciones de correo electrónico
    string frase = "Contacto: usuario@example.com info@test.org bienvenido@ejemplo.co.uk";

    // Utilizar un sregex_iterator para buscar todas las coincidencias en la frase
    vector<string> correos;
    auto inicio = sregex_iterator(frase.begin(), frase.end(), email_pattern);
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
