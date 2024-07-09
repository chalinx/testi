/*Por supuesto, aquí tienes la traducción del problema "A.
 Splitting in Teams" al español, siguiendo tus indicaciones:

**Descripción:**

Había 'n' grupos de estudiantes que vinieron a escribir un concurso de entrenamiento. 
Un grupo es una persona que puede escribir el concurso con cualquier otra persona, o 
dos personas que quieren escribir el concurso en el mismo equipo.

El entrenador decidió formar equipos de exactamente tres personas para este entrenamiento.
 Determina el número máximo de equipos de tres personas que puede formar. Es posible que
  no pueda usar todos los grupos para formar equipos. Para grupos de dos personas, ambas
   deben escribir el concurso o ambas no deben hacerlo. Si dos estudiantes de un grupo de
    dos personas escriben el concurso, deben estar en el mismo equipo.

**Entrada:**

La primera línea contiene un solo entero 'n' (2 ≤ n ≤ 2·10^5) — el número de grupos.

La segunda línea contiene una secuencia de enteros a1, a2, ..., an (1 ≤ ai ≤ 2), 
donde ai es el número de personas en el grupo 'i'.

**Salida:**

Imprime el número máximo de equipos de tres personas que el entrenador puede formar.

**Ejemplos:**

Entrada:
```
4
1 1 2 1
```

Salida:
```
1
```

Entrada:
```
2
2 2
```

Salida:
```
0
```

Entrada:
```
7
2 2 2 1 1 1 1
```

Salida:
```
3
```

Entrada:
```
3
1 1 1
```

Salida:
```
1
```

Nota:
En el primer ejemplo, el entrenador puede formar un equipo. Por ejemplo, puede tomar
 estudiantes de los grupos primero, segundo y cuarto.

En el segundo ejemplo, no puede formar ni un solo equipo.

En el tercer ejemplo, el entrenador puede formar tres equipos. Por ejemplo, 
puede hacerlo de la siguiente manera:

- El primer grupo (de dos personas) y el séptimo grupo (de una persona).
- El segundo grupo (de dos personas) y el sexto grupo (de una persona).
- El tercer grupo (de dos personas) y el cuarto grupo (de una persona).*/

#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
    int n,w;
    cin>>n;
    int cont=0;
    priority_queue<int> r;
    for(int i =0;i<n;i++){
        cin>>w;
        r.push(w);
    }

    if(r.top()==2){
        while(r.top()%2==0&&!r.empty()){
            cont++;
            r.pop();
        }
    }
    else{
        cout<<n/3;return 0 ;
    }


    if(n-cont>=cont)cout<<cont+(r.size()-cont)/3;
    else cout<<n-cont;
    return 0;
}

