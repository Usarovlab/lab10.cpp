#include <iostream>
using namespace std;

int main() {
    int x;        
    int *p = &x;   

    cout << "Enter a value: ";
    cin >> x;

    cout << "Value entered: " << x << endl;
    cout << "Value through pointer: " << *p << endl;

    return 0;
}
