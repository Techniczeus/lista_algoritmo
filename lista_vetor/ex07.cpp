#include <stdio.h>
int main()
{
    const int m=10;
    int i,a[10],s[10],r;
    for(i=0;i<m;i++){
        printf("a[%d]: ",i);
        scanf("%d", &a[i]);
        if(a[i]%2!=0){
            s[i]=a[i]; }
        else{
            s[i] += 0;}}
    for(i=0;i<m;i++){
        if(s[i]!=false){
           r= s[0]+s[1]+s[2]+s[3]+s[4]+s[5]+s[6]+s[7]+s[8]+s[9]; }}
    printf("Result = %d\n",r);
}

