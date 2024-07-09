/*
**C. League of Leesins**

**Límite de tiempo por prueba:** 2 segundos  
**Límite de memoria por prueba:** 256 megabytes  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

Bob es un ávido fanático del videojuego "League of Leesins", y hoy celebra mientras el Campeonato Mundial de League of Leesins llega a su fin.

El torneo consistió en n equipos de todo el mundo (n≥5). Antes de que comenzara el torneo, Bob hizo una predicción de las clasificaciones de cada equipo, del 1º al n-ésimo. Después de la final, comparó la predicción con el resultado real y descubrió que el equipo i según su predicción terminó en la posición pi (1≤pi≤n, todos los pi son únicos). En otras palabras, p es una permutación de 1, 2, ..., n.

Como el jugador favorito de Bob en League se llama "3ga", decidió escribir cada 3 elementos consecutivos de la permutación p. Formalmente, Bob creó un arreglo q de n-2 triples, donde qi=(pi,pi+1,pi+2) para cada 1≤i≤n-2. Bob estaba muy orgulloso de su arreglo, así que se lo mostró a su amiga Alice.

Después de enterarse del arreglo de Bob, Alice declaró que podía recuperar la permutación p incluso si Bob reorganiza los elementos de q y los elementos dentro de cada triple. Por supuesto, Bob no creyó en tal magia, así que hizo lo mismo que arriba para ver la respuesta de Alice.

Por ejemplo, si n=5 y p=[1,4,2,3,5], entonces el arreglo original q será [(1,4,2),(4,2,3),(2,3,5)]. Bob puede entonces reorganizar los números dentro de cada triple y las posiciones de los triples para obtener [(4,3,2),(2,3,5),(4,1,2)]. Ten en cuenta que [(1,4,2),(4,2,2),(3,3,5)] no es una reorganización válida de q, ya que Bob no puede intercambiar números que pertenecen a triples diferentes.

Como amigo de Alice, sabes con certeza que Alice solo estaba tratando de impresionar, así que decidiste salvarle la cara dándole cualquier permutación p que sea consistente con el arreglo q que le dieron.

### Entrada

La primera línea contiene un solo entero n (5≤n≤105) — el tamaño de la permutación p.

Las siguientes n-2 líneas contienen 3 enteros qi,1, qi,2, qi,3 (1≤qi,j≤n) — los elementos del i-ésimo triple del arreglo qi reorganizado (mezclado), en orden aleatorio. Recuerda que los números dentro de cada triple pueden ser reorganizados y también las posiciones de los triples pueden ser reorganizadas.

Se garantiza que hay al menos una permutación p que sea consistente con la entrada.

### Salida

Imprime n enteros distintos p1,p2,…,pn (1≤pi≤n) de manera que p sea consistente con el arreglo q.

Si hay múltiples respuestas, imprime cualquiera.

### Ejemplo

**Entrada:**
```
5
4 3 2
2 3 5
4 1 2
```

**Salida:**
```
1 4 2 3 5
```
*/