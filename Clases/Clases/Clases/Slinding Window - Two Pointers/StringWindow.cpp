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

string stringWindow(string s1,string s2){

	int f1[256]={0};	
	int f2[256]={0};

	fi(i,0,s2.size(),1)
		f2[s2[i]]++;
	
	int cnt=0;
	int i=0;
	int start_idx=-1;
	int min_so_far=INT_MAX;
	int window_size;

	fi(j,0,s1.size(),1){
		char ch=s1[j];
		f1[ch]++;

		if(f2[ch]!=0 and f1[ch]<=f2[ch]) cnt++;

		cout<<cnt;

		if(cnt==s2.size()){

			while(f2[s1[i]]==0 or f1[s1[i]]> f2[s1[i]]){
				f1[s1[i]]--;
				i++;
			}

			window_size=j-i+1;

			if(window_size<min_so_far){
				min_so_far=window_size;
				start_idx=i;
			}
		}

	}

	if(start_idx==-1)
		return "No window found";

	return s1.substr(start_idx,min_so_far);
}


void solve(){
		
	string s1,s2; cin>>s1>>s2;

	cout<<stringWindow(s1,s2);


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