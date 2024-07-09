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

string unique_substring(string str){
	int i=0;
	int j=0;
	int window_len=0;
	int max_window_len=0;
	int start_window=-1;
	unordered_map<char,int> m;

	while(j<str.length()){
		char ch=str[j];

		//si esta dentro de hashmap y su 
		// idr>=inicio de la ventana actual, crear ventana
		if(m.count(ch) and m[ch]>=i){

			//despues
			i=m[ch]+1;

			//ventana restante window len
			//excluyendo al caracter actual
			window_len=j-i;
		}
			//actualizar la ultima ocurrencia
			m[ch]=j;
			window_len++;j++;

			//actualizar max_windod_len en cada paso
			if(window_len>max_window_len){
				max_window_len=window_len;
				start_window=i;
			
			}

	}
	return str.substr(start_window,max_window_len);

}


void solve(){
		
		string q="qqwerrasdjgfgf";

		cout<<unique_substring(q);

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