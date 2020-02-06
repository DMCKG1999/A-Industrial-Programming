#include <iostream>
#include <vector>

int main() {
    int M, n;

    std::cin >> M;
    std::cin >> n;

    std::vector  <int> V(M);

    for (int i = 0; i < n; i++) {
        int s;
        std::cin >> s;

        V[s] = 1;
    }

    for (int i = 0; i < M; i++) {
        if (V[i] != 1) {
            std::cout << i << ' ';
        }
    }
    std::cout << std::endl;

    return 0;
}