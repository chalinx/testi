#include <iostream>
#include <vector>

void doolittleLU(const std::vector<std::vector<double>>& A, std::vector<std::vector<double>>& L, std::vector<std::vector<double>>& U) {
    int n = A.size();
    L.assign(n, std::vector<double>(n, 0.0));
    U.assign(n, std::vector<double>(n, 0.0));

    for (int i = 0; i < n; i++) {
        L[i][i] = 1; // Diagonal de L es 1
        for (int j = 0; j < n; j++) {
            if (j < i) { // Calcular L[i][j]
                double sum = 0.0;
                for (int k = 0; k < j; k++)
                    sum += L[i][k] * U[k][j];
                L[i][j] = (A[i][j] - sum) / U[j][j];
            }
            else { // Calcular U[i][j]
                double sum = 0.0;
                for (int k = 0; k < i; k++)
                    sum += L[i][k] * U[k][j];
                U[i][j] = A[i][j] - sum;
            }
        }
    }
}

int main() {
    std::vector<std::vector<double>> A = {
        {0, 0, 2},
        {-1, 5, -2},
        {3,6, 7}
    };
    std::vector<std::vector<double>> L, U;
    doolittleLU(A, L, U);

    std::cout << "Matrix L:" << std::endl;
    for (const auto& row : L) {
        for (const auto& val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Matrix U:" << std::endl;
    for (const auto& row : U) {
        for (const auto& val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
