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

    int n; cin>>n;
    vector<vector<int>> arr(n+1,vector<int>(n+1,0));
    vector<vector<int>> pre(n+1,vector<int>(n+1,0));
    int q;
    int sum=0;

    fi(i,1,n+1,1)
        fi(j,1,n+1,1)
            cin>>arr[i][j];
        
    fi(i,1,n+1,1){
        fi(j,1,n+1,1){
            pre[i][j]=pre[i][j-1]+pre[i-1][j]+arr[i][j]-pre[i-1][j-1];
            //pre[i][j]=sum;
        }
    }
    int t; cin>>t;
    while(t--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        int s=pre[c][d]-pre[c][b-1]+pre[a-1][b-1]-pre[a-1][d];
        cout<<s<<endl;
    }
  
}


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
    int t; cin>>t;
    while(t--){
        solve();
    }

    return 0;
}