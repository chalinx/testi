#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    // Frase de ejemplo con direcciones de correo electrónico
    string frase = "Para enviar un correo electrónico a Guido, intente guido@python.org o la dirección anterior guido@google.com";

    // Patrón para identificar direcciones de correo electrónico
    regex patron_email(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");

    // Reemplazar todas las direcciones de correo electrónico por '--@--.--'
    string frase_oculta = regex_replace(frase, patron_email, "--@--.--");

    // Imprimir la frase modificada
    cout << "Frase modificada: " << frase_oculta << endl;

    return 0;
}
