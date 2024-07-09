
/*
Polycarp está trabajando en un nuevo proyecto llamado "Polychat". 
Siguiendo las tendencias modernas en TI, decidió que este proyecto 
también debe incluir un chat. Para lograr este objetivo, Polycarp 
ha pasado varias horas frente a su computadora portátil e implementó
 un servidor de chat que puede procesar tres tipos de comandos:

Agregar a una persona al chat (comando 'Add').
Eliminar a una persona del chat (comando 'Remove').
Enviar un mensaje de una persona a todas las personas que están actualmente en el chat,
 incluida la que envía el mensaje (comando 'Send').
Ahora, Polycarp quiere averiguar la cantidad de tráfico saliente que el servidor producirá
 al procesar un conjunto particular de comandos.

Polycarp sabe que el servidor de chat no envía tráfico para los comandos 'Add' y 'Remove'. 
Cuando se procesa el comando 'Send', el servidor envía 'l' bytes a cada participante del chat,
 donde 'l' es la longitud del mensaje.

Como Polycarp no tiene tiempo, está pidiendo tu ayuda para resolver este problema.

Entrada:
El archivo de entrada contendrá no más de 100 comandos, cada uno en su propia línea.
 Ninguna línea excederá 100 caracteres. Los formatos de los comandos serán los siguientes:

+<nombre> para el comando 'Add'.
-<nombre> para el comando 'Remove'.
<nombre_emisor>:<texto_mensaje> para el comando 'Send'.

<nombre> y <nombre_emisor> son secuencias no vacías de letras latinas y dígitos.
<texto_mensaje> puede contener letras, dígitos y espacios, pero no puede comenzar ni 
terminar con un espacio. <texto_mensaje> puede ser una línea vacía.

Se garantiza que los datos de entrada son correctos, es decir, no habrá un comando 'Add' 
si la persona con dicho nombre ya está en el chat, no habrá un comando 'Remove' si no hay 
una persona con dicho nombre en el chat, etc.

Todos los nombres distinguen entre mayúsculas y minúsculas.

Salida:
Imprime un solo número: la respuesta al problema.

Ejemplos:
Entrada:
+Mike
Mike:hello
+Kate
+Dmitry
-Dmitry
Kate:hi
-Kate

Salida:
9

Entrada:
+Mike
-Mike
+Mike
Mike:Hi I am here
-Mike
+Kate
-Kate

Salida:
14


*/

#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

string q;
vector<string> r;

while(getline(cin,q)){
r.push_back(q);
}
int cont=0;
int pal=0,tol=0;
for(int i =0;i<r.size();i++){
	for(int j =0;j<r[i].size();j++){
		if(r[i][j]=='+')cont++;
		if(r[i][j]=='-')cont--;
		if(r[i][j]==':'){
			pal=r[i].size()-1-j;
			tol+=cont*pal;
			pal=0;
		}

	}
}

cout<<tol<<endl;

	return 0;
}

