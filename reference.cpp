#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    cout<<&a<<endl;
    int *p;
    p = &a;
    cout<<p<<endl;
    cout<<*p<<endl;
    *p = 11;
    cout<<a<<endl;
    cout<<&a<<endl;
    return 0;
}