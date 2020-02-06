#include <iostream>
#include <vector>

int main() {
    int Vector_size, AbsNum;

    std::cin >> Vector_size;
    std::cin >> AbsNum;

    std::vector  <int> V(Vector_size);

    for (int i = 0; i < AbsNum; i++) {
        int s;
        std::cin >> s;

        V[s] = 1;
    }

    for (int i = 0; i < Vector_size; i++) {
        if (V[i] != 1) {
            std::cout << i << ' ';
        }
    }
    std::cout << std::endl;

    return 0;
}