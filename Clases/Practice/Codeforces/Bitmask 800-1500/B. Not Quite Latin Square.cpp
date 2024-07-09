#include <iostream>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        long long n, sum = 0;
        cin >> n;
        // Mientras haya un bit en 1 en n, sumar el valor de ese bit.
        for (long long bit = 1; bit <= n; bit <<= 1) {
            if (n & bit) {
                sum += bit;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
