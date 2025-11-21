#include <iostream>
using namespace std;

int cstrLength(char* c) {
    char* ptr = c;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - c;
}

int main() {
    char str[100];
    cin.getline(str, 100);
    cout << cstrLength(str) << endl;
    return 0;
}
