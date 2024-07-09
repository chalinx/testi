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

const int N=1e5;

int memo[N];

int dp(int n){
	if(n==1)return 0;
	int &ans=memo[n];

	if(ans!=-1)return ans;
	ans=INT_MAX;

	if(n%2==0)ans=min(ans,dp(n/2));
	if(n%3==0)ans=min(ans,dp(n/3));
	ans=min(ans,dp(n-1));
	ans+=1;

	return ans;

}
int dp2(int n){
	if(n==1)return 0;
	

	if(memo[n]!=-1)return memo[n];
	int ans=INT_MAX;

	if(n%2==0)ans=min(ans,dp(n/2));
	if(n%3==0)ans=min(ans,dp(n/3));
	ans=min(ans,dp(n-1));
	ans+=1;
	memo[n]=ans;
	return ans;

}

int dp3(int N) {
    vi dp(N + 1, INT_MAX); // Inicializamos con INT_MAX para facilitar la búsqueda del mínimo.
    dp[1] = 0; // No se requieren pasos para reducir 1 a 1.

    for (int i = 2; i <= N; ++i) {
        // Reducir en 1 el número i-1.
        dp[i] = dp[i - 1] + 1;

        // Dividir por 2 si es posible.
        if (i % 2 == 0) {
            dp[i] = min(dp[i], dp[i / 2] + 1);
        }

        // Dividir por 3 si es posible.
        if (i % 3 == 0) {
            dp[i] = min(dp[i], dp[i / 3] + 1);
        }
    }

    return dp[N]; // El resultado final para N.
}


void solve(){
	
	int n ; cin>>n;
	memset(memo,-1,sizeof(memo));
	cout<<dp2(n);
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