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
#define sz(a) a.size()
#define mstr(r) for(auto i:r)cout<<i<<" ";
#define pll pair<ll,ll>
#define pii pair<int,int>

using namespace std;

void solve(){
       int n; cin>>n;

       int a[n],dp[n];

       fi(i,0,n,1) cin>>a[i];

       dp[0]=a[0];
       dp[1]=a[1];
       dp[2]=a[2];

       fi(i,3,n,1){
        dp[i]=min({dp[i-1],dp[i-2],dp[i-3]})+a[i];
       }

      /* fi(i,0,n,1)
        cout<<dp[i]<<" ";
        cout<<endl;
    */
        cout<<min({dp[n-1],dp[n-2],dp[n-3]});
}  


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
    int t=1;
    while(t--){
        solve();
    }

    return 0;
}