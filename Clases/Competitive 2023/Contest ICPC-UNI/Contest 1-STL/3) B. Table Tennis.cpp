/*
## B. Table Tennis


**Límite de tiempo por prueba:** 2 segundos  
**Límite de memoria por prueba:** 256 megabytes  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

N personas están en fila para jugar al tenis de mesa. Al principio, los primeros dos jugadores en la fila juegan una partida. Luego, el perdedor va al final de la fila, y el ganador juega con la siguiente persona en la fila, y así sucesivamente. Juegan hasta que alguien gane k partidas seguidas. Este jugador se convierte en el ganador.

Para cada uno de los participantes, conoces su habilidad para jugar al tenis de mesa, y para todos los jugadores, estos valores son diferentes. En una partida, el jugador con mayor habilidad siempre gana. Determina quién será el ganador.

### Entrada

La primera línea contiene dos enteros: n y k (2 ≤ n ≤ 500, 2 ≤ k ≤ 10^12) — el número de personas y el número de victorias.

La segunda línea contiene n enteros a1, a2, ..., an (1 ≤ ai ≤ n) — habilidades de los jugadores. Se garantiza que esta línea contiene una permutación válida, es decir, todos los ai son distintos.

### Salida

Imprime un solo entero — la habilidad del ganador.

### Ejemplos

**Entrada:**
```
2 2
1 2
```

**Salida:**
```
2
```

**Entrada:**
```
4 2
3 1 2 4
```

**Salida:**
```
3
```

**Entrada:**
```
6 2
6 5 3 1 2 4
```

**Salida:**
```
6
```

**Entrada:**
```
2 10000000000
2 1
```

**Salida:**
```
2
```

**Nota**

Juegos en el segundo ejemplo:

1. El jugador 3 juega con el jugador 1. El jugador 3 gana. El jugador 1 va al final de la fila.

2. El jugador 3 juega con el jugador 2. El jugador 3 gana. Él gana dos veces seguidas. Se convierte en el ganador.

*/

#include<bits/stdc++.h>
#define ll long long int

#define all(a) a.begin(),a.end()
#define fast ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
#define vi vector<int>
#define vll vector<ll>
#define vct vector
#define pb push_back
#define er erase
#define fi(i,a,n,w) for(int i =a;i<n;i+=w)
#define fl(i,a,n,w) for(ll i=a;i<n;i+=w)
#define fr first
#define se second
#define pll pair<ll,ll>
#define pii pair<int,int>



using namespace std;


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	
	int n;
	ll k;
	cin>>n>>k;
	int max=0;
	vi r(n);
	fi(i,0,n,1)
		cin>>r[i];
	
	int cont=0;
	int max2=r[0];

	while(max<500){
		if(r[0]>r[1]){
			r.pb(r[1]);
			r.erase(r.begin()+1);
			cont++;
		}
		else{
			r.pb(r[0]);
			r.erase(r.begin());
			cont=1;
		}
		if(cont==k){
			cout<<r[0];
			return 0;
		}

		max++;

	}

	
	cout<<r[0];


	return 0;
}



