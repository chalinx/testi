import numpy as np

def newton_system(f, Jf, x0, tol=1e-5, maxiter=100):
    k = 0
    xk = x0
    results = []

    while True:
        fxk = f(xk)
        Jfxk = Jf(xk)
        hk = np.linalg.solve(Jfxk, -fxk)
        xk = xk + hk
        k += 1
        results.append((k, xk.copy(), fxk.copy(), np.linalg.norm(hk)))
        
        if np.linalg.norm(hk) < tol or k >= maxiter:
            break

    return xk, results

# Definición del sistema de ecuaciones no lineales
def f(x):
    z = np.zeros_like(x)
    z[0] = x[0] + 0.5 * np.log(x[0] * x[1]) - 2
    z[1] = x[0] * x[1]**2 + 5 * x[1] - 3
    return z

# Definición de la jacobiana del sistema
def Jf(x):
    J = np.zeros((2, 2))
    J[0, 0] = 1 + 0.5 / x[0]
    J[0, 1] = 0.5 / x[1]
    J[1, 0] = x[1]**2
    J[1, 1] = 2 * x[0] * x[1] + 5
    return J

# Condición inicial
x0 = np.array([1.0, 1.5])

# Llamada a la función del método de Newton
solution, results = newton_system(f, Jf, x0)

# Mostrar los resultados en el formato solicitado
print(f"{'k':<5}{'x1^(k)':<10}{'x2^(k)':<10}{'f1(x^(k))':<15}{'f2(x^(k))':<15}{'|h^(k)|':<15}")
print(f"{0:<5}{x0[0]:<10.5f}{x0[1]:<10.5f}{f(x0)[0]:<15.8f}{f(x0)[1]:<15.8f}{0:<15.8f}")
for r in results:
    k, xk, fxk, h_norm = r
    print(f"{k:<5}{xk[0]:<10.5f}{xk[1]:<10.5f}{fxk[0]:<15.8f}{fxk[1]:<15.8f}{h_norm:<15.8f}")
