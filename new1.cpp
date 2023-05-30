#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int arr[10];
    int isFull=0;
    for(int i=0;i<9;i++)
    {
        arr[i]=i+1;
        isFull++;
    }
    cout<<*(arr+5);

}