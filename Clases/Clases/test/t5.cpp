#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string linea = "el rápido zorro marrón saltó sobre un perro perezoso";
    
    // Definir el patrón de búsqueda
    regex patron("zorro");
    
    // Buscar el patrón en la cadena
    smatch resultado;
    if (regex_search(linea, resultado, patron)) {
        cout << "La posición del patrón 'zorro' es: " << resultado.position() << endl;
    } else {
        cout << "El patrón 'zorro' no se encontró." << endl;
    }

    return 0;
}
