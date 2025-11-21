#include <iostream>
using namespace std;
#define val 33.3
#define number 50
int a;
int& fun(){
    return a;
}
int foo(){
    return a;
}
int main() {
    int n1=9,n2=11, *ptr_1= nullptr, *ptr_2= nullptr, k=0;
    double t;
    ptr_1=&n2;
    ptr_2=&n1;
    *ptr_2 -= 1;
    *ptr_1 += 1;
    t=val-1;
    //k=val;

   fun()=number; // a = number;
    cout<< a <<"\t"<<*ptr_1<<"\t"<<t<<"\t"<<*ptr_2<<endl;
}
