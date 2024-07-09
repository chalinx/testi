#include<iostream>
#include <fstream>

using namespace std;


int main(){
ifstream cinn("Round1.in");
	int t; cinn>>t;
	int n;
	while(t--){
		cinn >> n;
		if(n<=26) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
    cinn.close();

	return 0;
}