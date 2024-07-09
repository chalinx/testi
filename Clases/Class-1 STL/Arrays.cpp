#include<iostream>
#include<algorithm>
using namespace std;
//actualizar la matriz
//pasar por referencia
void updateArray(int arr[],int i ,int val){
	arr[i]=val;
}

void print(int arr[],int n){
	for(int i =0;i<n;i++){
		cout<<arr[i]<<",";
	}
	cout<<"s";
}

void arraySize(int arr[]){
	cout<<"Tamaño del arreglo de la funcion "<<sizeof(arr);
	cout<<endl;
}
int main(){
	int arr[5]={1,5,4,3,2};// para un int cada espaco es de 4byte , total =20bytes
	int n = sizeof(arr)/sizeof(int);// obtener el tamaño del arreglo
	
	cout<<"tamaño del arreglo en el main "<<sizeof(arr)<<endl;
	arraySize(arr);
	//mostrar direccion del array
	cout<<arr<<endl;
	//actualizar array
	updateArray(arr,1,13);

	//ordenar
	sort(arr,arr+n);
	
	print(arr,n);

}