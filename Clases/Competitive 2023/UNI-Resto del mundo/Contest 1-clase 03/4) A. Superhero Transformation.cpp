/*Por supuesto, aquí tienes la traducción del problema "A. 
Superhero Transformation" al español, siguiendo tus indicaciones:

**Descripción:**

Todos sabemos que un superhéroe puede transformarse en ciertos otros superhéroes.
 Pero no todos los superhéroes pueden transformarse en cualquier otro superhéroe. 
 Un superhéroe con el nombre 's' puede transformarse en otro superhéroe con el 
 nombre 't' si 's' se puede hacer igual a 't' cambiando 
 cualquier vocal en 's' por cualquier 
 otra vocal y cualquier consonante en 's' por cualquier otra consonante. 
 Se pueden hacer múltiples cambios.

En este problema, consideramos las letras 'a', 'e', 'i', 'o' y 'u' como vocales 
y todas las demás letras como consonantes.

Dado los nombres de dos superhéroes, determina si el superhéroe con el nombre s 
se puede transformar en el superhéroe con el nombre t.

**Entrada:**

La primera línea contiene la cadena s con una longitud entre 1 y 1000, inclusivo.

La segunda línea contiene la cadena t con una longitud entre 1 y 1000, inclusivo.

Se garantiza que ambas cadenas s y t son diferentes y consisten solo en letras 
minúsculas del alfabeto inglés.

**Salida:**

Imprime "Yes" (sin comillas) si el superhéroe con nombre s se puede transformar 
en el superhéroe con nombre t y "No" (sin comillas) en caso contrario.

Puedes imprimir cada letra en cualquier caso (mayúscula o minúscula).

**Ejemplos:**

Entrada:
```
a
u
```

Salida:
```
Yes
```

Entrada:
```
abc
ukm
```

Salida:
```
Yes
```

Entrada:
```
akm
ua
```

Salida:
```
No
```

Nota:
En el primer ejemplo, dado que tanto 'a' como 'u' son vocales, es posible 
convertir la cadena s en t.

En el tercer ejemplo, 'k' es una consonante, mientras que 'a' es una vocal, 
por lo que no es posible convertir la cadena s en t.*/


#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

string q;
string r;
string aux="aeiou";
cin>>q>>r;
int n=q.size();
bool aux1=false,aux2=false;
	if(q.size()!=r.size()){cout<<"NO";return 0;}
	else{
		for(int i =0;i<n;i++){
			aux1=false,aux2=false;
			for(int j =0;j<5;j++){
				if(q[i]==aux[j]&&!aux1)aux1=true;
				if(r[i]==aux[j]&&!aux2)aux2=true;
			}
			if(aux1!=aux2){
				cout<<"NO";return 0;
			}
		}
	}	
	cout<<"YES";







	return 0;
}

