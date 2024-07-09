/*
## H. Happy Birthday UN

**Límite de tiempo por prueba:** 2 segundos  
**Límite de memoria por prueba:** 128 megabytes  
**Entrada:** Entrada estándar  
**Salida:** Salida estándar  

La Universidad Nacional de Colombia (UN) fue creada el 22 de septiembre de 1867, un domingo. En 2017, la UN celebró su sesquicentenario, es decir, su 150º cumpleaños. El sesquicentenario de la UN cayó en un viernes. Dado que es muy importante conocer todos los detalles correspondientes a la fecha de esta gran celebración para cada año, queremos saber qué día de la semana corresponde a un cumpleaños específico de la Universidad Nacional de Colombia.

Recuerda que un año suele tener 365 días, excepto algunos años llamados años bisiestos que tienen 366 días. Para determinar qué año es bisiesto, tenemos la siguiente regla: Cualquier año divisible exactamente por cuatro es bisiesto, excepto los años que son divisibles exactamente por 100, pero estos años centenarios son bisiestos si son divisibles exactamente por 400. Por ejemplo, los años 1700, 1800 y 1900 no fueron bisiestos, pero los años 1600 y 2000 sí lo fueron.

### Entrada
La entrada consiste en un número n (0 ≤ n ≤ 10000).

### Salida
Imprime una sola palabra correspondiente al día de la semana en el n-ésimo cumpleaños de la UN.

Imprime el día en el siguiente formato (sin comillas): 'Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday' o 'Sunday'.

### Ejemplos
**Entrada:**
```
0
```
**Salida:**
```
Sunday
```

**Entrada:**
```
150
```
**Salida:**
```
Friday
```
*/



#include<bits/stdc++.h>

using namespace std;



int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	int cont=0;
	for(int i =1868;i<=n+1867;i++){
		if((i%4==0&&i%100!=0)||(i%400==0))cont+=2;
		else cont++;
		
	}


	cont=cont%7;
	//‘Monday’, ‘Tuesday’, ‘Wednesday’, ‘Thursday’, 
	//‘Friday’, ‘Saturday’ o ‘Sunday’.

	switch(cont){
	case 0:cout<<"Sunday";break;
	case 1:cout<<"Monday";break;
	case 2:cout<<"Tuesday";break;
	case 3:cout<<"Wednesday";break;
	case 4:cout<<"Thursday";break;
	case 5:cout<<"Friday";break;
	case 6:cout<<"Saturday";break;
	}




	return 0;
}

