/*Por supuesto, aquí tienes la traducción del problema "A.
 Second Order Statistics" al español, siguiendo tus indicaciones:

**Descripción:**

Una vez Bob necesitó encontrar la segunda estadística de orden de 
una secuencia de números enteros. Elegimos cada número de la secuencia 
exactamente una vez y los ordenamos. El valor en la segunda posición es
la segunda estadística de orden de la secuencia dada. En otras palabras,
  es el elemento más pequeño estrictamente mayor que el mínimo. Ayuda a Bob
   a resolver este problema.

**Entrada:**

La primera línea de entrada contiene el entero n (1 ≤ n ≤ 100) — la 
cantidad de números en la secuencia. La segunda línea contiene n números
 enteros separados por espacios — elementos de la secuencia. 
 Estos números no exceden el valor absoluto de 100.

**Salida:**

Si la secuencia dada tiene la segunda estadística de orden, 
imprime esta estadística de orden, de lo contrario, imprime NO.

**Ejemplos:**

Entrada:
```
4
1 2 2 -4
```

Salida:
```
1
```

Entrada:
```
5
1 2 3 1 1
```

Salida:
```
2
```

Nota:
En el primer ejemplo, la segunda estadística de orden es 1, 
ya que es el elemento más pequeño estrictamente mayor que el
 mínimo que es -4.

En el segundo ejemplo, la segunda estadística de orden es 2,
 ya que es el elemento más pequeño estrictamente mayor que el
  mínimo que es 1.*/

#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int n;
int w;
    cin>>n;
    
    set<int> r;
    for(int i =0;i<n;i++){
        cin>>w;
        r.insert(w);
    }
    if(r.size()==1)cout<<"NO";
    int i=1;
   for(auto t:r){
    if(i==2){cout<<t;return 0;}
    i++;
   }

    return 0;
}

