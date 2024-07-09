/*Por supuesto, aquí tienes la traducción del problema "B.
 Spider Man" al español, siguiendo tus indicaciones:

**Descripción:**

Peter Parker quiere jugar un juego con el Dr. Octopus. 
El juego se trata de ciclos. Un ciclo es una secuencia de vértices, 
donde el primero está conectado con el segundo, el segundo está conectado 
con el tercero, y así sucesivamente, mientras que el último está conectado 
con el primero nuevamente. Un ciclo puede consistir en un solo vértice aislado.

Inicialmente hay 'k' ciclos, el i-ésimo de ellos consiste exactamente en v_i vértices. 
Los jugadores juegan alternativamente, comenzando con Peter. En cada turno, 
un jugador debe elegir un ciclo con al menos 2 vértices (por ejemplo, x vértices) 
entre todos los ciclos disponibles y reemplazarlo por dos ciclos con 'p' y 'x - p' vértices,
 donde 1 ≤ p < x es elegido por el jugador.
  El jugador que no pueda hacer un movimiento pierde el juego (¡y su vida!).

Peter quiere probar algunas configuraciones de conjuntos iniciales de ciclos 
antes de jugar realmente con el Dr. Octopus. Inicialmente tiene un conjunto vacío. 
En la i-ésima prueba, agrega un ciclo con a_i vértices al conjunto (en realidad, esto
 es un multiconjunto porque puede contener dos o más ciclos idénticos). Después de cada prueba,
 Peter quiere saber quién gana si los jugadores comienzan el juego con el 
 conjunto actual de ciclos.

Peter es bastante bueno en matemáticas, pero ahora te pide ayuda.

**Entrada:**

La primera línea de la entrada contiene un solo entero n (1 ≤ n ≤ 100,000) — el 
número de pruebas que Peter va a hacer.

La segunda línea contiene n enteros separados por espacios: a1, a2, ..., an (1 ≤ ai ≤ 10^9),
 donde el i-ésimo número representa el número de vértices en el ciclo agregado antes de la 
 i-ésima prueba.

**Salida:**

Imprime el resultado de todas las pruebas en el orden en que se realizan. 
Imprime 1 si el jugador que comienza gana o 2 en caso contrario.

**Ejemplos:**

Entrada:
```
3
1 2 3
```

Salida:
```
2
1
1
```

Entrada:
```
5
1 1 5 1 1
```

Salida:
```
2
2
2
2
2
```

Nota:
En el primer ejemplo de prueba:

En la primera prueba de Peter, solo hay un ciclo con 1 vértice. 
El primer jugador no puede hacer un movimiento y pierde.

En su segunda prueba, hay un ciclo con 1 vértice y otro con 2. 
Nadie puede hacer un movimiento en el ciclo con 1 vértice.
 El primer jugador puede reemplazar el segundo ciclo con dos ciclos de 1 vértice,
  y el segundo jugador no puede hacer ningún movimiento y pierde.

En su tercera prueba, los ciclos tienen 1, 2 y 3 vértices. Como en la última prueba, 
nadie puede hacer un movimiento en el primer ciclo. El primer jugador puede reemplazar 
el tercer ciclo con uno de tamaño 1 y otro de tamaño 2. Ahora los ciclos
 tienen 1, 1, 2, 2 vértices. El único movimiento del segundo jugador es reemplazar 
 un ciclo de tamaño 2 con 2 ciclos de tamaño 1. Y los ciclos son 1, 1, 1, 1, 2. 
 El primer jugador reemplaza el último ciclo con 2 ciclos de tamaño 1 y gana.

En el segundo ejemplo de prueba:

Tener ciclos de tamaño 1 es como no tenerlos (porque nadie puede hacer un movimiento en ellos).

En la tercera prueba de Peter: Hay un ciclo de tamaño 5 (los demás no importan).
 El primer jugador tiene dos opciones: reemplazarlo con ciclos de tamaños 1 y 4, 
 o de tamaños 2 y 3.

Si lo reemplaza con ciclos de tamaños 1 y 4: Solo importa el segundo ciclo. 
El segundo jugador reemplazará el ciclo de tamaño 4 con 2 ciclos de tamaño 2. 
La única opción del primer jugador es reemplazar uno de ellos con dos ciclos de
 tamaño 1. El segundo jugador hace lo mismo con el otro ciclo. 
 El primer jugador no puede hacer ningún movimiento y pierde.

Si lo reemplaza con ciclos de tamaños 2 y 3: El segundo jugador reemplazará el
 ciclo de tamaño 3 con dos de tamaños 1 y 2. Ahora solo los ciclos con más de un
  vértice son dos ciclos de tamaño 2. Como se muestra en el caso anterior, con 2 
  ciclos de tamaño 2 el segundo jugador gana. En cualquier caso, el primer jugador pierde.*/

#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int n,w;
cin>>n;
    long long cont=0;
    for(int i=1;i<=n;i++){
        cin>>w;
        cont+=(w-1);
        if(cont%2==0)cout<<2;
        else cout<<1;
        cout<<endl;
    }



    return 0;
}

