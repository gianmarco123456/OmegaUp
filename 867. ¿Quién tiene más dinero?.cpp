#include <iostream>

int main() {
    int i, juan = 0, pedro = 0, valor;

    for (i = 1; i <= 3; i++) {
        std::cin >> valor;
        juan += valor;
    }

    for (i = 1; i <= 2; i++) {
        std::cin >> valor;
        pedro += valor;
    }

    if (juan > pedro)
        std::cout << "Juan" << std::endl;
    else
        std::cout << "Pedro" << std::endl;

    return 0;
}
