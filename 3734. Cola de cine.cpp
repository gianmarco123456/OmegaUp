#include <iostream>

int main() {
    int actual = 0, tiempo = 0, maximo = 0, llegada = 0;

    while (llegada != -1) {
        std::cin >> llegada;

        if (llegada > -1) {
            tiempo += llegada;
            actual += llegada;
        }

        if (actual > 0) {
            if (actual > maximo)
                maximo = actual;
            actual--;
        }
    }

    std::cout << tiempo << "\n" << maximo << std::endl;

    return 0;
}
