#include <iostream>
#include <vector>
using namespace std;


int maxScore(vector<vector)

int maxScore(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int result = 0;

    for (int col = 0; col < n; col++) {
        int colSum = 0;
        for (int row = 0; row < m; row++) {
            colSum += grid[row][col] ^ grid[row][0]; // Aprovechar la primera columna para maximizar
        }
        int maxColVal = max(colSum, m - colSum);
        result += maxColVal * (1 << (n - col - 1)); // Sumar al resultado, considerando la posición del bit
    }
    return result;
}

int main() {
	
    
    return 0;
}
