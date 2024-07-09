/*
**B. Strings Equalization**

**Límite de Tiempo:** 1.00 s  
**Límite de Memoria:** 256 MB

Se te dan dos cadenas de igual longitud, s y t, que consisten en letras minúsculas del alfabeto latino. Puedes realizar cualquier número (posiblemente cero) de operaciones en estas cadenas.

Durante cada operación, eliges dos caracteres adyacentes en cualquier cadena y asignas el valor del primer carácter al valor del segundo o viceversa.

Por ejemplo, si s es "acbc", puedes obtener las siguientes cadenas en una operación:

- "aabc" (si realizas s2=s1);
- "ccbc" (si realizas s1=s2);
- "accc" (si realizas s3=s2 o s3=s4);
- "abbc" (si realizas s2=s3);
- "acbb" (si realizas s4=s3).

Ten en cuenta que también puedes aplicar esta operación a la cadena t.

Por favor, determina si es posible transformar s en t, aplicando la operación anterior cualquier número de veces.

Ten en cuenta que debes responder a q consultas independientes.

### Entrada

La primera línea contiene un entero q (1≤q≤100) — el número de consultas. Cada consulta está representada por dos líneas consecutivas.

La primera línea de cada consulta contiene la cadena s (1≤|s|≤100) que consiste en letras minúsculas del alfabeto latino.

La segunda línea de cada consulta contiene la cadena t (1≤|t|≤100, |t|=|s|) que consiste en letras minúsculas del alfabeto latino.

### Salida

Para cada consulta, imprime "YES" si es posible hacer que s sea igual a t, y "NO" en caso contrario.

Puedes imprimir cada letra en cualquier caso que desees (por lo tanto, las cadenas "yEs", "yes", "Yes" y "YES" se reconocerán todas como respuestas positivas).

### Ejemplo

Entrada:
```
3
xabb
aabx
technocup
technocup
a
z
```

Salida:
```
YES
YES
NO
```

**Nota**

En la primera consulta, puedes realizar dos operaciones s1=s2 (después de eso, s se convierte en "aabb") y t4=t3 (después de eso, t se convierte en "aabb").

En la segunda consulta, las cadenas son iguales inicialmente, por lo que la respuesta es "YES".

En la tercera consulta, no puedes hacer que las cadenas s y t sean iguales. Por lo tanto, la respuesta es "NO".
*/

