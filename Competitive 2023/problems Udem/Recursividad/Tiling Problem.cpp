#include <iostream>
#include <vector>
using namespace std;

// Función que utiliza la recursión para encontrar el número de formas
// de llenar un tablero de 4xN utilizando baldosas de 4x1
int fillBoard(int n) {
    // Casos base
    if (n <= 3) {
        return 1;
    }
   

    // Recurrencia: f(n) = f(n-1) + f(n-4)
    return fillBoard(n - 1) + fillBoard(n - 4);
}

int main() {
    #ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
    int n;
    cin >> n;

    cout <<fillBoard(n) << endl;

    return 0;
}
