#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Función recursiva con memorización para calcular el mínimo tiempo necesario
int minTime(int i, int N, vector<int>& tiempo, int daysResting, vector<vector<int>>& memo) {
    // Si hemos pasado tres días consecutivos sin trabajar, no es válido
    if (daysResting >= 3) return INT_MAX;
    
    // Si hemos llegado al final del arreglo
    if (i >= N) return 0;

    // Verificar si ya tenemos un resultado memorizado
    if (memo[i][daysResting] != -1) return memo[i][daysResting];

    // Opción 1: Nikhil trabaja el día 'i'
    int workToday = tiempo[i] + minTime(i + 1, N, tiempo, 0, memo);  // Reset daysResting to 0

    // Opción 2: Nikhil no trabaja el día 'i'
    int restToday = minTime(i + 1, N, tiempo, daysResting + 1, memo);  // Incrementa daysResting

    // Almacenamos el resultado en la memoria y lo devolvemos
    return memo[i][daysResting] = min(workToday, restToday);
}

int main() {
    #ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
    int N;
    cout << "Ingrese el número de días: ";
    cin >> N;

    vector<int> tiempo(N);
    cout << "Ingrese los tiempos para cada día: ";
    for (int i = 0; i < N; i++) {
        cin >> tiempo[i];
    }

    // Inicializar la memoria con -1, indicando que no se ha calculado ningún resultado
    vector<vector<int>> memo(N, vector<int>(3, -1));  // 3 porque daysResting puede ser 0, 1 o 2

    // Iniciamos la recursión desde el día 0 y sin días de descanso acumulados
    int result = minTime(0, N, tiempo, 0, memo);
    cout << "El mínimo tiempo necesario es: " << result << endl;

    return 0;
}