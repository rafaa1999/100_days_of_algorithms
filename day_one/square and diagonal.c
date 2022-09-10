

#include<stdio.h>

int main (){

        int i,j,L;
        printf("give the number of cote of square");
        scanf("%d",&L);
        for(i=1;i<=L;i++){
                for(j=1;j<=
                L;j++){
                        if(i==1 || i==L || j==i || j==L-i+1 || j==1 || j==L){
                            printf("* ");
                        }else{

                        printf("  ");
                        }
                }
                printf("\n");
        }



return 0;
}
