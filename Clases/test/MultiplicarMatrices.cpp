#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int>> Matrix;

// Función para sumar dos matrices
Matrix add(const Matrix &A, const Matrix &B) {
    int n = A.size();
    Matrix C(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    return C;
}

// Función para restar dos matrices
Matrix subtract(const Matrix &A, const Matrix &B) {
    int n = A.size();
    Matrix C(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    return C;
}

// Función para multiplicar matrices usando el algoritmo de Strassen
Matrix strassen(const Matrix &A, const Matrix &B) {
    int n = A.size();
    Matrix C(n, vector<int>(n));

    if (n == 1) {
        C[0][0] = A[0][0] * B[0][0];
    } else {
        int k = n / 2;
        Matrix A11(k, vector<int>(k)), A12(k, vector<int>(k)), A21(k, vector<int>(k)), A22(k, vector<int>(k));
        Matrix B11(k, vector<int>(k)), B12(k, vector<int>(k)), B21(k, vector<int>(k)), B22(k, vector<int>(k));

        // Dividir las matrices en submatrices
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < k; j++) {
                A11[i][j] = A[i][j];
                A12[i][j] = A[i][j + k];
                A21[i][j] = A[i + k][j];
                A22[i][j] = A[i + k][j + k];
                B11[i][j] = B[i][j];
                B12[i][j] = B[i][j + k];
                B21[i][j] = B[i + k][j];
                B22[i][j] = B[i + k][j + k];
            }
        }

        // 7 Multiplicaciones de Strassen
        Matrix P1 = strassen(A11, subtract(B12, B22));
        Matrix P2 = strassen(add(A11, A12), B22);
        Matrix P3 = strassen(add(A21, A22), B11);
        Matrix P4 = strassen(A22, subtract(B21, B11));
        Matrix P5 = strassen(add(A11, A22), add(B11, B22));
        Matrix P6 = strassen(subtract(A12, A22), add(B21, B22));
        Matrix P7 = strassen(subtract(A11, A21), add(B11, B12));

        // Combinar los resultados
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < k; j++) {
                C[i][j] = P5[i][j] + P4[i][j] - P2[i][j] + P6[i][j];
                C[i][j + k] = P1[i][j] + P2[i][j];
                C[i + k][j] = P3[i][j] + P4[i][j];
                C[i + k][j + k] = P5[i][j] + P1[i][j] - P3[i][j] - P7[i][j];
            }
        }
    }
    return C;
}

int main() {
    Matrix A = {{1, 2}, {3, 4}};
    Matrix B = {{5, 6}, {7, 8}};
    Matrix C = strassen(A, B);

    for (auto &row : C) {
        for (auto elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}
