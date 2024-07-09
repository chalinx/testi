
#include <iostream>
#include <cstring>
using namespace std;

const int MAX_BITS = 32;
const int MAX_NODES = 200000 * MAX_BITS;
int trie[MAX_NODES][2], trieNodeCount;

void insert(int num) {
    int node = 0;
    for (int i = MAX_BITS - 1; i >= 0; --i) {
        int bit = (num >> i) & 1;
        if (!trie[node][bit]) {
            trie[node][bit] = ++trieNodeCount;
        }
        node = trie[node][bit];
    }
}

int findMaxXOR(int num) {
    int node = 0, maxXOR = 0;
    for (int i = MAX_BITS - 1; i >= 0; --i) {
        int bit = (num >> i) & 1;
        int oppositeBit = bit ? 0 : 1;
        if (trie[node][oppositeBit]) {
            maxXOR |= (1 << i);
            node = trie[node][oppositeBit];
        } else {
            node = trie[node][bit];
        }
    }
    return maxXOR;
}

int main() {
	#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        memset(trie, 0, sizeof(trie));
        trieNodeCount = 0;

        int maxXOR = 0, prefixXOR = 0;
        insert(0); // Insertar el XOR inicial
        for (int i = 0; i < n; ++i) {
            prefixXOR ^= arr[i];
            insert(prefixXOR);
            maxXOR = max(maxXOR, findMaxXOR(prefixXOR ^ x));
        }

        cout << maxXOR << "\n";
    }
    return 0;
}
