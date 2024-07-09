#include <iostream>
using namespace std;

void flush() { fflush(stdout); }

int main() {
    #ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif

    int n;
    cin >> n;
    int low = 0, high = n, x_n;
    cout << "+ " << n - 1 << endl;
    flush();
    cin >> x_n; // Leer la respuesta inicial.
    
    while (low + 1 < high) {
        int mid = (low + high) / 2;
        cout << "+ " << n - mid << endl;
        flush();
        int new_x_n;
        cin >> new_x_n; // Leer la nueva respuesta.
        
        if (new_x_n > x_n) {
            low = mid;
            x_n = new_x_n; // Actualizar el valor de ⌊x/n⌋ si cambió.
        } else {
            high = mid;
        }
    }
    
    cout << "! " << (x_n * n + low) << endl; // Anunciar la respuesta.
    flush();
    return 0;
}
