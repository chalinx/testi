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

void solve(){
   int n,k; cin>>n>>k;
    priority_queue<ll,vll,greater<ll>> pq;
    int a;
    fi(i,0,n,1){
        cin >> a;pq.push(a);
    }

    ll cont = 0;
    while(pq.size() > 1 && pq.top() < k){
        int a= pq.top();pq.pop();
        int b= pq.top();pq.pop();
        pq.push((a + 2 * b));
        cont++;
        if(pq.top() >= k){
            cout << cont << endl;
            return;
        }
    }

    if(pq.top()>=k)
        cout <<cont<< endl;
     else 
        cout <<-1<< endl;
    
}


int main(){


    int t=1;
    while(t--){
        solve();
    }

    return 0;
}