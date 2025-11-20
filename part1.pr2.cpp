#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int *ptr = &a;
    *ptr = *ptr*5;
    cout << *ptr <<endl;

    }
