/*
**B. Build a Contest**

**Límite de tiempo por prueba:** 1 segundo  
**Límite de memoria por prueba:** 256 megabytes  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

Arkady coordina rondas en una plataforma de programación competitiva no muy famosa. Cada ronda consta de n problemas de dificultad diferente, que van desde 1 hasta n.

Para realizar una ronda, Arkady necesita n problemas nuevos (que no se hayan utilizado anteriormente), uno para cada nivel de dificultad. Por el momento, Arkady crea todos los problemas él mismo, pero desafortunadamente, no puede crear un problema con una dificultad deseada. En su lugar, cuando crea un problema, evalúa su dificultad desde 1 hasta n y lo coloca en el conjunto de problemas disponibles.

En cada momento en que Arkady puede elegir un conjunto de n problemas nuevos de dificultades diferentes del conjunto de problemas disponibles, realiza una ronda con estos problemas y los elimina del conjunto de problemas disponibles. Arkady siempre crea un problema a la vez, por lo que si puede realizar una ronda después de crear un problema, lo hace inmediatamente.

Se te da una secuencia de dificultades de problemas en el orden en que Arkady los creó. Para cada problema, determina si Arkady realizó la ronda inmediatamente después de crear ese problema o no. Inicialmente, el conjunto de problemas disponibles está vacío.

### Entrada

La primera línea contiene dos enteros n y m (1≤n,m≤105) — el número de niveles de dificultad y el número de problemas que Arkady creó.

La segunda línea contiene m enteros a1,a2,…,am (1≤ai≤n) — las dificultades de los problemas en el orden en que Arkady los creó.

### Salida

Imprime una línea que contenga m dígitos. El i-ésimo dígito debe ser 1 si Arkady realizó la ronda después de crear el i-ésimo problema y 0 en caso contrario.

### Ejemplos

**Entrada:**
```
3 11
2 3 1 2 2 2 3 2 2 3 1
```

**Salida:**
```
00100000001
```

**Entrada:**
```
4 8
4 1 3 3 2 3 3 3
```

**Salida:**
```
00001000
```

### Nota

En el primer ejemplo, Arkady realizó la ronda después de los primeros tres problemas, ya que tienen dificultades diferentes, y luego solo después del último problema.

En el segundo ejemplo, Arkady realizó la ronda después del cuarto problema.

*/