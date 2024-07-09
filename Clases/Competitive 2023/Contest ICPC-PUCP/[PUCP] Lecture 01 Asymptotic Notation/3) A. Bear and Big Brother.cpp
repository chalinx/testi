/*
## A. Bear and Big Brother

**Límite de tiempo por prueba:** 1 segundo  
**Límite de memoria por prueba:** 256 megabytes  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

El oso Limak quiere convertirse en el oso más grande, o al menos volverse
 más grande que su hermano Bob.

En este momento, Limak y Bob pesan "a" y "b" respectivamente. Se garantiza
 que el peso de Limak es menor o igual que el peso de su hermano.

Limak come mucho y su peso se triplica después de cada año, mientras que el 
peso de Bob se duplica después de cada año.

¿Después de cuántos años completos Limak será estrictamente más grande 
(más pesado) que Bob?

### Entrada
La única línea de entrada contiene dos enteros "a" y "b" 
(1≤a≤0b≤10) — el peso de Limak y el peso de Bob respectivamente.

### Salida
Imprime un entero, que denote el número entero de años después 
de los cuales Limak será estrictamente más grande que Bob.

### Ejemplos
**Entrada:**
```
4 7
```
**Salida:**
```
2
```

**Nota:** En el primer ejemplo, Limak pesa 4 y Bob pesa 7 inicialmente.
 Después de un año, sus pesos son 4·3=12 y 7·2=14 respectivamente (uno
se triplica mientras que el otro se duplica). Limak todavía no es más 
grande que Bob. 
Después del segundo año, los pesos son 36 y 28, por lo que el primer 
peso es mayor que el segundo. Limak se vuelve más grande que Bob después
 de dos años, por lo que debes imprimir 2.

En el segundo ejemplo, los pesos de Limak y Bob en los años siguientes son:
12 y 18, luego 36 y 36, y finalmente 108 y 72 (después de tres años). 
La respuesta es 3. Recuerda que Limak quiere ser más grande que Bob y 
no estará satisfecho con pesos iguales.

En el tercer ejemplo, Limak se vuelve más grande que Bob después del 
primer año. Sus pesos serán 3 y 2 en ese momento.
*/

#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

	int a,b,cont=0;
	cin>>a>>b;
	while(a<=b){
		cont++;
		a*=3;
		b*=2;
	}

	cout<<cont;



	return 0;
}

