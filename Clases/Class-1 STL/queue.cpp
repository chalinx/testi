#include<iostream>
#include<queue>

using namespace std;


int main(){

queue<int> q;

q.push(1);//1
q.push(2);//1 2


while(!q.empty()){
	cout<<q.front()<<" ";
	q.pop();
}
cout<<endl;

q.push(1);//1 2 3
q.push(2);//1 2 3 4
q.push(3);//1 2 3
q.push(4);//1 2 3 4


while(!q.empty()){
	cout<<q.front()<<" ";
	q.pop();
}
cout<<endl;

	return 0;
}