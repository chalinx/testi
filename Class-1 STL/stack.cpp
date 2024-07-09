#include<iostream>
#include<string>
#include<stack>

using namespace std;




int main(){

stack<int> books;

books.push(1);//1


//mostrar(books);

while(!books.empty()){
	cout<<books.top()<<" ";
	books.pop();
}
cout<<endl;
books.push(1);//1
books.push(2);//2 1

while(!books.empty()){
	cout<<books.top()<<" ";
	books.pop();
}
cout<<endl;
books.push(1);//1
books.push(2);//2 1
books.push(3);//3 2 1 
books.push(4);//4 3 2 1

while(!books.empty()){
	cout<<books.top()<<" ";
	books.pop();
}
	return 0;
}

