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


int main(){

	string q;
	cin>>q;
	
	string hor=string(1,q[0])+string(1,q[1]);
	string min=string(1,q[3])+string(1,q[4]);
	string seg=string(1,q[6])+string(1,q[7]);
	string ap=string(1,q[8])+string(1,q[9]);

	if(ap=="AM"){
		if(hor=="12")
			cout<<"00:"<<min<<":"<<seg;
		else 
			cout<<hor<<":"<<min<<":"<<seg;
	}
	else{
		if(hor=="12")
			cout<<hor<<":"<<min<<":"<<seg;
		else
			cout<<(stoi(hor)+12)<<":"<<min<<":"<<seg;
	}




	return 0;
	
}



