#include <stdio.h>
int main()
{
    const int m=3;
    int a[100],i,re,ap,n1,n2,n3,var[100],var1[100];
    re=0,ap=0;
    for(i=0;i<m;i++){
        printf("Insert 3 values: ");
        scanf("%d %d %d",&n1,&n2,&n3);
        a[i] = n1*n2*n3/3;
        if(a[i]<5){
            re++;
            a[i] =var[i];
        }else{if(a[i]>=5){
            ap++;
            a[i]=var1[i];    }    }
               }
    printf("Greater:%d\n Lower:%d \n",ap,re);
    for(i=0;i<m;i++){
        if(sizeof(a)>=3){
                break;
        }else{
        printf("Resultados Aprovados: %d",var1[i]);
           }
    } 
    for(i=0;i<m;i++){
        printf("Resultados Reprovados: %d",var[i]);
        }  
}    