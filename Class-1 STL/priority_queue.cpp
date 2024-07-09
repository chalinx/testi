#include<iostream>
#include<queue>

using namespace std;

class compare{
public:
	bool operator()(int a,int b){
		return a>b;
	}
};

int main(){

	int arr[]={10,15,20,13,6,90};
	int n=sizeof(arr)/sizeof(int);

	//ordena de mayor a menor por defecto , maxima prioridad
	priority_queue<int> heap;

	for(int x:arr){
		heap.push(x);
	}

	while(!heap.empty()){
		cout<<heap.top()<<" ";
		heap.pop();
	}
	cout<<endl;
	//ordenar de menor a mayor , menor prioridad , primera forma
	priority_queue<int,vector<int>,greater<int>> heap2;

	for(int x:arr){
		heap2.push(x);
	}

	while(!heap2.empty()){
		cout<<heap2.top()<<" ";
		heap2.pop();
	}
	cout<<endl;
	//ordenar de menor a mayor , menor prioridad , segundo forma
	priority_queue<int,vector<int>,compare> heap3;

	for(int x:arr){
		heap3.push(x);
	}

	while(!heap3.empty()){
		cout<<heap3.top()<<" ";
		heap3.pop();
	}




return 0;
}

