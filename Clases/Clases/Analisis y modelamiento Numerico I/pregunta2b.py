import numpy as np
import matplotlib.pyplot as plt

def g(x):
    return np.sqrt(x + 2)

def puntofijo(f, x0):
    eps = 1E-4
    maxIter = 100
    errors = []
    iterations = []
    
    for i in range(maxIter):
        x1 = f(x0)
        error = abs(x1 - x0)/x1
        errors.append(error)
        iterations.append(i)
        x0 = x1
        print(f'Iteración {i}: x{i} = {x0:.5f}, error = {error:.5f}')
        if error < eps:
            break
    
    if error >= eps:
        print('Método no converge')
    else:
        print(f'Solución c = {x0:.5f}')
        print(f'Número de iteraciones = {i}')
    
    plt.plot(iterations, errors, marker='o')
    plt.yscale('log')
    plt.xlabel('Número de iteraciones')
    plt.ylabel('Error')
    plt.title('Curva de convergencia (Iteraciones vs. Error)')
    plt.grid(True)
    plt.show()

x0 = 1

puntofijo(g, x0)
