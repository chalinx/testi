class Aleatorio:
    def __init__(self, semilla):
        self.semilla = semilla  

    def siguiente(self):
        self.semilla = (16807 * self.semilla) % 2147483647 
        return self.semilla  

    def elegir(self, limite):
        return self.siguiente() % limite  



class Gramatica:
    def __init__(self, semilla):
        self.aleatorio = Aleatorio(semilla) 
        self.reglas = {}  

    def regla(self, izquierda, derecha):

        if izquierda not in self.reglas:
            self.reglas[izquierda] = [] 
        self.reglas[izquierda].append(Regla(izquierda, derecha)) 

    def generar(self):
        if 'inicio' in self.reglas:
            return self.generando(['inicio'])  
        else:
            raise Exception('No hay regla para "inicio"') 

    def generando(self, strings):
        resultado = [] 
        for s in strings:
            if s not in self.reglas: 
                resultado.append(s)  
            else:
                resultado.extend(self.generando(self.seleccionar(s)))  
        return resultado  

    def seleccionar(self, left):
        reglas = self.reglas[left]  
        total = sum(regla.cont for regla in reglas) 
        indice = self.aleatorio.elegir(total) 
        acumulado = 0  
        for regla in reglas:  
            acumulado += regla.cont  
            if indice < acumulado:  
                elegido = regla  
                break
        for regla in reglas:  
            regla.cont += 1
        elegido.cont = 1  
        return elegido.right  


if __name__ == "__main__":
    gram = Gramatica(313)  
    gram.regla('inicio', ['historia']) 
    gram.regla('historia', ['frase'])
    gram.regla('historia', ['frase','y','historia'])
    gram.regla('historia', ['frase','sino','historia'])
    gram.regla('frase', ['articulo', 'sustantivo', 'verbo', 'articulo', 'sustantivo'])
    gram.regla('articulo', ['el'])
    gram.regla('articulo', ['la'])
    gram.regla('articulo', ['al'])
    gram.regla('sustantivo', ['gato'])
    gram.regla('sustantivo', ['niño'])
    gram.regla('sustantivo', ['perro'])
    gram.regla('sustantivo', ['niña'])
    gram.regla('verbo', ['perseguía'])
    gram.regla('verbo', ['besaba'])

    historia_generada = gram.generar()  
    print(*historia_generada)  
