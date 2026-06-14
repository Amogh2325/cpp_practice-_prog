#include <iostream>
using namespace std;

void findLastTwoOccurrences(int arr[], int size, int target) {
    int lastIndex = -1;
    int secondLastIndex = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            secondLastIndex = lastIndex; // shift previous last
            lastIndex = i;               // update new last
        }
    }

    if (lastIndex != -1 && secondLastIndex != -1) {
        cout << "Last occurrence at index = " << lastIndex << endl;
        cout << "Second last occurrence at index = " << secondLastIndex << endl;
    } else if (lastIndex != -1) {
        cout << "Only one occurrence at index = " << lastIndex << endl;
    } else {
        cout << "Element not found" << endl;
    }
}

int main() {
    int arr[] = {3, 4, 6, 7, 2, 3, 2, 4, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    findLastTwoOccurrences(arr, size, target);

    return 0;
}
