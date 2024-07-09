/*Given a string s, find the first non-repeating character in it and return its index. 
If it does not exist, return -1.*/

#include<bits/stdc++.h>

using namespace std;
int firstUniqChar(string s) {
	unordered_map<char,int> frecuencia;
    for(int c:s){
    	frecuencia[c]++;
    }
    int cont=-2;
    for(int i =0;i<s.size();i++){
    	if(frecuencia[s[i]]==1){
    		cont=i;
    		break;
    	}
    }
    if(cont==-2) return -1;
    return cont;
}


int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

string r;
cin>>r;
cout<<firstUniqChar(r);



	return 0;
}


