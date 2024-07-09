#include <iostream>

using namespace std;


int main() {
     #ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
    long long n;
    cin >> n;
    for (long long k = 1; k <= n; ++k) {
        // Calculamos el total de maneras de colocar dos caballeros
        long long totalWays = k * k * (k * k - 1) / 2;
        // Calculamos el número de posiciones en las que se atacan
        long long attackingPositions = 4 * (k - 1) * (k - 2);
        // Restamos las posiciones de ataque del total
        cout << totalWays - attackingPositions << endl;
    }
    return 0;
}
