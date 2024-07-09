#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> myUnorderedSet;

    myUnorderedSet.insert(10);
    myUnorderedSet.insert(20);
    myUnorderedSet.insert(30);  // Intentar insertar un elemento duplicado

    std::cout << "Tamaño del conjunto no ordenado: " << myUnorderedSet.size() << std::endl;

    for (int num : myUnorderedSet) {
        std::cout << num << " ";
    }

    return 0;
}
