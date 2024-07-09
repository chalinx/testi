
/*
    A. Watermelon

**Límite de tiempo por prueba:** 1 segundo  
**Límite de memoria por prueba:** 64 megabytes  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

En un caluroso día de verano, Pete y su amigo Billy decidieron comprar 
una sandía. Eligieron la más grande y madura según su opinión. Después 
de pesar la sandía, la balanza mostró un peso de "w" kilogramos. 
Se apresuraron a volver a casa, muriendo de sed, y decidieron 
dividir la fruta, pero se encontraron con un problema complicado.

Pete y Billy son grandes fanáticos de los números pares, por eso 
quieren dividir la sandía de manera que cada una de las dos partes
 pese un número par de kilogramos. Al mismo tiempo, no es obligatorio
  que las partes sean iguales. Los chicos están extremadamente cansados
 y quieren comenzar su comida lo antes posible, por eso necesitas 
 ayudarlos a determinar si pueden dividir la sandía de la manera
que desean. Seguro que cada uno de ellos debe obtener una parte 
de peso positivo.

### Entrada
La primera (y única) línea de entrada contiene un número entero 
"w" (1≤w≤100) — el peso de la sandía comprada por los chicos.

### Salida
Imprime YES si los chicos pueden dividir la sandía en dos partes, 
cada una de ellas pesando un número par de kilogramos; y NO en caso
 contrario.

### Ejemplos
**Entrada:**
```
8
```
**Salida:**
```
YES
```

**Nota:** Por ejemplo, los chicos pueden dividir la sandía en dos partes
 de 2 y 6 kilogramos respectivamente (otra variante es dividirla en dos 
 partes de 4 y 4 kilogramos).
*/


#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

    int n;
    cin>>n;
    if(n!=2&&n%2==0)cout<<"YES";
    else cout<<"NO";


    return 0;
}

