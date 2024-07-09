/*

**Descripción:**

'n' niños están de pie en un círculo y están jugando al juego de contar. 
Los niños están numerados en sentido horario del 1 al n. Al principio, se 
considera que el primer niño es el líder. El juego se juega en 'k' pasos. 
En el i-ésimo paso, el líder cuenta 'a_i' personas en orden en sentido horario, 
comenzando desde la siguiente persona. El último en ser señalado por el líder es eliminado, 
y el siguiente jugador después de él se convierte en el nuevo líder.

Por ejemplo, si hay niños con los números [8, 10, 13, 14, 16] actualmente en el círculo, 
el líder es el niño 13 y 'a_i' = 12, entonces la rima de contar termina en el niño 16, que 
es eliminado. El niño 8 se convierte en el líder.

Debes escribir un programa que imprima el número del niño que será eliminado en cada paso.

**Entrada:**

La primera línea contiene dos números enteros 'n' y 'k' (2 ≤ n ≤ 100, 1 ≤ k ≤ n - 1).

La siguiente línea contiene 'k' números enteros a_1, a_2, ..., a_k (1 ≤ a_i ≤ 10^9).

**Salida:**

Imprime 'k' números, el i-ésimo número corresponde al número del niño que será eliminado
 en el i-ésimo paso.

**Ejemplos:**

Entrada:
```
7 5
10 4 11 4 1
```

Salida:
```
4 2 5 6 1
```

Entrada:
```
3 2
2 5
```

Salida:
```
3 2
```

Nota:
En el primer ejemplo:

En el primer paso, se elimina al niño 4, el niño 5 se convierte en el líder.
En el segundo paso, se elimina al niño 2, el niño 3 se convierte en el líder.
En el tercer paso, se elimina al niño 5, el niño 6 se convierte en el líder.
En el cuarto paso, se elimina al niño 6, el niño 7 se convierte en el líder.
En el paso final, se elimina al niño 1, el niño 3 se convierte en el líder.*/

#include<bits/stdc++.h>

using namespace std;

void rotar(vector<int>&r,long long q){
	while(q--){
		int aux=r[r.size()-1];
		for(int i=r.size()-1;i>0;i--){
			r[i]=r[i-1];
		}
		r[0]=aux;
	}

	
}

int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

	int n,k;
	cin>>n>>k;
	vector<int> r;
	for(int i =1;i<=n;i++)r.push_back(i);
	long long w;
	int q=0;
	for(int i =0;i<k;i++){
		cin>>w;
		w=w%n;
		cout<<r[w];
		if(i!=k-1)cout<<" ";
		n--;
		r.erase(r.begin()+w);
		rotar(r,r.size()-w);
	}






	return 0;
}

