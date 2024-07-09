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

ll euc_exten(ll a,ll b, ll x,ll y) {
    if(b== 0) {
        x=1;
        y=0;
        return a;
    }
    ll x1, y1;
    ll r=euc_exten(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return r;
}

void solve(){
    ll a,b,c; cin>>a>>b>>c;
    ll x, y;
    ll r=euc_exten(a,b,x,y);

    if (c%r==0) {
        x*=-c/r;
        y*=-c/r;
        if (x>=-5e18 and x <= 5e18 and y>=-5e18 and y<=5e18)
            cout<<x<<" "<<y<<endl;        
        else 
            cout<<"-1"<< endl;       
    } 
    else 
        cout<< "-1" << endl;
}
int main() {
    #ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
    
    int t=1;
    while (t--){
        solve();
    }


    return 0;
}
