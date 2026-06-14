#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target, int &count) {
    count = 0;
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
            if (index == -1) {
                index = i; // store first occurrence
            }
        }
    }
    return index;
}

int main() {
    int arr[] = {3, 4, 6, 7, 2, 3, 2, 4, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;
    int count = 0;

    int result = linearSearch(arr, size, target, count);

    if (result != -1) {
        cout << "Element found at index = " << result << endl;
        cout << "Element appears " << count << " times" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
