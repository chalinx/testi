/*Estás jugando un juego de solitario con tres montones de piedras 
de los tamaños a, b, y , c , respectivamente. En cada turno, elige 
dos pilas diferentes que no estén vacías , toma una piedra de cada una 
y agrega 1un punto a su puntaje. El juego se detiene cuando hay menos 
de dos pilas no vacías 
(lo que significa que no hay más movimientos disponibles).
Dados tres números enteros a, b, y c, devuelva la puntuación máxima que puede obtener.*/


#include<bits/stdc++.h>
using namespace std;

//
int maximumScore(int a, int b, int c) {
	

}
//editorial
/*int maxScore(int a, int b, int c) {
    int piles[3] = {a, b, c};
    std::sort(piles, piles + 3); // Ordenamos los montones en orden ascendente

    int score = 0;

    while (piles[1] > 0 && piles[2] > 0) {
        piles[2]--; 
        piles[1]--; 
        score++;    
        std::sort(piles, piles + 3); 
    }

    return score;
}*/

int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

int a,b,c;
cin>>a>>b>>c;

cout<<maximumScore(a,b,c);


	return 0;
}

