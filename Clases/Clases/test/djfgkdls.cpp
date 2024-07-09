#include <iostream>
#include <vector>

std::vector<double> backwardSubstitution(const std::vector<std::vector<double>>& U, const std::vector<double>& b) {
    int n = U.size();
    std::vector<double> x(n);

    for (int i = n - 1; i >= 0; i--) {
        double sum = 0.0;
        for (int j = i + 1; j < n; j++) {
            sum += U[i][j] * x[j];
        }
        x[i] = (b[i] - sum) / U[i][i];
    }

    return x;
}

int main() {
    // Ejemplo de uso
    std::vector<std::vector<double>> U = {{3, 2, -1}, {0, 1, 3}, {0, 0, 2}};
    std::vector<double> b = {5, -4, 2};
    std::vector<double> x = backwardSubstitution(U, b);

    std::cout << "Solución del sistema: ";
    for (double xi : x) {
        std::cout << xi << " ";
    }
    std::cout << std::endl;

    return 0;
}
