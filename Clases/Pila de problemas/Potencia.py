import numpy as np
import matplotlib.pyplot as plt

def metodo_potencia_con_grafica(A, x, TOL, N):
    n = len(A)
    k = 1
    μ_vals = []
    while k <= N:
        p = np.argmax(np.abs(x))
        x = x / x[p]
        y = np.dot(A, x)
        μ = y[p]
        μ_vals.append(μ)
        p = np.argmax(np.abs(y))
        if y[p] == 0:
            print('A tiene el eigenvalor 0, seleccione un nuevo vector x y reinicie')
            return
        ERR = np.linalg.norm(x - (y / y[p]), np.inf)
        x = y / y[p]
        print(f"Iteración {k}: μ = {μ}, x = {x}, ERR = {ERR}")
        if ERR < TOL:
            plt.plot(range(1, k+1), μ_vals, marker='o')
            plt.xlabel('Iteraciones')
            plt.ylabel('μ')
            plt.title('Convergencia del Método de Potencia')
            plt.grid(True)
            plt.show()
            return μ, x
        k += 1

    print('El número máximo de iteraciones excedido')
    plt.plot(range(1, k), μ_vals, marker='o')
    plt.xlabel('Iteraciones')
    plt.ylabel('μ')
    plt.title('Convergencia del Método de Potencia')
    plt.grid(True)
    plt.show()

A = np.array([[4, -1, 1], [-1, 3, -2], [1, -2, 3]])
x = np.array([1, 1, 1])
TOL = 1e-6
N = 1000

resultado = metodo_potencia_con_grafica(A, x, TOL, N)
print("Resultado final:", resultado)
