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


int contar_formas(int n){

	if(n==1)return 2;
	if(n==2)return 3;
	return contar_formas(n-1)+contar_formas(n-2);
}

int sum=0;
void imprimir_formas(string r,char w,int n){

	if(n==0){
			sum++;
		cout<<r<<" "; return;
	
	}

	imprimir_formas(r+w,'0',n-1);
	if(w!='1')
		imprimir_formas(r+w,'1',n-1);
	

}



int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
		
	
	cout<<contar_formas(2)<<endl;
	imprimir_formas("",'0',4);cout<<endl;
	cout<<sum;
	return 0;
}



