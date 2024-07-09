from numpy import sin

eps = 1E-5
maxIter = 100
f = lambda x: x * sin(x) - 1
x0 = 1
x1 = 2
f0 = f(x0)
f1 = f(x1)
i = 0

while i < maxIter and abs(f1) >= eps:
    h = -f1 * (x1 - x0) / (f1 - f0)
    x0 = x1
    f0 = f1
    x1 = x1 + h
    f1 = f(x1)
    i += 1
    print(f'x1={x1:5.3f} f(x1)={f1:5.3f}')

if abs(f1) >= eps:
    print('Método no converge')
else:
    print(f'Solución c={x1}')
    print(f'Número de iteraciones={i}')
