#include <iostream>
using namespace std;

int findLargestElement(const int* arr, int size) {
    const int* ptr = arr;
    int largest = *ptr;

    for (; ptr < arr + size; ptr++) {
        if (*ptr > largest) {
            largest = *ptr;
        }
    }
    return largest;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int* ptr = arr; ptr < arr + n; ptr++) {
        cin >> *ptr;
    }

    cout << findLargestElement(arr, n) << endl;

    return 0;
}
