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

// Función para calcular la suma de elementos en un vector.
int sum(const vector<int>& v) {
    int suma = 0;
    for (int altura : v) {
        suma += altura;
    }
    return suma;
}

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    vector<int> h1(n1), h2(n2), h3(n3);

    // Lectura de las alturas de cada pila y calculo de sumas inversas
    // para simular el quitar elementos desde el tope.
    for (int i = n1 - 1; i >= 0; --i) cin >> h1[i];
    for (int i = n2 - 1; i >= 0; --i) cin >> h2[i];
    for (int i = n3 - 1; i >= 0; --i) cin >> h3[i];

    int suma1 = sum(h1), suma2 = sum(h2), suma3 = sum(h3);

    // Eliminamos cilindros del tope hasta que las sumas sean iguales.
    while (!(suma1 == suma2 && suma2 == suma3)) {
        if (suma1 >= suma2 && suma1 >= suma3) {
            suma1 -= h1.back();
            h1.pop_back();
        } else if (suma2 >= suma1 && suma2 >= suma3) {
            suma2 -= h2.back();
            h2.pop_back();
        } else {
            suma3 -= h3.back();
            h3.pop_back();
        }
    }

    // La suma1 (o suma2 o suma3, ya que todas son iguales) es la respuesta.
    cout << suma1 << endl;

    return 0;
}
