
/**

write a pragramme that takes L number of rows
the show this object:


                    *
                   * *
                  *   *
                 *     *
                *       *
               *         *
              *           *
             *             *
            *               *
           *                 *
          * * * * * * * * * * *




**/

// as a notice first we have three loops
// tow of them nested on the first loops
// witch travels the i line then we should
// determine the relation between i and j
// to delete the parts that we don't need


#include <stdio.h>
int main() {
   int i,j,L;

   printf("give number of lines C:");
   scanf("%d",&L);

   for(i=1;i<=L;i++){
    //this loop is for delete the
    //portion that we don't need it
    for(j=1;j<=L-i;j++){
        printf("  ");
    }
    // we have three conditions
    // to draw the triangle
    for(j=1;j<=(2*i-1);j++){
            if(i==L || j==1 || j==(2*i-1)){
                printf("* ");
            }else{
                printf("  ");
            }
    }
    // move to next line
    printf("\n");
   }
   return 0;
}
