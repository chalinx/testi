#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool contieneDigitosProhibidos(int n, const vector<bool>& digitosProhibidos) {
    while (n > 0) {
        if (digitosProhibidos[n % 10]) return true;
        
        n /= 10;
    }
    return false;
}

int main() {
	#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
    int n, k;
    cin >> n >> k;
    vector<bool> digitosProhibidos(10, false);
    for (int i = 0; i < k; ++i) {
        int d;
        cin >> d;
        digitosProhibidos[d] = true;
    }

    while (contieneDigitosProhibidos(n, digitosProhibidos)) {
        ++n;
    }

    cout << n << endl;
    return 0;
}
