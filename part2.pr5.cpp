#include <iostream>
using namespace std;

void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int* ptr = arr; ptr < arr + n; ptr++) {
        cin >> *ptr;
    }

    reverseArray(arr, n);

    for (int* ptr = arr; ptr < arr + n; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;

    return 0;
}
