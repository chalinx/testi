/*
## Room Allocation

**Límite de tiempo por prueba:** 1 segundo  
**Límite de memoria por prueba:** 512 megabytes  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

Hay un gran hotel, y n clientes llegarán pronto. Cada cliente quiere tener una sola habitación.

Conoces la fecha de llegada y salida de cada cliente. Dos clientes pueden quedarse en la misma habitación si la fecha de salida del primer cliente es anterior a la fecha de llegada del segundo cliente.

¿Cuál es el número mínimo de habitaciones que se necesitan para alojar a todos los clientes? Y ¿cómo se pueden asignar las habitaciones?

### Entrada

La primera línea contiene un entero n (1 ≤ n ≤ 2·10^5) que representa el número de clientes.

Luego, hay n líneas, cada una de las cuales describe a un cliente. Cada línea contiene dos enteros a y b (1 ≤ a ≤ b ≤ 10^9) que representan el día de llegada y el día de salida del cliente.

### Salida

Primero, imprime un entero k que representa el número mínimo de habitaciones requeridas.

Después, imprime una línea que contenga el número de habitación de cada cliente en el mismo orden que en la entrada. Las habitaciones se numeran 1, 2, ..., k. Puedes imprimir cualquier solución válida.

### Ejemplo

**Entrada:**
```
3
1 2
2 4
4 4
```

**Salida:**
```
2
1 2 1
```

**Nota**

En el ejemplo, hay tres clientes. El primer cliente llega el día 1 y sale el día 2, el segundo cliente llega el día 2 y sale el día 4, y el tercer cliente llega y sale el día 4.

Para acomodar a todos los clientes, necesitas al menos dos habitaciones. Una posible asignación de habitaciones es la siguiente:

- El primer cliente se aloja en la habitación 1.
- El segundo cliente se aloja en la habitación 2.
- El tercer cliente se aloja en la habitación 1.

Esta asignación cumple con la restricción de que dos clientes no comparten la misma habitación en ningún momento y utiliza el número mínimo de habitaciones.
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
#define mp make_pair



using namespace std;


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast
	
	int n; cin>>n;
	ll a,b;
	multiset<pair<ll,ll>> r;

	while(n--){
		cin>>a>>b;
		r.insert(make_pair(a,b));
	}

	for(auto q:r)
		cout<<q.first<<" "<<q.second<<endl;





	




	return 0;
}



