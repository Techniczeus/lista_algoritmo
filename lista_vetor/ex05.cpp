#include <stdio.h>
int main()
{
    const int m=10, n=3;
    int c[10][3],i,j,p1,p2,p3;
    p1=0,p2=0,p3=0;
    printf("Digite as notas dos alunos: \n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("Aluno[%d] Nota[%d]: ",i+1,j+1);
                scanf("%d",&c[i][j]);
                if(c[i][0]<5){
                    p1++;
                }else{if(c[i][1]<5){
                    p2++;
                }else{if(c[i][2]<5){
                    p3++;   }  }    }    }   }
    printf("Aluno que foram mal na P1: %d\n",p1);
    printf("Aluno que foram mal na P2: %d\n",p2);
    printf("Aluno que foram mal na P3: %d\n",p3);
}
