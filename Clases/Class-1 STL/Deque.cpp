#include<iostream>
#include<deque>
using namespace std;
void mostrar(deque<int> q){
	for(auto i:q)
		cout<<i<<" ";
cout<<endl;
}



int main(){
cout<<"asdasd";
deque<int> first;			//crear deque vacios de ints
deque<int> second(4,100);	//inicializar deque 4 ints con valor 100
deque<int> third(second.begin(),second.end());//iterar y copiar los valores de second
deque<int> fourth(third);//copiar third por completo

mostrar(second);
mostrar(third);
mostrar(fourth);
cout<<"asd";
// copiar array iterandolo y agregarlo en un deque

int ints[]={3,1,4,5,8};
int n = sizeof(ints)/sizeof(int);

deque<int> fifth (ints,ints+n);

//crear deque y reservar 10 
deque<int> dq(10);

dq.push_back(2);

// remover el ultimo elemento
//dq.pop_back();

//agregar elemento al inicio
dq.push_front(3);

//remover primer elemento
//dq.pop_front();

//obtener ultimo y primer elemento respectivamente
auto r=dq.front();
auto t=dq.back();

mostrar(dq);

	return 0;
}