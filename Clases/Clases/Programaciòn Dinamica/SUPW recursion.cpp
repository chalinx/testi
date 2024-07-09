#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Función recursiva para calcular el mínimo tiempo necesario con impresiones para depuración
int minTime(int i, int N, vector<int>& tiempo, int daysResting) {
    // Caso base: Si hemos pasado tres días consecutivos sin trabajar, no es válido
    if (daysResting >= 3) {
        cout << "Llamada a minTime(" << i << ", " << N << ") - Invalida por 3 dias de descanso" << endl;
        return INT_MAX;
    }
    
    // Si hemos llegado al final del arreglo
    if (i >= N) {
        cout << "Llegada al final del arreglo en el dia " << i << endl;
        return 0;
    }

    cout << "Evaluando dia " << i << " con " << daysResting << " dias de descanso seguidos." << endl;

    // Opción 1: Nikhil trabaja el día 'i'
    cout << "Trabaja el dia " << i << ": ";
    int workToday = tiempo[i] + minTime(i + 1, N, tiempo, 0);  // Reset daysResting to 0
    cout << "Costo de trabajar hoy: " << workToday << endl;

    // Opción 2: Nikhil no trabaja el día 'i'
    cout << "Descansa el dia " << i << ": ";
    int restToday = minTime(i + 1, N, tiempo, daysResting + 1);  // Incrementa daysResting
    cout << "Costo de descansar hoy: " << restToday << endl;

    // Calculamos el mínimo entre trabajar o descansar hoy
    int minCost = min(workToday, restToday);
    cout << "Minimo costo para dia " << i << " es: " << minCost << endl;
    cout<<"____________________________________________________"<<endl;

    // Devolvemos el mínimo de trabajar hoy o no trabajar hoy
    return minCost;
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

    // Iniciamos la recursión desde el día 0 y sin días de descanso acumulados
    cout << "Inicio de la evaluacion de minimos tiempos...\n";
    int result = minTime(0, N, tiempo, 0);
    cout << "El mínimo tiempo necesario es: " << result << endl;

    return 0;
}
