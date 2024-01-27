#include <iostream>

int main() {
    int n, edad, i, mayor = 0;

    std::cin >> n;

    for (i = 1; i <= n; i++) {
        std::cin >> edad;
        if (edad > mayor) mayor = edad;
    }

    std::cout << mayor << std::endl;

    return 0;
}
