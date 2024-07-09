/*
## A. Beautiful Year

**Límite de tiempo por prueba:** 2 segundos  
**Límite de memoria por prueba:** 256 megabytes  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

Parece que el año 2013 llegó ayer. ¿Sabías un dato curioso? El año 2013 es
 el primer año después del viejo 1987 con dígitos distintos.

Ahora se te sugiere resolver el siguiente problema: dado un número de año, 
encuentra el mínimo número de año que es estrictamente mayor que el dado y tiene solo dígitos distintos.

### Entrada
La única línea de entrada contiene un entero "y" (1000≤y≤9000) — el número
 de año.

### Salida
Imprime un solo entero — el número de año mínimo que es estrictamente 
mayor que "y" y todos sus dígitos son distintos. Se garantiza que la 
respuesta existe.

### Ejemplos
**Entrada:**
```
1987
```
**Salida:**
```
2013
```

En el primer ejemplo, el año 2013 es el primer año después de 1987 con 
dígitos distintos. Por lo tanto, la respuesta es 2013.

**Entrada:**
```
2013
```
**Salida:**
```
2014
```

En el segundo ejemplo, el año 2014 es el siguiente año después de 2013 con dígitos distintos. Por lo tanto, la respuesta es 2014.
*/

#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	set<int> r;
	int m,n;
	cin>>m;
	m++;
	n=m;
	while(1){
		if(n==0){
			if(r.size()!=4){
				r.clear();
				m++;
				n=m;
			}
			else {
				cout<<m;return 0;
			}
		}
		r.insert(n%10);
		n/=10;

	}
	




	return 0;
}



