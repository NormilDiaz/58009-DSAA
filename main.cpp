#include <iostream>

int main() {
    int numbers[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int newNumber = 11;

    numbers[10] = newNumber;

    for (int i = 0; i < 11; i++) {
        std::cout << numbers[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
