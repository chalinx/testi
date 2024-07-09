import numpy as np
from numpy.linalg import solve, norm

def metodo_potencia_inversa(A, x0, tol, sigma, c, mu):
    # Inicialización
    x = x0
    k = 0
    I = np.eye(A.shape[0])
    
    while True:
        k += 1
        
        # Resolver (A - sigma*I) * x_hat = x
        x_hat = solve(A - sigma * I, x)
        
        # Normalizar x_hat
        x_new = x_hat / np.max(np.abs(x_hat))
        
        # Verificar condición de parada
        if norm(A @ x_new - sigma * x_new, np.inf) <= c * mu * norm(A, np.inf):
            break
        
        # Actualizar x
        x = x_new
        
    return x

# Ejemplo de uso
A = np.array([[4, 1], [2, 3]])
x0 = np.array([1, 1])
tol = 1e-6
sigma = 0.5  # valor de desplazamiento
c = 0.1     # constante c
mu = 0.1    # constante mu

x_final = metodo_potencia_inversa(A, x0, tol, sigma, c, mu)
print("Vector propio inverso escalado:", x_final)
