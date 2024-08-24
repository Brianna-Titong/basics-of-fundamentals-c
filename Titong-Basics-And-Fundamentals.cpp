#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    const int size2 = 10;

    int size3 = size + size2;

    int bag[size];
    int bag2[size2];
    int bag3[size3];

    cout << "Enter elements for array 1: ";
    for (int i = 0; i < size; i++) {
        cin >> bag[i];
    }

    cout << "Enter elements for array 2: ";
    for (int i = 0; i < size2; i++) {
        cin >> bag2[i];
    }

    for (int i = 0; i < size; i++) {
        bag3[i] = bag[i];
    }

    for (int i = 0; i < size2; i++) {
        bag3[size + i] = bag2[i];
    }

    for (int i = 0; i < size3 - 1; i++) {
        for (int j = 0; j < size3 - i - 1; j++) {
            if (bag3[j] < bag3[j + 1]) {
                int temp = bag3[j];
                bag3[j] = bag3[j + 1];
                bag3[j + 1] = temp;
            }
        }
    }

    cout << "Combined array: ";
    for (int i = 0; i < size3; i++) {
        cout << bag3[i] << " ";
    }

    return 0;
}