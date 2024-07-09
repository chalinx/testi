/*Por supuesto, aquí tienes la traducción del problema "B. 
The Fibonacci Segment" al español, siguiendo tus indicaciones:

**Descripción:**

Tienes el arreglo a1,a2,...,an. Un segmento [l,r] (1≤l≤r≤n) es bueno si a_i=a_i-1+a_i-2, 
para todo i (l+2≤i≤r).

Definamos len([l,r])=r-l+1, len([l,r]) es la longitud del segmento [l,r]. 
El segmento [l_1,r_1] es más largo que el segmento [l_2,r_2], si len([l_1,r_1])>len([l_2,r_2]).

Tu tarea es encontrar un segmento bueno de la longitud máxima en el arreglo 'a'. 
Ten en cuenta que un segmento de longitud 1 o 2 siempre es bueno.

**Entrada:**

La primera línea contiene un solo entero 'n' (1 ≤ n ≤ 10^5) — el número de elementos en el arreglo.
 La segunda línea contiene enteros: a1, a2, ..., an (0 ≤ ai ≤ 10^9).

**Salida:**

Imprime la longitud del segmento bueno más largo en el arreglo a.

**Ejemplos:**

Entrada:
```
10
1 2 3 5 8 13 21 34 55 89
```

Salida:
```
10
```

Entrada:
```
5
1 1 1 1 1
```

Salida:
```
2
```

Nota:
En el primer ejemplo, el segmento [1, 10] es bueno ya que los elementos cumplen 
con la relación ai = ai - 1 + ai - 2 para todo i en [3, 10].

En el segundo ejemplo, los segmentos buenos más largos son [1, 2], [2, 3], [3, 4],
 y [4, 5], todos con una longitud de 2.*/

#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

	int n;
	cin>>n;
	if(n==1){
		cout<<1;return 0;
	}

	vector<long long>r(n);

	for(int i=0;i<n;i++)cin>>r[i];
	int max=2,tam=2;
	for(int i =0;i<n;i++){
			if(r[i]==r[i-1]+r[i-2]) tam++;
			else tam=2;
			if(tam>max)max=tam;
	}
	
	cout<<max;
	return 0;
}

