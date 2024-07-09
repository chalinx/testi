/*Por supuesto, aquí tienes la traducción del problema "C. 
Equal Sums" al español, siguiendo tus indicaciones:

**Descripción:**

Se te dan k secuencias de enteros. La longitud de la i-ésima secuencia es n_i.

Debes elegir exactamente dos secuencias i y j (i ≠ j) de tal manera que puedas 
eliminar exactamente un elemento en cada una de ellas de tal manera que la suma
 de la secuencia i modificada (cuya longitud será n_i - 1) sea igual a la suma de 
 la secuencia j modificada (cuya longitud será n_j - 1).

Ten en cuenta que se requiere eliminar exactamente un elemento en cada una de 
las dos secuencias elegidas.

Se asume que la suma de la secuencia vacía (de longitud 0) es 0.

**Entrada:**

La primera línea contiene un entero k (2 ≤ k ≤ 2 × 10^5) — el número de secuencias.

Luego siguen k pares de líneas, cada par contiene una secuencia.

La primera línea en el i-ésimo par contiene un entero ni (1 ≤ n_i < 2 × 10^5) — la 
longitud de la i-ésima secuencia. La segunda línea del i-ésimo par contiene una 
secuencia de n_i enteros ai,1, ai,2, …, ai,n_i.

Los elementos de las secuencias son números enteros desde -10^4 hasta 10^4.

La suma de las longitudes de todas las secuencias dadas no excede 2 × 10^5, es decir,
 n1 + n2 + ⋯ + nk ≤ 2 × 10^5.

**Salida:**

Si es imposible elegir dos secuencias de manera que cumplan las condiciones dadas, 
imprime "NO" (sin comillas). De lo contrario, en la primera línea imprime "YES" 
(sin comillas),
 en la segunda línea, dos enteros (i, x), (1 ≤ i ≤ k, 1 ≤ x ≤ ni), en la tercera línea,
  dos enteros j, y (1 ≤ j ≤ k, 1 ≤ y ≤ nj). Esto significa que la suma de los elementos
   de la i-ésima secuencia sin el elemento con índice x es igual a la suma de los
    elementos de la j-ésima secuencia sin el elemento con índice y.

Las dos secuencias elegidas deben ser distintas, es decir, i ≠ j. 
Puedes imprimirlos en cualquier orden.

Si hay múltiples respuestas posibles, puedes imprimir cualquiera de ellas.

**Ejemplos:**

Entrada:
```
2
5
2 3 1 3 2
6
1 1 2 2 2 1
```

Salida:
```
YES
2 6
1 2
```

Entrada:
```
3
1
5
5
1 1 1 1 1
2
2 3
```

Salida:
```
NO
```

Entrada:
```
4
6
2 2 2 2 2 2
5
2 2 2 2 2
3
2 2 2
5
2 2 2 2 2
```

Salida:
```
YES
2 2
4 1
```
**Nota:**

En el primer ejemplo, hay dos secuencias [2, 3, 1, 3, 2] y [1, 1, 2, 2, 2, 1]. 
Puedes eliminar el segundo elemento de la primera secuencia para obtener [2, 1, 3, 2],
 y puedes eliminar el sexto elemento de la segunda secuencia para obtener [1, 1, 2, 2, 2].
  Las sumas de ambas secuencias resultantes son iguales a 8, es decir, las sumas son iguales.

*/


#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    int n,w;




    return 0;
}



/*
**Vamos a calcular el arreglo de triples t**. 
Un triple t_i=(sum_i,seq_i,el_i) 
significa que la suma de la secuencia seq_i sin el elemento en la posición 
el_i será igual a sum_i. Los triples se pueden calcular fácilmente de la siguiente 
manera: para cada secuencia, encuentre su suma, luego itere sobre todos sus 
elementos y reste cada uno de ellos uno por uno. Ahora ordene el arreglo 't' con
 la función de comparación estándar. Finalmente, la respuesta es "SÍ" si y solo si
  existen dos elementos adyacentes con sumas iguales y secuencias diferentes (es muy 
  fácil de ver). Por lo tanto, si encontramos tal par, la respuesta será "SÍ"; de lo 
  contrario, la respuesta será "NO".

La complejidad temporal de la solución es $$O(∑i=0k−1ni⋅log∑i=0k−1ni$$.
*/