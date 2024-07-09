/*
## A. Police Recruits

**Límite de tiempo por prueba:** 1 segundo  
**Límite de memoria por prueba:** 256 megabytes  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

El departamento de policía de tu ciudad acaba de comenzar su trayectoria. Inicialmente, no tienen ningún personal. Por lo tanto, comenzaron a contratar nuevos reclutas en grupos.

Mientras tanto, los crímenes siguen ocurriendo en la ciudad. Un miembro de la fuerza policial solo puede investigar un crimen durante toda su vida.

Si no hay un oficial de policía disponible (que no esté ocupado con un crimen) durante el acontecimiento de un crimen, quedará sin resolver.

Dada la orden cronológica de ocurrencia de crímenes y contrataciones de reclutas, encuentra el número de crímenes que quedarán sin resolver.

### Entrada
La primera línea de la entrada contendrá un entero n (1 ≤ n ≤ 105), el número de eventos. La siguiente línea contendrá n enteros separados por espacios.

Si el entero es -1, significa que ocurrió un crimen. De lo contrario, el entero será positivo, el número de oficiales reclutados juntos en ese momento. No se contratarán más de 10 oficiales a la vez.

### Salida
Imprime un solo entero, el número de crímenes que quedarán sin resolver.

### Ejemplos
**Entrada:**
```
3
-1 -1 1
```
**Salida:**
```
2
```

**Entrada:**
```
8
1 -1 1 -1 -1 1 1 1
```
**Salida:**
```
1
```

**Entrada:**
```
11
-1 -1 2 -1 -1 -1 -1 -1 -1 -1 -1
```
**Salida:**
```
8
```

En el segundo ejemplo:

1. Primero se contrata a una persona.
2. Luego aparece un crimen, la última persona contratada investigará este crimen.
3. Se contrata a una persona más.
4. Aparece otro crimen, la última persona contratada investigará este crimen.
5. Aparece un crimen. No hay un oficial de policía libre en ese momento, así que este crimen quedará sin resolver.
6. Se contrata a una persona más.
7. Se contrata a una persona más.
8. Se contrata a una persona más.
 
La respuesta es uno, ya que un crimen (en el paso 5) quedará sin resolver.

*/


#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

	int n,r,w=0;
	int cont=0;
	cin>>n;
	cin>>r;
	w=r;
	for(int i =1;i<=n;i++){
		if(w<0){
			w=0;
			cont++;
		}
		cin>>r;
		w+=r;
	}
	cout<<cont;


	return 0;
}

