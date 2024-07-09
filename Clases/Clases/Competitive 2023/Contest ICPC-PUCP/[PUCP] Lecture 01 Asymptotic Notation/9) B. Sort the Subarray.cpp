/*
## B. Sort the Subarray

**Límite de tiempo por prueba:** 2 segundos  
**Límite de memoria por prueba:** 512 megabytes  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

Monocarp tenía un arreglo a de n enteros. Ha decidido elegir dos enteros l y r tal que 1 ≤ l ≤ r ≤ n, y luego ordenar el subarreglo a[l..r] (el subarreglo a[l..r] es la parte del arreglo a que contiene los elementos al, al+1, al+2, ..., ar−1, ar). Después de ordenar el subarreglo, Monocarp ha obtenido un nuevo arreglo, que denotamos como a′.

Por ejemplo, si a = [6,7,3,4,4,6,5] y Monocarp ha elegido l = 2, r = 5, entonces a′ = [6,3,4,4,7,6,5].

Se te dan los arreglos a y a′. Encuentra los enteros l y r que Monocarp podría haber elegido. Si hay múltiples pares de valores (l,r), encuentra aquel que corresponda al subarreglo más largo.

### Entrada
La primera línea contiene un entero t (1 ≤ t ≤ 10^4) — el número de casos de prueba.

Cada caso de prueba consta de tres líneas:

- La primera línea contiene un entero n (2 ≤ n ≤ 2 × 10^5).
- La segunda línea contiene n enteros a1, a2, ..., an (1 ≤ ai ≤ n).
- La tercera línea contiene n enteros a′1, a′2, ..., a′n (1 ≤ a′i ≤ n).

Restricciones adicionales en la entrada:

- La suma de n en todos los casos de prueba no excede 2 × 10^5.
- Es posible obtener el arreglo a′ al ordenar un subarreglo de a.
- a′ ≠ a (existen al menos una posición en la que estos dos arreglos son diferentes).

### Salida
Para cada caso de prueba, imprime dos enteros: los valores de l y r (1 ≤ l ≤ r ≤ n). Si hay múltiples respuestas, imprime los valores que correspondan al subarreglo más largo. Si aún hay múltiples respuestas, imprime cualquiera de ellas.

### Ejemplo
**Entrada:**
```
3
7
6 7 3 4 4 6 5
6 3 4 4 7 6 5
3
1 2 1
1 1 2
3
2 2 1
2 1 2
```
**Salida:**
```
2 5
1 3
2 3
```
*/


#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

	int t,n;
	cin>>t;
	int l,r;
	
	while(t--){
		cin>>n;		
		vector<int>q(n);
		vector<int>w(n);
		for(int i =0;i<n;i++)cin>>q[i];
		for(int i =0;i<n;i++)cin>>w[i];
		l=r=0;
		for(int i =0;i<n;i++) 
			if(q[i]!=w[i]){
				l=r=i;
				break;
			}
		
		while(l>0&&w[l-1]<=w[l])l--;
		while(r<n-1&&w[r]<=w[r+1])r++;
		cout<<l+1<<" "<<r+1<<endl;
		
	}





	return 0;
}

