#include<iostream>
#include<string>
using namespace std;


string cam(string q) {
    int n = q.size();

    if (n % 2) return q;
    string i = cam(q.substr(0, (n / 2)+1));
    string j = cam(q.substr(n / 2));
    return min(i + j, i + j);
}


int main() {
    string q, r;
    cin >> q >> r;
    cout << (cam(q).compare(cam(r))==0 ? "YES" : "NO");
}