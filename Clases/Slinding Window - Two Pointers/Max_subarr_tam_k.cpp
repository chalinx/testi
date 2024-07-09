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
#define sz(i) i.size()
using namespace std;

vi max_Window(vi &nums,int k){
	vi result;
	deque<int> dq;// almacenar indice;
	fi(i,0,sz(nums),1){
		
		//eliminar elementos que no esten dentro del rango
		//de la ventana
		if(!dq.empty() and dq.front()==i-k) dq.pop_front();

		//elminar elementos mas pequeños, ya que no seran necesarios
		while(!dq.empty() and nums[i]>= nums[dq.back()]) dq.pop_back();

		dq.pb(i);

		//agregar el maximo del subconjunto actual al resultado

		if(i>= k-1) result.pb(nums[dq.front()]);

	}

	return result;
}


void solve(){
	vi r={1,3,-1,-3,5,3,6,7};

	vi sol=max_Window(r,5);

	for(auto i:sol)
		cout<<i<<" ";

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