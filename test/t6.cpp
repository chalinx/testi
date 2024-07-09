#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string linea = "el rápido zorro marrón saltó sobre un perro perezoso";

    // Definir el patrón de búsqueda y la cadena de reemplazo
    regex patron("zorro");
    string reemplazo = "lobo";

    // Reemplazar todas las ocurrencias del patrón en la cadena
    string nueva_linea = regex_replace(linea, patron, reemplazo);

    cout << "Cadena original: " << linea << endl;
    cout << "Cadena modificada: " << nueva_linea << endl;

    return 0;
}
