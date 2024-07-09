/*Por supuesto, aquí tienes la traducción del problema "A. 
Crazy Computer" al español, siguiendo tus indicaciones:

**Descripción:**

'ZS' el Programador está programando en una computadora loca. 
Si no escribes una palabra durante 'c' segundos consecutivos, 
¡todo lo que escribiste desaparece!

Más formalmente, si escribiste una palabra en el segundo 'a' y 
luego la siguiente palabra en el segundo 'b', entonces si 'b' - 'a' ≤ 'c', 
solo la nueva palabra se agrega a las demás palabras en la pantalla. Si 'b' - 'a' > 'c', 
entonces todo en la pantalla desaparece y después de eso aparece en la pantalla la 
palabra que has escrito.

Por ejemplo, si c = 5 y escribiste palabras en los segundos 
1, 3, 8, 14, 19, 20, entonces en el segundo 8 habrá 3 palabras en la pantalla.
Después de eso, todo desaparece en el segundo 13 porque no se escribió nada.
En los segundos 14 y 19 se escriben otras dos palabras, y finalmente, en el segundo 20,
se escribe una palabra más, y en total quedan 3 palabras en la pantalla.

Se te dan los momentos en que 'ZS' el Programador escribió las palabras. 
Determina cuántas palabras quedan en la pantalla después de que haya terminado
 de escribir todo.

**Entrada:**

La primera línea contiene dos enteros 'n' y 'c' (1 ≤ n ≤ 100,000, 1 ≤ c ≤ 10^9) — el
 número de palabras que 'ZS' el Programador escribió y el retraso de la computadora 
 loca respectivamente.

La siguiente línea contiene 'n' enteros t1, t2, ..., tn (1 ≤ t1 < t2 < ... < tn ≤ 10^9),
donde 'ti' denota el segundo en el que ZS el Programador escribió la i-ésima palabra.

**Salida:**

Imprime un solo entero positivo, el número de palabras que quedan en la pantalla
 después de que se hayan escrito todas las 'n' palabras, en otras palabras, en el 
 segundo 'tn'.

**Ejemplos:**

Entrada:
```
6 5
1 3 8 14 19 20
```

Salida:
```
3
```

Entrada:
```
6 1
1 3 5 7 9 10
```

Salida:
```
2
```

Nota:
El primer ejemplo ya se explica en el enunciado del problema.

Para el segundo ejemplo, después de escribir la primera palabra en el segundo 1, 
esta desaparece porque la siguiente palabra se escribe en el segundo 3 y 3 - 1 > 1. 
De manera similar, solo quedará 1 palabra en el segundo 9. Luego, se escribe una palabra 
en el segundo 10, por lo que habrá dos palabras en la pantalla, ya que la palabra anterior
 no desaparecerá porque 10 - 9 ≤ 1.*/

#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	int n,c,ti;
	cin>>n>>c;
	cin>>ti;
	int aux=ti,cont=1;
	for(int i =1;i<=n-1;i++){
		cin>>ti;
		aux=ti-aux;
		if(aux<=c){
			cont++;
			aux=ti;
		}
		else{
			aux=ti;
			cont=1;
		}
	}
cout<<cont;


	return 0;
}

