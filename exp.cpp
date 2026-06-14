#include <iostream>
using namespace std;

int firstNonRepeating(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool isRepeating = false;

        // Check if arr[i] repeats anywhere else
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isRepeating = true;
                break;
            }
        }

        if (!isRepeating) {
            return arr[i]; // Found the first non-repeating element
        }
    }
    return -1; // No non-repeating element found
}

int main() {
    int arr[] = {4, 5, 1, 2, 1, 4, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = firstNonRepeating(arr, n);

    if (result != -1)
        cout << "First non-repeating element: " << result << endl;
    else
        cout << "No non-repeating element found." << endl;

    return 0;
}
