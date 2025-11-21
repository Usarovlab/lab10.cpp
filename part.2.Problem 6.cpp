#include <iostream>
using namespace std;

void findMinMax(const int* arr, int size, int& minVal, int& maxVal) {
    minVal = *arr;
    maxVal = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < minVal) minVal = *(arr + i);
        if (*(arr + i) > maxVal) maxVal = *(arr + i);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minVal, maxVal;
    findMinMax(arr, n, minVal, maxVal);

    cout << "Min: " << minVal << ", Max: " << maxVal << endl;

    return 0;
}
