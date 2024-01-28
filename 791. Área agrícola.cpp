#include <iostream>

int main() {
    long long int i, n, alt, anc;
    long long int suma = 0;

    std::cin >> n;

    for (i = 1; i <= n; i++) {
        std::cin >> alt >> anc;
        suma += alt * anc;
    }

    std::cout << suma;

    return 0;
}
