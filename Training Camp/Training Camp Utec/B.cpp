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
    int n; cin >> n;
    stack<int> w;
    string q;
    int num1=0,num2=0;
    fi (i,0,n,1){
        cin >> q;
        if (q == "+" || q == "*" ||
         q == "-" || q == "/") {
            num2 = w.top(); w.pop();
            num1 = w.top(); w.pop();

            if (q == "+") w.push(num1 + num2);
            else if (q == "*") w.push(num1*num2);
            else if (q == "-") w.push(num1-num2);
            else if (q == "/") w.push(num1/num2);
        } 

        else {
            int num = stoi(q);
            w.push(num);
        }
    }
    cout << w.top() << endl;
}

int main(){

    int t=1;
    while(t--){
        solve();
    }

    return 0;
}