#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    const int x=20;
    const int y=30;
    const int z=50;
    int a[20],i,j,b[30],c[50];
        for(i=0;i<x;i++){
            printf("a[%d] = ", i);
            cin >> a[i];
            c[i] = a[i];}
        i=0;
        for(j=x;i<y;i++){
            printf("b[%d] = ", i);
            cin >> b[i];
            c[j] = b[i];
            j++;}
        for(i=0;i<z;i++){
            cout << "\t" <<c[i];   
            }
            
}

