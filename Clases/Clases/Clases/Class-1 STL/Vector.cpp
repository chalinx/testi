#include<bits/stdc++.h>

using namespace std;

void mostrar(vector<int> q){
	for(auto i:q)
		cout<<i<<" ";
cout<<endl;
}


int main(){

//vector con contenido vacio
vector<int> first;

//inicializar constructor (reservar 4 casillas para el numero 20)
vector<int> second(4,20);
mostrar(second);

//inicalizar el rango del vector
int numb[]={10,20,30,40};
vector<int> third(numb,numb+4);

//copiar de un vector a otro mediante el constructor

vector<int> fourth(third);
mostrar(fourth);

vector <int> arr;
// Agregar un elemento al final - O(1)
arr.push_back(123);
arr.push_back(987);
arr.push_back(343);
arr.push_back(134);
arr.push_back(345);
// Quitar un elemento del final - O(1)
arr.pop_back();
// Agregar un elemento en la posición `i` - O(n)
int i = 2;
arr.insert(begin(arr) + i, 234);
// Eliminar un elemento de la posición `i` - O(n)
i = 1;
arr.erase(begin(arr) + i);
// Copiar el vector - O(n)
vector <int> arrCopy = arr;
// Para iterar el arr podemos hacerlo así:
for (int arr_i: arr) ;
// O también asi
// arr.size() nos retorna la cantidad de elementos - O(1)
for (int i = 0; i < arr.size(); i++) ;
// Si queremos eliminar todos los elementos - O(n)
arr.clear();

// Funcion fill , inicializa el tamaño de un vector o array lib(algorithm)- O(N)
vector<int> arr2(10);
fill(arr2.begin(),arr2.end(),10);//vector
//fill(arr2,arr2+10,10);// tamaño del vector

mostrar(arr2);

//Funcion unique, sirve para eliminar elementos duplicados de un vector lib(algorithm)-O(N)
vector<int>arr3 = {1, 2, 2, 3, 4, 4, 4, 5, 5, 6};

//eliminar elementos duplicados
auto d=unique(arr3.begin(),arr3.end());

// redimensionar
arr3.resize(distance(arr3.begin(),d));
mostrar(arr3);

// max y min elemento de un vector - O(N)

auto maxx=max_element(arr3.begin(),arr3.end());
auto minn=min_element(arr3.begin(),arr3.end());

cout<<*minn<<" "<<*maxx<<endl;



	return 0;
}

