#include <stdio.h>

int main()
{
    const int m=3;
    int d1[10],d2[10],a[10],i;
    for(i=0;i<m;i++){
        printf("cursos que aluno[%d] pratica: \n opts:\nD1[press 1]\nD2[press 2]\nNone[press 0]\nBoth[press 3]:\n",i);
        scanf("%d", &d1[i]);
        if(d1[i]=0){
            d2[i]=0;
        }else{
            if(d1[i]=1){
            d2[i]=1;
        }else{
        if(d1[i]=2){
            d2[i]=2;
        }else{
        if(d1[i]=3){
            d2[i]=3;        }        }        }        }    }
    for(i=0;i<m;i++){
        if(d2[i]=0){
            printf("Student %d is not taking any of those courses\n",i);
        }else{if(d2[i]=1){
            printf("Student %d is taking course: D1\n",i);
        }else{if(d2[i]=2){
            printf("Student %d is taking course: D2\n",i);
        }else{if(d2[i]=3){
                printf("Student %d is taking both courses\n",i);}	 }	  }	  }	} 	}
