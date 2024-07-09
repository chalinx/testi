/*

Polycarp ha construido su propio servicio web. 
Siendo un servicio web moderno, incluye una función de inicio de sesión.
 Y eso siempre implica problemas de seguridad de contraseñas.

Polycarp decidió almacenar el hash de la contraseña, generado por el siguiente algoritmo:

Tomar la contraseña 'p', que consta de letras minúsculas del alfabeto latino, 
y mezclar las letras al azar para obtener 'p′' ('p′' aún puede ser igual a 'p').
Generar dos cadenas aleatorias, compuestas por letras minúsculas del alfabeto 
latino, "s1" y "s2" (cualquiera de estas cadenas puede estar vacía).
El hash resultante 'h' = "s1 + p′ + s2", donde la adición es la concatenación de cadenas.
Por ejemplo, si la contraseña 'p' = "abacaba". Luego 'p′' puede ser igual a "aabcaab". 
Las cadenas aleatorias "s1" = "zyx" y "s2" = "kjh". Entonces 'h' = "zyxaabcaabkjh".

Nótese que no se pueden eliminar ni agregar letras a 'p' para obtener 'p′', 
solo se puede cambiar el orden.
Ahora Polycarp te pide que lo ayudes a implementar el módulo de verificación de contraseñas.
Dada la contraseña 'p' y el hash 'h', verifica si 'h' puede ser el hash de la contraseña 'p'.
Tu programa debe responder para 't' casos de prueba independientes.

Entrada:
La primera línea contiene un entero 't' (1 ≤ t ≤ 100) — el número de casos de prueba.

La primera línea de cada caso de prueba contiene una cadena no vacía 'p', 
compuesta por letras minúsculas del alfabeto latino. La longitud de 'p' no excede 100.

La segunda línea de cada caso de prueba contiene una cadena no vacía 'h', 
compuesta por letras minúsculas del alfabeto latino. La longitud de 'h' no excede 100.

Salida:
Para cada caso de prueba, imprime la respuesta: "YES" si el hash 'h' dado podría obtenerse
 a partir de la contraseña 'p' dada, o "NO" en caso contrario.

Ejemplo:
Entrada:
5

'abacaba'
'zyxaabcaabkjh'

'onetwothree'
'threetwoone'

'one'
'zzonneyy'

'one'
'none'

'twenty'
'ten'

Salida:
YES
YES
NO
YES
NO

Nota:
-El primer caso de prueba se explica en el enunciado.
-En el segundo caso de prueba, tanto "s1" como "s2" están vacíos y 
'p′' = "threetwoone" es 'p' reorganizada.
-En el tercer caso de prueba, el hash no se puede obtener a partir de la contraseña.
-En el cuarto caso de prueba, "s1" = "n", "s2" está vacío y 'p′' = "one" es 'p' reorganizada (aunque se mantuvo igual).
-En el quinto caso de prueba, el hash no se puede obtener a partir de la contraseña.
*/

#include<bits/stdc++.h>

using namespace std;



int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	string w,r;
	cin>>n;
	int tamw;
while(n--){
	cin>>w>>r;
	sort(w.begin(),w.end());
	int tamw=w.size();
	int tamr=r.size();

	if(tamw>tamr){
		cout<<"NO";
	}

	else {

		bool band=true;
		for(int i =0;i+tamw<=tamr;i++){
			string aux(r.begin()+i,r.begin()+i+w.size());
			sort(aux.begin(),aux.end());
			if(aux.compare(w)==0){
				cout<<"YES";
				band=false;
				break;
			}
			aux.clear();
		}
			if(band)cout<<"NO";
		
	}

	cout<<endl;
}




	return 0;
}

