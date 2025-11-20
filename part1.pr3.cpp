#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"enter first value : ";
    cin>>a;
    cout<<"enter second value : ";
    cin>>b;
    int *ptrA=&a;
    int *ptrB=&b;
    cout<<*ptrA<<endl;
    cout<<*ptrB<<endl;


    return 0;
}
