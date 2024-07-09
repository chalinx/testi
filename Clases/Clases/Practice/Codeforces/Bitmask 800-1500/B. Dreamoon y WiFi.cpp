#include <iostream>
#include <cmath>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
    string s1, s2;
    cin >> s1 >> s2;

    int pos1 = 0, pos2 = 0, unknowns = 0;
    for (char c : s1) pos1 += (c == '+') ? 1 : -1;
    for (char c : s2) {
        if (c == '?') unknowns++;
        else pos2 += (c == '+') ? 1 : -1;
    }

    int diff = abs(pos1 - pos2);
    if ((unknowns < diff) || ((unknowns - diff) % 2 != 0)) {
        cout << "0.000000000000" << endl;
    } else {
        int n = (unknowns + diff) / 2;
        double total = pow(2, unknowns);
        double valid = 1;
        for (int i = 0; i < n; ++i) {
            valid *= (unknowns - i);
            valid /= (i + 1);
        }
        cout.precision(12);
        cout << fixed << valid / total << endl;
    }
    return 0;
}
