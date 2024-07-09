/*
## A. Pangram


**Límite de tiempo por prueba:** 2 segundos  
**Límite de memoria por prueba:** 256 megabytes  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

Una palabra o una oración en algún idioma se llama pangrama si todas las letras del alfabeto de ese idioma aparecen al menos una vez en ella. Los pangramas se utilizan a menudo para mostrar fuentes en impresión o probar los dispositivos de salida.

Se te da una cadena que consiste en letras latinas en mayúsculas y minúsculas. Verifica si esta cadena es un pangrama. Decimos que la cadena contiene una letra del alfabeto latino si esta letra aparece en la cadena en mayúscula o minúscula.

### Entrada

La primera línea contiene un solo entero n (1 ≤ n ≤ 100) — el número de caracteres en la cadena.

La segunda línea contiene la cadena. La cadena consiste solo en letras latinas en mayúsculas y minúsculas.

### Salida

Imprime "YES" si la cadena es un pangrama y "NO" en caso contrario.

### Ejemplos

**Entrada:**
```
12
toosmallword
```

**Salida:**
```
NO
```

**Entrada:**
```
35
TheQuickBrownFoxJumpsOverTheLazyDog
```

**Salida:**
```
YES
```

**Nota**

En el primer ejemplo, la cadena "toosmallword" no es un pangrama porque no contiene todas las letras del alfabeto.

En el segundo ejemplo, la cadena "TheQuickBrownFoxJumpsOverTheLazyDog" es un pangrama porque contiene todas las letras del alfabeto al menos una vez.

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
	int w;
	cin>>w;
	string r="abcdefghijklmnopqrstuvwxyz";
	string q;
	cin>>q;

	if(r.size()>q.size())cout<<"NO";
	else{
		bool band;
		fi(i,0,r.size(),1){
			band=false;
			fi(j,0,q.size()&&!band,1){
				if(r[i]==tolower(q[j]))
					band=true;
			}
			if(!band){
				cout<<"NO";return 0;
			}
		}
		cout<<"YES";
	}





	return 0;
}



