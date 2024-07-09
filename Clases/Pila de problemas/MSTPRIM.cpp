#include <iostream>
#include <cmath>
#include <iomanip>

// Definir la función f(x)
double f(double x) {
    if (x >= 0) {
        return std::sqrt(3) * x * x;
    } else {
        return -std::sqrt(3) * x * x;
    }
}

// Definir la derivada de la función f'(x)
double f_prime(double x) {
    if (x >= 0) {
        return 2 * std::sqrt(3) * x;
    } else {
        return -2 * std::sqrt(3) * x;
    }
}

void newton_method(double x0, int M, double delta, double epsilon) {
    double v = f(x0);
    std::cout << std::fixed << std::setprecision(28);
    std::cout << "Iteración: 0, x0: " << x0 << ", f(x0): " << v << std::endl;

    if (std::fabs(v) < epsilon) return;

    for (int k = 1; k <= M; ++k) {
        double x1 = x0 - v / f_prime(x0);
        v = f(x1);
        std::cout << "Iteración: " << k << ", x1: " << x1 << ", f(x1): " << v << std::endl;

        if (std::fabs(x1 - x0) < delta || std::fabs(v) < epsilon) break;
        
        x0 = x1;
    }
}

int main() {
    double x0 = -1.0; // Puedes ajustar este valor inicial según sea necesario
    int M = 100;
    double delta = 1e-12;
    double epsilon = 1e-12;

    newton_method(x0, M, delta, epsilon);

    return 0;
}
