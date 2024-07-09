#include <iostream>
#include <string>

using namespace std;

int main() {
    string linea = "el rápido zorro marrón saltó sobre un perro perezoso";
    
    // Encontrar la posición de la cadena "zorro"
    size_t posicion = linea.find("zorro");
    
    if (posicion != string::npos) {
        cout << "La posición de la cadena 'zorro' es: " << posicion << endl;
    } else {
        cout << "La cadena 'zorro' no se encontró." << endl;
    }

    return 0;
}
