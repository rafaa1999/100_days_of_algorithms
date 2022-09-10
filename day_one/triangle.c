/**
 *
 * write a programme that takes C column and shows this triangle:
 *
 *      *
 *      **
 *      ***
 *      ****
 *      ***
 *      **
 *      *
 *
 * **/


 #include <stdio.h>
int main() {
   int i,j,C,P;
   P=1;
   printf("give me the number of col:");
   scanf("%d",&C);
   for(i=1;i<=C*2-1;i++){
    for(j=1;j<=P;j++){
        printf("* ");
    }
    if(i<C){
        P++;
    }else{

        P--;
    }

    printf("\n");
   }
   return 0;
}
