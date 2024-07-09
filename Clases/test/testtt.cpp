#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Función para imprimir la secuencia de trabajos y los tiempos de finalización
void printSchedule(const vector<vector<int>>& schedule) {
    for (int i = 0; i < schedule.size(); i++) {
        for (int j = 0; j < schedule[i].size(); j++) {
            cout << "M" << j+1 << " T" << i+1 << ": " << schedule[i][j] << "h ";
        }
        cout << endl;
    }
}

int main() {
    // Matriz de tiempos de trabajo (tareas x máquinas)
    vector<vector<int>> times = {{2, 3}, {4, 2}, {1, 2}};
    // Número de tareas y máquinas
    int numTasks = times.size();
    int numMachines = times[0].size();

    // Tabla de programación dinámica
    vector<vector<int>> dp(numTasks, vector<int>(numMachines, 0));

    // Inicializa la primera tarea en cada máquina
    dp[0][0] = times[0][0];
    for (int j = 1; j < numMachines; j++) {
        dp[0][j] = dp[0][j-1] + times[0][j];
    }

    // Llenar la tabla de DP
    for (int i = 1; i < numTasks; i++) {
        dp[i][0] = dp[i-1][0] + times[i][0];
        for (int j = 1; j < numMachines; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + times[i][j];
        }
    }

    // Imprimir los resultados
    cout << "Makespan total: " << dp[numTasks-1][numMachines-1] << " horas\n";
    printSchedule(dp);

    return 0;
}
