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

struct comparador{

	bool operator()(const pair<char,int> &a,const pair<char,int> &b){
		return a.second<b.second;
	}
};

bool comparaValores(const std::pair<char,int>& a, const std::pair<char,int>& b) {
    return a.second < b.second;
}

void solver1er_error(){
	string q;
	cin>>q;
	map<char,int> w;
	fi(i,0,q.size(),1){
		w[q[i]]++;
	}
	auto maxi=max_element(w.begin(),w.end(),comparador());

	cout<<maxi->second;

}

int main(){

	string q; cin>>q;
	int cont=0,max=0;
	fi(i,0,q.size(),1){
		if(q[i]==q[i+1])cont++;
		else{
			if(max<cont+1)
				max=cont+1;
			cont=0;
		}
	}
	cout<<max;
	return 0;
}



