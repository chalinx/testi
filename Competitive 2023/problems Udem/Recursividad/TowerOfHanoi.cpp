#include<iostream>

using namespace std;


int q ;
void TowerOfHanoi(int n,char from, char help, char to){
q++;
	if(n==0) return;
		cout<<n<<" "<<from<<" "<<help<<" "<<to<<endl;


	TowerOfHanoi(n-1,from,to,help);
	cout<<from<<"->"<<to<<endl;
	TowerOfHanoi(n-1,help,from,to);
	
}

void hanoi(char varinicial, char varcentral, char varfinal, int n)
{
 if (n == 1) cout << varinicial << "->" << varfinal<<endl;

else{

 hanoi(varinicial, varfinal, varcentral, n - 1);
 cout << varinicial << "->" << varfinal<<endl;
 hanoi(varcentral, varinicial, varfinal, n - 1);
 }
}
int main(){

freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);

int n;
cin>>n;

TowerOfHanoi(n,'A','B','C');
cout<<endl;
hanoi('A','B','C',3);
}