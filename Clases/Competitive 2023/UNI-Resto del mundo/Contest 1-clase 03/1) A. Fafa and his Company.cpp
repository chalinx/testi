/*Por supuesto, aquí tienes la traducción del problema "A. Fafa and his Company" al español, 
siguiendo tus indicaciones:

**Descripción:**

Fafa es dueño de una empresa que trabaja en proyectos enormes. 
Hay 'n' empleados en la empresa de Fafa. Siempre que la empresa tiene un nuevo 
proyecto para comenzar a trabajar, Fafa tiene que dividir las tareas de este 
proyecto entre todos los empleados.

Fafa encuentra que hacer esto cada vez es muy agotador para él. 
Por lo tanto, decidió elegir a los mejores 'l' empleados en su empresa como
 líderes de equipo. Siempre que hay un nuevo proyecto, Fafa dividirá las tareas
  solo entre los líderes de equipo y cada líder de equipo será responsable de 
  algunos empleados en número positivo para darles las tareas. 
  Para que este proceso sea justo para los líderes de equipo, cada uno de ellos 
  debe ser responsable del mismo número de empleados. Además, cada empleado que 
  no sea líder de equipo debe estar bajo la responsabilidad de exactamente un 
  líder de equipo, y ningún líder de equipo es responsable de otro líder de equipo.

Dado el número de empleados 'n', encuentra en cuántas formas Fafa podría elegir el 
número de líderes de equipo 'l' de manera que sea posible dividir a los empleados entre
 ellos de manera uniforme.

**Entrada:**

La entrada consiste en una sola línea que contiene un entero positivo n (2 ≤ n ≤ 10^5)
 — el número de empleados en la empresa de Fafa.

**Salida:**

Imprime un solo entero que representa la respuesta al problema.

**Ejemplos:**

Entrada:
```
2
```

Salida:
```
1
```

Entrada:
```
10
```

Salida:
```
3
```

Nota:
En el segundo ejemplo, Fafa tiene 3 formas:

Elegir solo 1 empleado como líder de equipo con 9 empleados bajo su responsabilidad.
Elegir 2 empleados como líderes de equipo con 4 empleados bajo la responsabilidad de
 cada uno de ellos.
Elegir 5 empleados como líderes de equipo con 1 empleado bajo la responsabilidad de 
cada uno de ellos.*/

#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	int n,cont=0;
	int jef;
	cin>>n;

	for(int i =1;i<n;i++){
		jef=n-i;
		if(jef%i==0)cont++;
	}

	cout<<cont;





	return 0;
}

