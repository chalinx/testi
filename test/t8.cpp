#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    // Definir el patrón para direcciones de correo electrónico
    regex email(R"(\w+@\w+\.[a-z]{3})");

    // Ejemplo de uso
    string texto = "Mi correo es ejemplo@email.com";
    smatch resultado;
    if (regex_search(texto, resultado, email)) {
        cout << "Dirección de correo encontrada: " << resultado[0] << endl;
    } else {
        cout << "No se encontró una dirección de correo." << endl;
    }

    return 0;
}
