import numpy as np
import matplotlib.pyplot as plt

horas = [8, 10, 12, 14, 16, 18]
temperaturas = [14, 16, 18, 20, 18, 15]

def polinomioLagrane(x, puntosx, puntosy):
    result = 0
    for i in range(len(puntosx)):
        term = puntosy[i]
        for j in range(len(puntosx)):
            if i != j:
                term *= (x - puntosx[j]) / (puntosx[i] - puntosx[j])
        result += term
    return result

valorx = np.linspace(0, 24, 100)
valory = [polinomioLagrane(x, horas, temperaturas) for x in valorx]

# Graficar
plt.plot(valorx, valory, label="Interpolación")
plt.xlabel("Hora")
plt.ylabel("Temperatura")
plt.legend()
plt.show()
