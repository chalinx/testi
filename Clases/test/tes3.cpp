#include <iostream>
#include <string>
#include <regex>
#include <vector>
#include <locale>

using namespace std;


int main() {
    locale::global(std::locale(""));

    wstring frase = L"el rápiwdo zorro marrón saltó sobre un perro perezoso";
    wregex patron(L"[\\wáéíóúÁÉÍÓÚñÑüÜ]+");

    wsregex_token_iterator iter(frase.begin(), frase.end(), patron);
    wsregex_token_iterator end;

    vector<wstring> lista_palabras;

    while (iter!=end) lista_palabras.push_back(*iter++);
    
    cout<<"[";
    for (auto palabra:lista_palabras)wcout<<palabra<<", "[palabra==*prev(lista_palabras.end())];
    
        cout<<"]";
    return 0;
}
