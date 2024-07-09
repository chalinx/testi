/*Dado un arreglo de enteros ordenado llamado arr, y dos enteros k y x,
devuelve los k enteros más cercanos a x en el arreglo.
 El resultado también debe estar ordenado en orden ascendente.

Un entero 'a' está más cerca de 'x' que un entero 'b' si:
|a - x| < |b - x|, o
|a - x| == |b - x| y a < b
Restricciones:
1 <= k <= longitud de arr
1 <= longitud de arr <= 10^4
arr está ordenado en orden ascendente.
-10^4 <= arr[i], x <= 10^4
Input: arr = [1,2,3,4,5], k = 4, x = 3
 Output: [1,2,3,4]
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
/*
vector<int> findClosestElements(vector<int> arr, int k, int x) {
        

	int pivot=lower_bound(arr.begin(),arr.end(),x);
	


}*/

using namespace std;


int main(){

#ifndef ONLINE_JUDGE
freopen("D:/Competitiva/input.txt","r",stdin);
freopen("D:/Competitiva/output.txt","w",stdout);
#endif
fast

	vi arr={1,2,2,2,2,2,2,2,5};

	auto pivot=upper_bound(arr.begin(),arr.end(),2);
	cout<<*pivot;
	return 0;
}




