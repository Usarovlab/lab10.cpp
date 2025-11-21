#include <iostream>
using namespace std;
int main() {
    int a[10], *ptrA;
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 100;
    }
    ptrA=a;
    for (int i=0; i<10; i++)
        cout<<"Adress: "<<ptrA+i<<"  Value: "<<*(ptrA+i)<< endl;

    return 0;

}
