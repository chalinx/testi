/*
La Plaza del Teatro en la ciudad capital de Berland 
tiene una forma rectangular con dimensiones n×m metros. 
En ocasión del aniversario de la ciudad, se tomó la decisión 
de pavimentar la Plaza con adoquines cuadrados de granito. 
Cada adoquín tiene un tamaño de a×a.

¿Cuál es la cantidad mínima de adoquines necesarios para pavimentar la Plaza?
 Se permite cubrir una superficie mayor que la Plaza del Teatro, pero la Plaza 
 debe estar cubierta. No está permitido romper los adoquines. Los lados de los 
 adoquines deben ser paralelos a los lados de la Plaza.

Entrada
La entrada contiene tres números enteros positivos en la primera línea: 
n, m y a (1≤n,m,a≤10^9).

Salida
Escribe el número necesario de adoquines.

Ejemplo
Entrada:
6 6 4

Salida:
4
*/

#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

long long a,b,c;
cin>>a>>b>>c;
if(a%c==0)a=a/c;
else a=(a/c)+1;

if(b%c==0)b=b/c;
else b=(b/c)+1;

cout<<a*b;


	return 0;
}

