#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    const int x=20;
    int c=20;
    int a[20],i,S;
        for(i=0;i<x;i++){
            printf("a[%d] = ", i);
            cin >> a[i];
            S = (((a[i]) - (a[c-=1]))*((a[i]) - (a[c-=1])));
            S += S;   
            }
        cout << S;
}
