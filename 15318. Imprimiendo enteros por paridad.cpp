#include <iostream>

int main() {
    int N, P;

    std::cin >> N;

    int arreglo[N];

    for (int i = 0; i < N; ++i) {
        std::cin >> arreglo[i];
    }

    std::cin >> P;

    if (P == 0) {
        for (int i = 0; i < N; ++i) {
            if (arreglo[i] % 2 == 0) {
                std::cout << arreglo[i] << " ";
            }
        }
    } else if (P == 1) {
        for (int i = 0; i < N; ++i) {
            if (arreglo[i] % 2 != 0) {
                std::cout << arreglo[i] << " ";
            }
        }
    } else {
        return 1; 
    }

    return 0;
}
