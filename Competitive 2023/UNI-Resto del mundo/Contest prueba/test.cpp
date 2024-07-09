#include <iostream>
#include <vector>

using namespace std;

long long int mergcont(vector<int>& q, int le, int mi, int ri) {
    vector<int> aux(ri - le + 1);
    long long int cont = 0;
    int i = le, j = mi + 1, pi = 0;

    while (i <= mi && j <= ri) {
        if (q[i] > q[j]) {
            cont += mi - i + 1;
            aux[pi++] = q[j++];
        }
        else 
            aux[pi++] = q[i++];
        
    }

    while (i <= mi) aux[pi++] = q[i++];
    while (j <= ri) aux[pi++] = q[j++];

    for (i = 0; i < pi; i++) 
        q[le + i] = aux[i];
    

    return cont;
}

long long int merge(vector<int>& q, int le, int ri) {
    long long int cont = 0;
    if (le < ri) {
        int mid = (le + ri) / 2;
        cont += merge(q, le, mid);
        cont += merge(q, mid + 1, ri);
        cont += mergcont(q, le, mid, ri);
    }
    return cont;
}

int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    int q;
    cin >> q;

    while (q--) {
        int n;
        cin >> n;
        vector<int> r(n);
        for (int i = 0; i < n; i++) cin >> r[i];
        
        cout << merge(r, 0, n - 1) << endl;
    }

    return 0;
}
