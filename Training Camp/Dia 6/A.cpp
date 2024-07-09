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

ll dia(string q) {
   if(q=="Monday"   ) return 0;
    else if(q=="Tuesday"  ) return 1;
    else if(q=="Wednesday") return 2;
    else if(q=="Thursday" )return 3;
    else if(q=="Friday" )return 4;
    
    return 1;
}

string dia2(ll d) {
   switch (d){
    case 0: return "Monday";
    case 1: return "Tuesday";
    case 2: return "Wednesday";
    case 3: return "Thursday";
    case 4: return "Friday";
    }
    return "10";
}


void solve(){
    ll y,m,d; cin>>y>>m>>d;
    string s; cin >> s;
    ll y2,m2,d2; cin>>y2>>m2>>d2;
    ll q,w;
    q=(y*12*30)+(m*30)+d;
    w= (y2*12*30)+(m2*30)+d2;
 	
    ll c=((dia(s)+(w-q)%5)%5)%5;
    cout <<dia2(c)<< endl;
}

int main() {
#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
    int t;
    cin >> t;
    while (t--) {
       solve();
    }

    return 0;
}
