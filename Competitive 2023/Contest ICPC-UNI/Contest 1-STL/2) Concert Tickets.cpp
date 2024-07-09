/*
## Concert Tickets

**Límite de tiempo por prueba:** 1.00 segundos  
**Límite de memoria por prueba:** 512 MB  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

Hay n boletos para un concierto disponibles, cada uno con un precio determinado. Luego, llegan m clientes, uno tras otro.

Cada cliente anuncia el precio máximo que está dispuesto a pagar por un boleto y, después de eso, obtendrá un boleto con el precio más cercano posible que no exceda el precio máximo.

### Entrada

La primera línea de entrada contiene dos enteros n y m: el número de boletos y el número de clientes.

La siguiente línea contiene n enteros h1, h2, …, hn: el precio de cada boleto.

La última línea contiene m enteros t1, t2, …, tm: el precio máximo que cada cliente está dispuesto a pagar, en el orden en que llegan.

### Salida

Imprime, para cada cliente, el precio que pagará por su boleto. Después de esto, el boleto no se puede comprar nuevamente.

Si un cliente no puede obtener ningún boleto, imprime -1.

### Ejemplo

**Entrada:**
```
5 3
5 3 7 8 5
4 8 3
```

**Salida:**
```
3
8
-1
```

### Nota

En el ejemplo, hay 5 boletos disponibles con los siguientes precios: [5, 3, 7, 8, 5].

El primer cliente está dispuesto a pagar como máximo 4, por lo que obtiene el boleto más barato disponible, que tiene un precio de 3.

El segundo cliente está dispuesto a pagar como máximo 8, por lo que obtiene el boleto más caro disponible, que tiene un precio de 8.

El tercer cliente está dispuesto a pagar como máximo 3, pero no hay boletos disponibles a ese precio, por lo que obtiene -1.

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
#define is insert
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
	
	int n,m;
	cin>>n>>m;
	multiset<int> r;
	int w,q;
	fi(i,0,n,1){
		cin>>w;
		r.insert(w);
	}

	fi(i,0,m,1){

		cin>>q;
		multiset<int>::iterator it=r.upper_bound(q);

		if(it!=r.begin()){
			--it;
			cout<<*it;
			r.erase(it);
		}
		else
			cout<<-1;
		
		cout<<endl;
	}

	return 0;
}
