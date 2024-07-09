#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    long long n;
    cin >> n;
    if(n==1){
    	cout<<1;return 0;
    }
    while (1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        if(n==1){
        	cout<<1;break;
        }
    }
}
