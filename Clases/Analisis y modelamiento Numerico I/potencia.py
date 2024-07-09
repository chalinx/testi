import numpy as np

def metodo_potencia_escalada(A, x0, tol):
    # Inicialización
    x = x0
    k = 0
    iteraciones = []
    
    while True:
        k += 1
        
        x_hat = np.dot(A, x)
        
        x_new = x_hat / np.max(np.abs(x_hat))
        
        iteraciones.append(x_new)
        
        if np.linalg.norm(x_new - x) < tol:
            break
        
        x = x_new
    
    autovalor = np.dot(np.dot(A, x), x) / np.dot(x, x)
    
    return x, autovalor, iteraciones

A = np.array([[1, 2, 0], [-2, 1, 2], [1, 3, 1]])
x0 = np.array([1, 1, 1])
tol = 1e-5

# Aplicar el método de la potencia escalada
x_final, autovalor, iteraciones = metodo_potencia_escalada(A, x0, tol)

print("Vector propio dominante:", x_final)
print("Autovalor dominante:", autovalor)
print("Iteraciones:")
for i, iteracion in enumerate(iteraciones, start=1):
    print(f"Iteración {i}: {iteracion}")
