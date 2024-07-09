#include<bits/stdc++.h>
#define ll long long int

#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define vi vector<int>
#define vll vector<ll>
#define vct vector
#define pb push_back
#define er erase
#define fi(i,a,n,w) for(int i =a;i<n;i+=w)
#define fl(i,a,n,w) for(ll i=a;i<n;i+=w)
#define fr first
#define se second
#define pll pair<ll,ll>
#define pii pair<int,int>

using namespace std;


void solve() {
    string r;
    cin >> r; 

    stack<char> w;
    bool band = true;
    int m;
    for (char c : r) {
          if (c == '(' || c == '[' || c == '{')  w.push(c);
           
          else {
             if (w.empty() || (c == ')' && w.top() != '(') || 
               (c == ']' && w.top() != '[') || 
               (c == '}' && w.top() != '{')) {
               band = false;
               break; 
              }
                w.pop();
            }
        }

        if (band && w.empty())
            cout << "YES" << endl;
        
        else
            cout << "NO" << endl;
        
    
}

int main() {
    int n ; cin>>n;
    while(n--){
        solve();
    }
    return 0;
}
