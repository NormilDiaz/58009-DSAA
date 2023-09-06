#include <iostream>

using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int index = 1;
    int valueToInsert = 11;

    for (int i = 10; i > index; i--) {
        numbers[i] = numbers[i - 1];
    }

    numbers[index] = valueToInsert;

    for (int i = 0; i < 11; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}
