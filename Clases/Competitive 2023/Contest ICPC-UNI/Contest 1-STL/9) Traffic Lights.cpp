/*
**Traffic Lights**

**Límite de Tiempo:** 1.00 s  
**Límite de Memoria:** 512 MB

Hay una calle de longitud x cuyas posiciones están numeradas desde 0 hasta x. Inicialmente, no hay semáforos de tráfico, pero se agregan n conjuntos de semáforos de tráfico a la calle uno tras otro.

Tu tarea es calcular la longitud del pasaje más largo sin semáforos de tráfico después de cada adición.

### Entrada

La primera línea de entrada contiene dos enteros x y n: la longitud de la calle y el número de conjuntos de semáforos de tráfico.

Luego, la siguiente línea contiene n enteros p1, p2, ..., pn: la posición de cada conjunto de semáforos de tráfico. Cada posición es distinta.

### Salida

Imprime la longitud del pasaje más largo sin semáforos de tráfico después de cada adición.

### Restricciones

- 1 ≤ x ≤ 10^9
- 1 ≤ n ≤ 2*10^5
- 0 < pi < x

### Ejemplo

Entrada:
```
8 3
3 6 2
```

Salida:
```
5 3 3
```
*/