/**

write a pragramme that takes L number of rows
the makes a diamond like this:

                *****
               *****
              *****
             *****
**/

// always we focus on the relation
// between the indexes i and j
// to build the entire algorithme
// we need three loops :
/*
    first loop:
        move in the line of i 1 --> L
    second loop:
        move in the line of j 1 --> L-i
    third loop:
        move in the line of j 1 --> L
        to put the stars to male diamond
        image
*/
#include<stdio.h>
int main(){

    int i,j,L;
    printf("give me the number of elements: ");
    scanf("%d",&L);
    for (i=1;i<=L;i++){
        for(j=1;j<=L-i;j++){
            printf("  ");
        }
         for(j=1;j<=L;j++){
            printf("* ");
        }
        printf("\n");
    }


return 0;
}
