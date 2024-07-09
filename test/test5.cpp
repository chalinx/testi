#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef map<int, int> mpii;

// Función para combinar dos mapas de frecuencias y encontrar la moda.
pair<int, int> combinarYEncontrarModa(const mpii& izq, const mpii& der) {
    mpii combinado = izq;
    pair<int, int> moda = {0, 0}; // Inicialmente, ningún elemento y frecuencia cero.

    // Añade o actualiza las frecuencias de la mitad derecha en el mapa combinado.
    for (const auto& elem : der) {
        combinado[elem.first] += elem.second;
    }

    // Encuentra la moda (elemento con mayor frecuencia) en el mapa combinado.
    for (const auto& elem : combinado) {
        if (elem.second > moda.second) {
            moda = elem;
        }
    }

    return moda;
}

mpii dividirYEncontrarFrecuencias(const vector<int>& datos, int inicio, int fin) {
    mpii frecuencias;
    for (int i = inicio; i <= fin; ++i) {
        frecuencias[datos[i]]++;
    }
    return frecuencias;
}


pair<int, int> dividirYEncontrarModa(const vector<int>& datos, int inicio, int fin) {
    if (inicio > fin) {
        // Rango inválido, retorna un par indicando ningún elemento y frecuencia cero.
        return {-1, 0};
    }

    if (inicio == fin) {
        // Caso base: Solo un elemento en el rango, inicia su frecuencia a 1.
        return {datos[inicio], 1};
    }

    // Divide el vector en dos mitades y procesa cada una recursivamente.
    int med = (inicio + fin) / 2;
   

    // Combinar las frecuencias de las dos mitades y encontrar la moda.
    mpii frecuenciasIzq = dividirYEncontrarFrecuencias(datos, inicio, med);
    mpii frecuenciasDer = dividirYEncontrarFrecuencias(datos, med + 1, fin);
    return combinarYEncontrarModa(frecuenciasIzq, frecuenciasDer);
}


int main() {
    vector<int> v = {5,5,5,5,1,1,2,2,3,4,5,3,3,6,6,6,6,6,6,7,4,4,4};

    auto moda = dividirYEncontrarModa(v, 0, v.size() - 1);
    if (moda.first != -1) {
        cout << "Moda: " << moda.first << " con frecuencia: " << moda.second << endl;
    } else {
        cout << "El vector está vacío o hubo un error." << endl;
    }

    return 0;
}
