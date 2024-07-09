import numpy as np
import matplotlib.pyplot as plt

# Definimos los polinomios P1(x) y Q1(x)
def P1(x):
    return -0.5 * x + 11

def Q1(x):
    return 0.1 * x + 4.5

# Sistema de ecuaciones para P(x)
A = np.array([
    [1000, 100, 10, 1],    # 10^3, 10^2, 10, 1
    [300, 20, 1, 0],       # 3*10^2, 2*10, 1, 0
    [15625, 625, 25, 1],   # 25^3, 25^2, 25, 1
    [1875, 50, 1, 0],      # 3*25^2, 2*25, 1, 0
    [60, 2, 0, 0],         # 6*10, 2, 0, 0
    [150, 2, 0, 0]         # 6*25, 2, 0, 0
])

b = np.array([6, -0.5, 7, 0.1, 0, 0])

# Resolvemos el sistema
coeficientes = np.linalg.solve(A, b)

# Coeficientes a, b, c, d
a, b, c, d = coeficientes

# Polinomio cúbico P(x)
def P(x):
    return a * x**3 + b * x**2 + c * x + d

# Rango de valores para x
x1 = np.linspace(0, 10, 100)
x2 = np.linspace(10, 25, 100)
x3 = np.linspace(25, 30, 100)

# Graficamos los polinomios
plt.figure(figsize=(10, 6))

plt.plot(x1, P1(x1), label='$P_1(x) = -0.5x + 11$')
plt.plot(x2, P(x2), label=f'$P(x) = {a:.4f}x^3 + {b:.4f}x^2 + {c:.4f}x + {d:.4f}$')
plt.plot(x3, Q1(x3), label='$Q_1(x) = 0.1x + 4.5$')

plt.xlabel('x')
plt.ylabel('y')
plt.title('Gráfica de los polinomios P1(x), P(x) y Q1(x)')
plt.legend()
plt.grid(True)
plt.show()
