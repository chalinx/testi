#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 4, 4, 4, 5, 6};

    // Encuentra el rango de elementos '4'
    auto lower = std::lower_bound(v.begin(), v.end(), 4);
    auto upper = std::upper_bound(v.begin(), v.end(), 4);

    if (lower != v.end()) {
        std::cout << "Lower bound para 4: " << (lower - v.begin()) << std::endl;
        std::cout << "Upper bound para 4: " << (upper - v.begin()) << std::endl;
        std::cout << "Número de veces que aparece 4: " << (upper - lower) << std::endl;
    } else {
        std::cout << "El elemento 4 no se encuentra en el vector." << std::endl;
    }

    return 0;
}
