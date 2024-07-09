/*
## A. Garland

**Límite de tiempo por prueba:** 2.00 segundos  
**Límite de memoria por prueba:** 256 MB  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

Tienes una guirnalda que consiste en 4 bombillas de colores, el color de la i-ésima bombilla es si.

Inicialmente, todas las bombillas están apagadas. Tu tarea es encender todas las bombillas. Puedes realizar la siguiente operación cualquier número de veces: seleccionar una bombilla y cambiar su estado (encenderla si estaba apagada y apagarla si estaba encendida). La única restricción en la operación anterior es que puedes aplicar la operación a una bombilla solo si la operación anterior se aplicó a una bombilla de color diferente (la primera operación se puede aplicar a cualquier bombilla).

Calcula el número mínimo de operaciones para encender todas las bombillas, o informa que esto es imposible.

### Entrada

La primera línea contiene un solo entero t (1 ≤ t ≤ 104) — el número de casos de prueba.

La línea única de cada caso de prueba contiene s — una secuencia de 4 caracteres, donde cada caracter es un dígito decimal. El i-ésimo caracter denota el color de la i-ésima bombilla.

### Salida

Para cada caso de prueba, imprime un solo entero — el número mínimo de operaciones para encender todas las bombillas. Si es imposible encender todas las bombillas, imprime -1.

### Ejemplo

**Entrada:**
```
3
9546
0000
3313
```

**Salida:**
```
4
-1
6
```

**Nota:**

En el primer ejemplo, todos los colores son diferentes, por lo que puedes encender todas las bombillas en 4 operaciones.

En el segundo ejemplo, es imposible encender todas las bombillas, porque después de cambiar una bombilla, es imposible encender las otras.

En el tercer ejemplo, puedes proceder de la siguiente manera: enciende la primera bombilla, enciende la tercera bombilla, enciende la cuarta bombilla, apaga la tercera bombilla, enciende la segunda bombilla, enciende la tercera bombilla.
*/

#include<bits/stdc++.h>
#define ll long long int

#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define vi vector<int>
#define vll vector<ll>
#define vct vector
#define pb push_back
#define er erase
#define fi(i,a,n,w) for(int i =a;i<n;i+=w)
#define fl(i,a,n,w) for(ll i=a;i<n;i+=w)
#define fr first
#define se second
#define pll pair<ll,ll>
#define pii pair<int,int>



using namespace std;


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	

	return 0;
}

