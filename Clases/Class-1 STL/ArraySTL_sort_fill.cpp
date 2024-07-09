#include<iostream>
#include<algorithm>
#include<array>
using namespace std;

void actualizar(array<int,6>&arr,int i,int val){
	arr[i]=val;
	cout<<"hola";
}

void mostrar(array<int,6>arr){
	int n =arr.size();
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"asdasd";
}

int main(){

array<int,6> arr={1,2,3,7,4,3};

//arr[0]=10;
actualizar(arr,0,100);

//SORT ordenar
sort(arr.begin(),arr.end());

mostrar(arr);

//FILL INICIALIZAR

 array<int,10> five;
 five.fill(5);
 cout<<endl;
 int n =five.size();
	for(int i =0;i<n;i++){
		cout<<five[i]<<" ";
	}
cout<<endl;
// FOR EACH
	for(auto q:five){
		cout<<q<<" ";
	}

// 2 metodos para obtener el valor de un array , O(1)
	cout<<endl;
	int i = 0;
	auto a=arr.at(i);cout<<a<<endl;
	a=arr[3];cout<<a<<endl;
//front(primer elemento) y back(ultimo elemento) 
	cout<<"obtener primer elemento: "<<endl;
	a=arr.front();cout<<a<<endl;
	cout<<"obtener ultmo elemento: "<<endl;
	a=arr.back();cout<<a<<endl;

	return 0;
}