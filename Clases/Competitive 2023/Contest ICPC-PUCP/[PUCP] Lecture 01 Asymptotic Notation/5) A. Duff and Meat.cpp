/*
## A. Duff and Meat


**Límite de tiempo por prueba:** 1 segundo  
**Límite de memoria por prueba:** 256 megabytes  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

¡Duff está adicta a la carne! Malek quiere mantenerla feliz durante n días. 
Para estar feliz en el i-ésimo día, necesita comer exactamente ai kilogramos de carne.

Hay una tienda grande en la ciudad y Malek quiere comprarle carne de allí. 
En el i-ésimo día, venden carne por pi dólares por kilogramo. Malek conoce 
todos los números a1,...,an y p1,...,pn. En cada día, él puede comprar una 
cantidad arbitraria de carne, y también puede guardar algo de carne para el futuro.

Malek está un poco cansado de cocinar carne, así que te pidió ayuda. Ayúdale 
a minimizar el dinero total que gasta para mantener a Duff feliz durante n días.

### Entrada
La primera línea de la entrada contiene el entero n (1≤n≤105), el número de días.

En las siguientes n líneas, la i-ésima línea contiene dos enteros ai y pi
(1≤a_i,p_i≤100), la cantidad de carne que Duff necesita y el costo de la
carne en ese día.

### Salida
Imprime el dinero mínimo necesario para mantener a Duff feliz durante n días, 
en una línea.

### Ejemplos
**Entrada:**
```
3
1 3
2 2
3 1
```
**Salida:**
```
10
```

En el primer ejemplo: Una forma óptima sería comprar 1 kg en el primer día, 
2 kg en el segundo día y 3 kg en el tercer día.

**Entrada:**
```
3
1 3
2 1
3 2
```
**Salida:**
```
8
```

En el segundo ejemplo: Una forma óptima sería comprar 1 kg en el primer día
 y 5 kg (carne necesaria para el segundo y tercer día) en el segundo día.
*/



#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

	int n,q,r;
	cin>>n;
	int w;
	cin>>q>>r;
	w=r;
	int tol=q*w;
	for(int i =1;i<n;i++){
		cin>>q>>r;
		if(r<w)w=r;
		tol+=q*w;
	
	}
	cout<<tol;


	return 0;
}

