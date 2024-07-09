/*
## A. Nearly Lucky Number

**Límite de tiempo por prueba:** 2 segundos  
**Límite de memoria por prueba:** 256 megabytes  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

Petya ama los números afortunados. Todos sabemos que los números afortunados son los enteros positivos cuyas representaciones decimales solo contienen los dígitos afortunados 4 y 7. Por ejemplo, los números 47, 744 y 4 son afortunados, mientras que 5, 17 y 467 no lo son.

Desafortunadamente, no todos los números son afortunados. Petya llama a un número casi afortunado si la cantidad de dígitos afortunados en él es un número afortunado. Se pregunta si el número n es un número casi afortunado.

### Entrada
La única línea contiene un entero n (1 ≤ n ≤ 1018).

Por favor, no uses el especificador %lld para leer o escribir números de 64 bits en C++. Es preferible usar los flujos cin, cout o el especificador %I64d.

### Salida
Imprime en una sola línea "YES" si n es un número casi afortunado. De lo contrario, imprime "NO" (sin las comillas).

### Ejemplos
**Entrada:**
```
40047
```
**Salida:**
```
NO
```

**Entrada:**
```
7747774
```
**Salida:**
```
YES
```

**Entrada:**
```
1000000000000000000
```
**Salida:**
```
NO
```

En el primer ejemplo, hay 3 dígitos afortunados (el primero y los dos últimos), por lo que la respuesta es "NO".

En el segundo ejemplo, hay 7 dígitos afortunados, y 7 es un número afortunado, por lo que la respuesta es "YES".

En el tercer ejemplo, no hay dígitos afortunados, por lo que la respuesta es "NO".
*/

#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

	string q;
	cin>>q;
	int cont=0;
	for(int i =0;i<q.size();i++){
		if(q[i]=='4'||q[i]=='7')cont++;
	}

	if(cont==7||cont==4)cout<<"YES";
	else cout<<"NO";


	return 0;
}

