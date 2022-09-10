
/**

write a pragramme that takes L cote square
the makes square like this:


    * * * * *
    *       *
    *       *
    *       *
    * * * * *


**/

#include<stdio.h>

int main(){

int i,j,L;

printf("give me the number of L:");
scanf("%d",&L);
// we have three conditions
// in the border of square
// to put the stars and for
// the numbers witch different
// to border we make them empty
for(i=1;i<=L;i++){
    for(j=1;j<=L;j++){
        if(i==1 || i==L || j==1 || j==L ){
            printf("* ");
        }else{
            printf("  ");
        }
    }
        printf("\n");
}



return 0;
}
