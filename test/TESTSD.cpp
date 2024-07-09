#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Función para imprimir la secuencia de t
int main() {
    // Matriz de tiempos de trabajo (dispositivos x estaciones)
    vector<vector<int>> times = {{4, 6,2},{5,6,8},}; // Smartphone, Tablet y mackboo en Ensamblaje, Prueba y Empaquetado
    int numDevices = times.size();
    int numStations = times[0].size();

    // Tabla de programación dinámica
    vector<vector<int>> dp(numDevices, vector<int>(numStations, 0));

    // Inicializar el primer dispositivo en cada estación
    dp[0][0] = times[0][0]; // Ensamblaje de Smartphone
    for (int j = 1; j < numStations; j++) {
        dp[0][j] = dp[0][j-1] + times[0][j]; // Continuar con Prueba y Empaquetado de Smartphone
    }

    // Llenar la tabla de DP para cada dispositivo en cada estación
    for (int i = 1; i < numDevices; i++) {
        dp[i][0] = dp[i-1][0] + times[i][0]; // Ensamblaje de Tablet
        for (int j = 1; j < numStations; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + times[i][j]; // Continuar con Prueba y Empaquetado de Tablet
        }
    }

    // Imprimir los resultados
    cout << "Makespan Total: " << dp[numDevices-1][numStations-1] << " horas\n";
   

    return 0;
}
