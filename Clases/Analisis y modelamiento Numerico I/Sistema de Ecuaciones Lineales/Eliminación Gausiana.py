import numpy as np

def imprimir_matriz_triangular(M):
    """ Imprime la matriz en formato legible """
    for fila in M:
        print(" ".join(f"{elem:8.3f}" for elem in fila))
    print()

def eliminacion_gaussiana(M):
    n = len(M)
    x = np.zeros(n)

    for i in range(n-1):
        p = -1
        # Encontrar el pivote no cero más bajo en la columna i
        for k in range(i, n):
            if abs(M[k][i]) > 1e-10:  # Ajustar precisión para evitar comparar con cero exacto
                p = k
                break
        if p == -1:
            return "No existe solución."
        
        # Intercambiar filas si es necesario
        if p != i:
            M[[i, p]] = M[[p, i]]
        
        # Eliminación hacia adelante
        for j in range(i+1, n):
            if abs(M[i][i]) > 1e-10:  # Comprobar si el elemento del pivote es significativamente no cero
                f = M[j][i] / M[i][i]
                M[j, i:] -= f * M[i, i:]  # Asegúrate de restar la fila completa adecuadamente

        # Imprimir la matriz después de cada paso de eliminación
        print(f"Matriz triangular superior después de la {i+1}° iteración:")
        imprimir_matriz_triangular(M)

    if abs(M[n-1][n-1]) < 1e-10:
        return "No existe solución."
    
    # Sustitución hacia atrás
    x[n-1] = M[n-1][n] / M[n-1][n-1]
    for i in range(n-2, -1, -1):
        suma = sum(M[i][j] * x[j] for j in range(i+1, n))
        x[i] = (M[i][n] - suma) / M[i][i]
    
    return x

# Ejemplo de uso
M = np.array([[2, 2, 6, 10],
              [2, -1, 4, 11],
              [0, -1, 1, 3]], dtype=float)
resultado = eliminacion_gaussiana(M)
if isinstance(resultado, str):
    print(resultado)
else:
    print("Solución encontrada:", resultado)
