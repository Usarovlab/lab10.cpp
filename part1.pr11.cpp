#include <iostream>
using namespace std;

int main() {
    int i, j, sum = 0;

    int *p1 = &i;
    int *p2 = &j;
    int *p3 = &sum;


    do {
        cout << "Enter first integer (<100): ";
        cin >> *p1;

        cout << "Enter second integer (<100): ";
        cin >> *p2;

        if (*p1 >= *p2)
            cout << "First number must be less than second! Try again.\n";

        if (*p1 >= 100 || *p2 >= 100)
            cout << "Numbers must be less than 100! Try again.\n";

    } while (*p1 >= *p2 || *p1 >= 100 || *p2 >= 100);


    for (int k = *p1 + 1; k < *p2; k++) {
        *p3 += k;
    }

    cout << "Sum between them = " << *p3 << endl;

    return 0;
}
