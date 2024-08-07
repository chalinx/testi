from numpy import dot, sqrt, array, eye
from numpy.linalg import solve
import numpy as np

def broyden(x0, A0):
    TOL = 1E-5
    MAXITER = 100
    k = 0
    xk = x0
    Ak = A0
    terminar = False
    
    while not terminar:
        fk = f(xk)
        absfk = sqrt(dot(fk.T, fk))
        
        if absfk < TOL or k > MAXITER:
            terminar = True
        else:
            sk = solve(Ak, -fk)
            xk1 = xk + sk
            fk1 = f(xk1)
            yk = fk1 - fk
            Ak += (1 / dot(sk.T, sk)) * (yk - dot(Ak, sk)) @ sk.T
            xk = xk1
            fk = fk1
            k += 1
            print(f'{k:<8d}{xk[0][0]:<8.5f} {xk[1][0]:<8.5f} {xk[2][0]:<8.5f}')
    
    print(f"Método terminó en {k} iteraciones, |f(x)|={absfk}")
    return xk

def f(x):
    z = np.zeros_like(x)
    z[0] = 3*x[0] - np.cos(x[1]*x[2]) - 0.5
    z[1] = x[0]**2 - 81*(x[1]+0.1)**2 + np.sin(x[2]) + 1
    z[2] = np.exp(-x[0]*x[1]) + 20*x[2] + 9
    return z

x0 = np.array([[1.1], [1], [1]])
A0 = np.diag([3.0, -200.0, 20.0])
xk = broyden(x0, A0)
