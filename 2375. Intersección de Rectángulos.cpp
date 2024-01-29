#include <iostream>

struct Rectangulo {
    int x1, y1, x2, y2;
};

Rectangulo a, b;

int mayor(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int menor(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int main() {
    std::cin >> a.x1 >> a.y1 >> a.x2 >> a.y2 >> b.x1 >> b.y1 >> b.x2 >> b.y2;

    if (menor(b.x1, b.x2) < mayor(a.x1, a.x2) && mayor(b.x1, b.x2) > menor(a.x1, a.x2) &&
        menor(b.y1, b.y2) < mayor(a.y1, a.y2) && mayor(b.y1, b.y2) > menor(a.y1, a.y2)) {
        std::cout << "SI" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
