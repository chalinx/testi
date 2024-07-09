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
	int n, k; cin >> n >> k;
    multiset<int> q;
    int a;
    fi(i,0,n,1){
        cin >> a; q.insert(a);
    }

    ll cont = 0;
    while(q.size() > 1 && *q.begin() < k){
        auto it = q.begin();
        int a = *it; q.erase(it++);
        int b = *it; q.erase(it);
        q.insert(a + 2 * b);
        cont++;

        if(*q.begin() >= k){
            cout << cont << endl;
            return;
        }
    }

   
    if(!q.empty() && *q.begin() >= k)
        cout << cont << endl;
    else 
        cout << -1 << endl;
    
}


int main(){

	int t=1;
	while(t--){
		solve();
	}

	return 0;
}