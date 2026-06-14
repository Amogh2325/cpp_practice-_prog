#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& a) {
    for (size_t i = 1; i < a.size(); ++i) {
        int key = a[i];
        size_t j = i;
        while (j > 0 && a[j - 1] > key) {
            a[j] = a[j - 1];
            --j;
        }
        a[j] = key;
    }
}

int main() {
    int n;
    std::cin >> n;
    if (n <= 0) return 0;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }
    insertionSort(a);
    for (int x : a) {
        std::cout << x << ' ';
    }
    std::cout << '\n';
    return 0;
}
